#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A89C8
// Address: 0x2a89c8 - 0x2a8b60
void sub_002A89C8_0x2a89c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A89C8_0x2a89c8");
#endif

    switch (ctx->pc) {
        case 0x2a8a40u: goto label_2a8a40;
        case 0x2a8a8cu: goto label_2a8a8c;
        case 0x2a8ad0u: goto label_2a8ad0;
        case 0x2a8aecu: goto label_2a8aec;
        case 0x2a8b14u: goto label_2a8b14;
        case 0x2a8b28u: goto label_2a8b28;
        default: break;
    }

    ctx->pc = 0x2a89c8u;

    // 0x2a89c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a89c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a89cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a89d0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a89d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a89d4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a89d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a89d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a89d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a89dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a89e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a89e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a89e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a89e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a89e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a89ec: 0x1242002c  beq         $s2, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A89ECu;
    {
        const bool branch_taken_0x2a89ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A89F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89ECu;
            // 0x2a89f0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89ec) {
            ctx->pc = 0x2A8AA0u;
            goto label_2a8aa0;
        }
    }
    ctx->pc = 0x2A89F4u;
    // 0x2a89f4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2a89f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a89f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A89F8u;
    {
        const bool branch_taken_0x2a89f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A89FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89F8u;
            // 0x2a89fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89f8) {
            ctx->pc = 0x2A8A10u;
            goto label_2a8a10;
        }
    }
    ctx->pc = 0x2A8A00u;
    // 0x2a8a00: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A8A00u;
    {
        const bool branch_taken_0x2a8a00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A00u;
            // 0x2a8a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a00) {
            ctx->pc = 0x2A8A2Cu;
            goto label_2a8a2c;
        }
    }
    ctx->pc = 0x2A8A08u;
    // 0x2a8a08: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2A8A08u;
    {
        const bool branch_taken_0x2a8a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A08u;
            // 0x2a8a0c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a08) {
            ctx->pc = 0x2A8B44u;
            goto label_2a8b44;
        }
    }
    ctx->pc = 0x2A8A10u;
label_2a8a10:
    // 0x2a8a10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a8a14: 0x12420037  beq         $s2, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A8A14u;
    {
        const bool branch_taken_0x2a8a14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A14u;
            // 0x2a8a18: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a14) {
            ctx->pc = 0x2A8AF4u;
            goto label_2a8af4;
        }
    }
    ctx->pc = 0x2A8A1Cu;
    // 0x2a8a1c: 0x1242003b  beq         $s2, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2A8A1Cu;
    {
        const bool branch_taken_0x2a8a1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A1Cu;
            // 0x2a8a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a1c) {
            ctx->pc = 0x2A8B0Cu;
            goto label_2a8b0c;
        }
    }
    ctx->pc = 0x2A8A24u;
    // 0x2a8a24: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2A8A24u;
    {
        const bool branch_taken_0x2a8a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A24u;
            // 0x2a8a28: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a24) {
            ctx->pc = 0x2A8B44u;
            goto label_2a8b44;
        }
    }
    ctx->pc = 0x2A8A2Cu;
label_2a8a2c:
    // 0x2a8a2c: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8A2Cu;
    {
        const bool branch_taken_0x2a8a2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A2Cu;
            // 0x2a8a30: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a2c) {
            ctx->pc = 0x2A8A38u;
            goto label_2a8a38;
        }
    }
    ctx->pc = 0x2A8A34u;
    // 0x2a8a34: 0x24516a88  addiu       $s1, $v0, 0x6A88
    ctx->pc = 0x2a8a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27272));
label_2a8a38:
    // 0x2a8a38: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A8A38u;
    SET_GPR_U32(ctx, 31, 0x2A8A40u);
    ctx->pc = 0x2A8A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A38u;
            // 0x2a8a3c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A40u; }
        if (ctx->pc != 0x2A8A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A40u; }
        if (ctx->pc != 0x2A8A40u) { return; }
    }
    ctx->pc = 0x2A8A40u;
label_2a8a40:
    // 0x2a8a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a44: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8A44u;
    {
        const bool branch_taken_0x2a8a44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8a44) {
            ctx->pc = 0x2A8A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A44u;
            // 0x2a8a48: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8A54u;
            goto label_2a8a54;
        }
    }
    ctx->pc = 0x2A8A4Cu;
    // 0x2a8a4c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2A8A4Cu;
    {
        const bool branch_taken_0x2a8a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A4Cu;
            // 0x2a8a50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a4c) {
            ctx->pc = 0x2A8B40u;
            goto label_2a8b40;
        }
    }
    ctx->pc = 0x2A8A54u;
label_2a8a54:
    // 0x2a8a54: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2a8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a8a58: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2a8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2a8a5c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2a8a5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a8a60: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x2a8a60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x2a8a64: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x2a8a64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a8a68: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2a8a68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2a8a6c: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x2a8a6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a8a70: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x2a8a70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x2a8a74: 0xdc850028  ld          $a1, 0x28($a0)
    ctx->pc = 0x2a8a74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2a8a78: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2a8a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2a8a7c: 0xfe050028  sd          $a1, 0x28($s0)
    ctx->pc = 0x2a8a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 5));
    // 0x2a8a80: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2a8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2a8a84: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x2A8A84u;
    SET_GPR_U32(ctx, 31, 0x2A8A8Cu);
    ctx->pc = 0x2A8A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A84u;
            // 0x2a8a88: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296DF8u;
    if (runtime->hasFunction(0x296DF8u)) {
        auto targetFn = runtime->lookupFunction(0x296DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A8Cu; }
        if (ctx->pc != 0x2A8A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296DF8_0x296df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8A8Cu; }
        if (ctx->pc != 0x2A8A8Cu) { return; }
    }
    ctx->pc = 0x2A8A8Cu;
label_2a8a8c:
    // 0x2a8a8c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2a8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2a8a90: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x2a8a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x2a8a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8a98: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2A8A98u;
    {
        const bool branch_taken_0x2a8a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8A98u;
            // 0x2a8a9c: 0xae70000c  sw          $s0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8a98) {
            ctx->pc = 0x2A8B40u;
            goto label_2a8b40;
        }
    }
    ctx->pc = 0x2A8AA0u;
label_2a8aa0:
    // 0x2a8aa0: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8AA0u;
    {
        const bool branch_taken_0x2a8aa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8aa0) {
            ctx->pc = 0x2A8AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AA0u;
            // 0x2a8aa4: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8AB4u;
            goto label_2a8ab4;
        }
    }
    ctx->pc = 0x2A8AA8u;
    // 0x2a8aa8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a8aac: 0x24516a88  addiu       $s1, $v0, 0x6A88
    ctx->pc = 0x2a8aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27272));
    // 0x2a8ab0: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x2a8ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2a8ab4:
    // 0x2a8ab4: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A8AB4u;
    {
        const bool branch_taken_0x2a8ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AB4u;
            // 0x2a8ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ab4) {
            ctx->pc = 0x2A8B40u;
            goto label_2a8b40;
        }
    }
    ctx->pc = 0x2A8ABCu;
    // 0x2a8abc: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x2a8abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a8ac0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8AC0u;
    {
        const bool branch_taken_0x2a8ac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8ac0) {
            ctx->pc = 0x2A8AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AC0u;
            // 0x2a8ac4: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8AD8u;
            goto label_2a8ad8;
        }
    }
    ctx->pc = 0x2A8AC8u;
    // 0x2a8ac8: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x2A8AC8u;
    SET_GPR_U32(ctx, 31, 0x2A8AD0u);
    ctx->pc = 0x296E70u;
    if (runtime->hasFunction(0x296E70u)) {
        auto targetFn = runtime->lookupFunction(0x296E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8AD0u; }
        if (ctx->pc != 0x2A8AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296E70_0x296e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8AD0u; }
        if (ctx->pc != 0x2A8AD0u) { return; }
    }
    ctx->pc = 0x2A8AD0u;
label_2a8ad0:
    // 0x2a8ad0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2a8ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2a8ad4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2a8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2a8ad8:
    // 0x2a8ad8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8adc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A8ADCu;
    {
        const bool branch_taken_0x2a8adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8ADCu;
            // 0x2a8ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8adc) {
            ctx->pc = 0x2A8B40u;
            goto label_2a8b40;
        }
    }
    ctx->pc = 0x2A8AE4u;
    // 0x2a8ae4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A8AE4u;
    SET_GPR_U32(ctx, 31, 0x2A8AECu);
    ctx->pc = 0x2A8AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AE4u;
            // 0x2a8ae8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8AECu; }
        if (ctx->pc != 0x2A8AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8AECu; }
        if (ctx->pc != 0x2A8AECu) { return; }
    }
    ctx->pc = 0x2A8AECu;
label_2a8aec:
    // 0x2a8aec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A8AECu;
    {
        const bool branch_taken_0x2a8aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AECu;
            // 0x2a8af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8aec) {
            ctx->pc = 0x2A8B40u;
            goto label_2a8b40;
        }
    }
    ctx->pc = 0x2A8AF4u;
label_2a8af4:
    // 0x2a8af4: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A8AF4u;
    {
        const bool branch_taken_0x2a8af4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8AF4u;
            // 0x2a8af8: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8af4) {
            ctx->pc = 0x2A8B3Cu;
            goto label_2a8b3c;
        }
    }
    ctx->pc = 0x2A8AFCu;
    // 0x2a8afc: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x2a8afcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2a8b00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A8B04u;
    {
        const bool branch_taken_0x2a8b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B04u;
            // 0x2a8b08: 0xfe630000  sd          $v1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b04) {
            ctx->pc = 0x2A8B40u;
            goto label_2a8b40;
        }
    }
    ctx->pc = 0x2A8B0Cu;
label_2a8b0c:
    // 0x2a8b0c: 0xc0adc34  jal         func_2B70D0
    ctx->pc = 0x2A8B0Cu;
    SET_GPR_U32(ctx, 31, 0x2A8B14u);
    ctx->pc = 0x2A8B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B0Cu;
            // 0x2a8b10: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B70D0u;
    if (runtime->hasFunction(0x2B70D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B70D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B14u; }
        if (ctx->pc != 0x2A8B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B70D0_0x2b70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B14u; }
        if (ctx->pc != 0x2A8B14u) { return; }
    }
    ctx->pc = 0x2A8B14u;
label_2a8b14:
    // 0x2a8b14: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a8b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a8b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a8b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b20: 0xc0aa206  jal         func_2A8818
    ctx->pc = 0x2A8B20u;
    SET_GPR_U32(ctx, 31, 0x2A8B28u);
    ctx->pc = 0x2A8B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B20u;
            // 0x2a8b24: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8818u;
    if (runtime->hasFunction(0x2A8818u)) {
        auto targetFn = runtime->lookupFunction(0x2A8818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B28u; }
        if (ctx->pc != 0x2A8B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8818_0x2a8818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B28u; }
        if (ctx->pc != 0x2A8B28u) { return; }
    }
    ctx->pc = 0x2A8B28u;
label_2a8b28:
    // 0x2a8b28: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x2a8b28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2a8b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b30: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x2a8b30u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x2a8b34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8B34u;
    {
        const bool branch_taken_0x2a8b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B34u;
            // 0x2a8b38: 0xfe030028  sd          $v1, 0x28($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8b34) {
            ctx->pc = 0x2A8B40u;
            goto label_2a8b40;
        }
    }
    ctx->pc = 0x2A8B3Cu;
label_2a8b3c:
    // 0x2a8b3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a8b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8b40:
    // 0x2a8b40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a8b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a8b44:
    // 0x2a8b44: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a8b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8b48: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a8b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8b4c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a8b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8b50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a8b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8b54: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B54u;
            // 0x2a8b58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8B5Cu;
    // 0x2a8b5c: 0x0  nop
    ctx->pc = 0x2a8b5cu;
    // NOP
    ctx->pc = 0x2a8b60u;
}
