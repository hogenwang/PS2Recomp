#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0B98
// Address: 0x1f0b98 - 0x1f0d58
void sub_001F0B98_0x1f0b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0B98_0x1f0b98");
#endif

    switch (ctx->pc) {
        case 0x1f0c3cu: goto label_1f0c3c;
        case 0x1f0c50u: goto label_1f0c50;
        case 0x1f0ca0u: goto label_1f0ca0;
        case 0x1f0d1cu: goto label_1f0d1c;
        default: break;
    }

    ctx->pc = 0x1f0b98u;

    // 0x1f0b98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f0b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f0b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ba0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f0ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1f0ba4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f0ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ba8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f0ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f0bac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f0bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0bb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f0bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f0bb4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1f0bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f0bb8: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1F0BB8u;
    {
        const bool branch_taken_0x1f0bb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BB8u;
        // 0x1f0bbc: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bb8) {
            ctx->pc = 0x1F0D3Cu;
            goto label_1f0d3c;
        }
    }
    ctx->pc = 0x1F0BC0u;
    // 0x1f0bc0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f0bc4: 0x5224005e  beql        $s1, $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1F0BC4u;
    {
        const bool branch_taken_0x1f0bc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f0bc4) {
            ctx->pc = 0x1F0BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0BC4u;
            // 0x1f0bc8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0D40u;
            goto label_1f0d40;
        }
    }
    ctx->pc = 0x1F0BCCu;
    // 0x1f0bcc: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x1f0bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1f0bd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0BD0u;
    {
        const bool branch_taken_0x1f0bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BD0u;
        // 0x1f0bd4: 0x224102b  sltu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bd0) {
            ctx->pc = 0x1F0BECu;
            goto label_1f0bec;
        }
    }
    ctx->pc = 0x1F0BD8u;
    // 0x1f0bd8: 0x2241823  subu        $v1, $s1, $a0
    ctx->pc = 0x1f0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1f0bdc: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1f0bdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f0be0: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1F0BE0u;
    {
        const bool branch_taken_0x1f0be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BE0u;
        // 0x1f0be4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0be0) {
            ctx->pc = 0x1F0D3Cu;
            goto label_1f0d3c;
        }
    }
    ctx->pc = 0x1F0BE8u;
    // 0x1f0be8: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x1f0be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1f0bec:
    // 0x1f0bec: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F0BECu;
    {
        const bool branch_taken_0x1f0bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bec) {
            ctx->pc = 0x1F0BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0BECu;
            // 0x1f0bf0: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0C58u;
            goto label_1f0c58;
        }
    }
    ctx->pc = 0x1F0BF4u;
    // 0x1f0bf4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f0bf8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f0bfc: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x1f0bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f0c00: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F0C00u;
    {
        const bool branch_taken_0x1f0c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c00) {
            ctx->pc = 0x1F0C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0C00u;
            // 0x1f0c04: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0C58u;
            goto label_1f0c58;
        }
    }
    ctx->pc = 0x1F0C08u;
    // 0x1f0c08: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x1f0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f0c0c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1f0c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f0c10: 0x1a00001d  blez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F0C10u;
    {
        const bool branch_taken_0x1f0c10 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1f0c10) {
            ctx->pc = 0x1F0C88u;
            goto label_1f0c88;
        }
    }
    ctx->pc = 0x1F0C18u;
    // 0x1f0c18: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1f0c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1f0c1c: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1f0c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f0c20: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1F0C20u;
    {
        const bool branch_taken_0x1f0c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C20u;
        // 0x1f0c24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c20) {
            ctx->pc = 0x1F0D3Cu;
            goto label_1f0d3c;
        }
    }
    ctx->pc = 0x1F0C28u;
    // 0x1f0c28: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f0c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0c2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f0c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c30: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x1f0c30u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1f0c34: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F0C34u;
    SET_GPR_U32(ctx, 31, 0x1F0C3Cu);
    ctx->pc = 0x1F0C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C34u;
    // 0x1f0c38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1F0C34u, 0x1F0C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C3Cu;
label_1f0c3c:
    // 0x1f0c3c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1f0c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f0c40: 0x3b02023  subu        $a0, $sp, $s0
    ctx->pc = 0x1f0c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1f0c44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f0c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c48: 0xc049c48  jal         func_127120
    ctx->pc = 0x1F0C48u;
    SET_GPR_U32(ctx, 31, 0x1F0C50u);
    ctx->pc = 0x1F0C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C48u;
    // 0x1f0c4c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1F0C48u, 0x1F0C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C50u;
label_1f0c50:
    // 0x1f0c50: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0C50u;
    {
        const bool branch_taken_0x1f0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c50) {
            ctx->pc = 0x1F0C98u;
            goto label_1f0c98;
        }
    }
    ctx->pc = 0x1F0C58u;
label_1f0c58:
    // 0x1f0c58: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x1f0c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f0c5c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F0C5Cu;
    {
        const bool branch_taken_0x1f0c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C5Cu;
        // 0x1f0c60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c5c) {
            ctx->pc = 0x1F0D3Cu;
            goto label_1f0d3c;
        }
    }
    ctx->pc = 0x1F0C64u;
    // 0x1f0c64: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1f0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1f0c68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f0c6c: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x1f0c6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f0c70: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F0C70u;
    {
        const bool branch_taken_0x1f0c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c70) {
            ctx->pc = 0x1F0C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0C70u;
            // 0x1f0c74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0D3Cu;
            goto label_1f0d3c;
        }
    }
    ctx->pc = 0x1F0C78u;
    // 0x1f0c78: 0x2221823  subu        $v1, $s1, $v0
    ctx->pc = 0x1f0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f0c7c: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x1f0c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f0c80: 0x1e00002e  bgtz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F0C80u;
    {
        const bool branch_taken_0x1f0c80 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1F0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C80u;
        // 0x1f0c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c80) {
            ctx->pc = 0x1F0D3Cu;
            goto label_1f0d3c;
        }
    }
    ctx->pc = 0x1F0C88u;
label_1f0c88:
    // 0x1f0c88: 0x8a220003  lwl         $v0, 0x3($s1)
    ctx->pc = 0x1f0c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1f0c8c: 0x9a220000  lwr         $v0, 0x0($s1)
    ctx->pc = 0x1f0c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1f0c90: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x1f0c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f0c94: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x1f0c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1f0c98:
    // 0x1f0c98: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1F0C98u;
    SET_GPR_U32(ctx, 31, 0x1F0CA0u);
    ctx->pc = 0x1F0C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C98u;
    // 0x1f0c9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1F0C98u, 0x1F0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0CA0u;
label_1f0ca0:
    // 0x1f0ca0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f0ca0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ca4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f0ca8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F0CA8u;
    {
        const bool branch_taken_0x1f0ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CA8u;
        // 0x1f0cac: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ca8) {
            ctx->pc = 0x1F0CE8u;
            goto label_1f0ce8;
        }
    }
    ctx->pc = 0x1F0CB0u;
    // 0x1f0cb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0CB0u;
    {
        const bool branch_taken_0x1f0cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CB0u;
        // 0x1f0cb4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cb0) {
            ctx->pc = 0x1F0CD0u;
            goto label_1f0cd0;
        }
    }
    ctx->pc = 0x1F0CB8u;
    // 0x1f0cb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0cbc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F0CBCu;
    {
        const bool branch_taken_0x1f0cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CBCu;
        // 0x1f0cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cbc) {
            ctx->pc = 0x1F0D00u;
            goto label_1f0d00;
        }
    }
    ctx->pc = 0x1F0CC4u;
    // 0x1f0cc4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1F0CC4u;
    {
        const bool branch_taken_0x1f0cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CC4u;
        // 0x1f0cc8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cc4) {
            ctx->pc = 0x1F0D40u;
            goto label_1f0d40;
        }
    }
    ctx->pc = 0x1F0CCCu;
    // 0x1f0ccc: 0x0  nop
    ctx->pc = 0x1f0cccu;
    // NOP
label_1f0cd0:
    // 0x1f0cd0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F0CD0u;
    {
        const bool branch_taken_0x1f0cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CD0u;
        // 0x1f0cd4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cd0) {
            ctx->pc = 0x1F0D38u;
            goto label_1f0d38;
        }
    }
    ctx->pc = 0x1F0CD8u;
    // 0x1f0cd8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F0CD8u;
    {
        const bool branch_taken_0x1f0cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CD8u;
        // 0x1f0cdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cd8) {
            ctx->pc = 0x1F0D38u;
            goto label_1f0d38;
        }
    }
    ctx->pc = 0x1F0CE0u;
    // 0x1f0ce0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F0CE0u;
    {
        const bool branch_taken_0x1f0ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CE0u;
        // 0x1f0ce4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ce0) {
            ctx->pc = 0x1F0D40u;
            goto label_1f0d40;
        }
    }
    ctx->pc = 0x1F0CE8u;
label_1f0ce8:
    // 0x1f0ce8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0cec: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1f0cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1f0cf0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0CF0u;
    {
        const bool branch_taken_0x1f0cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CF0u;
        // 0x1f0cf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cf0) {
            ctx->pc = 0x1F0D38u;
            goto label_1f0d38;
        }
    }
    ctx->pc = 0x1F0CF8u;
    // 0x1f0cf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0CF8u;
    {
        const bool branch_taken_0x1f0cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CF8u;
        // 0x1f0cfc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cf8) {
            ctx->pc = 0x1F0D14u;
            goto label_1f0d14;
        }
    }
    ctx->pc = 0x1F0D00u;
label_1f0d00:
    // 0x1f0d00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0d04: 0x30420048  andi        $v0, $v0, 0x48
    ctx->pc = 0x1f0d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)72);
    // 0x1f0d08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0D08u;
    {
        const bool branch_taken_0x1f0d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D08u;
        // 0x1f0d0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d08) {
            ctx->pc = 0x1F0D38u;
            goto label_1f0d38;
        }
    }
    ctx->pc = 0x1F0D10u;
    // 0x1f0d10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f0d14:
    // 0x1f0d14: 0xc07c392  jal         func_1F0E48
    ctx->pc = 0x1F0D14u;
    SET_GPR_U32(ctx, 31, 0x1F0D1Cu);
    ctx->pc = 0x1F0D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D14u;
    // 0x1f0d18: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0E48u, 0x1F0D14u, 0x1F0D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D1Cu;
label_1f0d1c:
    // 0x1f0d1c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0D1Cu;
    {
        const bool branch_taken_0x1f0d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d1c) {
            ctx->pc = 0x1F0D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0D1Cu;
            // 0x1f0d20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0D3Cu;
            goto label_1f0d3c;
        }
    }
    ctx->pc = 0x1F0D24u;
    // 0x1f0d24: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0D24u;
    {
        const bool branch_taken_0x1f0d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1f0d24) {
            ctx->pc = 0x1F0D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0D24u;
            // 0x1f0d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0D3Cu;
            goto label_1f0d3c;
        }
    }
    ctx->pc = 0x1F0D2Cu;
    // 0x1f0d2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0D2Cu;
    {
        const bool branch_taken_0x1f0d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D2Cu;
        // 0x1f0d30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d2c) {
            ctx->pc = 0x1F0D3Cu;
            goto label_1f0d3c;
        }
    }
    ctx->pc = 0x1F0D34u;
    // 0x1f0d34: 0x0  nop
    ctx->pc = 0x1f0d34u;
    // NOP
label_1f0d38:
    // 0x1f0d38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0d3c:
    // 0x1f0d3c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f0d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0d40:
    // 0x1f0d40: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f0d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0d44: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f0d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0d48: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f0d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f0d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D4Cu;
        // 0x1f0d50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0D54u;
    // 0x1f0d54: 0x0  nop
    ctx->pc = 0x1f0d54u;
    // NOP
}
