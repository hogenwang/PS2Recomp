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

// Function: sub_0024BCB8
// Address: 0x24bcb8 - 0x24bf00
void sub_0024BCB8_0x24bcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BCB8_0x24bcb8");
#endif

    switch (ctx->pc) {
        case 0x24bd3cu: goto label_24bd3c;
        case 0x24bd64u: goto label_24bd64;
        case 0x24bd78u: goto label_24bd78;
        case 0x24bdacu: goto label_24bdac;
        case 0x24bdd4u: goto label_24bdd4;
        case 0x24be0cu: goto label_24be0c;
        case 0x24be64u: goto label_24be64;
        case 0x24be74u: goto label_24be74;
        case 0x24be94u: goto label_24be94;
        case 0x24bed4u: goto label_24bed4;
        default: break;
    }

    ctx->pc = 0x24bcb8u;

    // 0x24bcb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x24bcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24bcbc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24bcc0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x24bcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x24bcc4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x24bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x24bcc8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24bcc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bccc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x24bcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x24bcd0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x24bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x24bcd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24bcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcd8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x24bcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x24bcdc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x24bcdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bce0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x24bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x24bce4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x24bce8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x24bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24bcec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BCECu;
    {
        const bool branch_taken_0x24bcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCECu;
        // 0x24bcf0: 0x8cb20008  lw          $s2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bcec) {
            ctx->pc = 0x24BCFCu;
            goto label_24bcfc;
        }
    }
    ctx->pc = 0x24BCF4u;
    // 0x24bcf4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x24BCF4u;
    {
        const bool branch_taken_0x24bcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BCF4u;
        // 0x24bcf8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bcf4) {
            ctx->pc = 0x24BED8u;
            goto label_24bed8;
        }
    }
    ctx->pc = 0x24BCFCu;
label_24bcfc:
    // 0x24bcfc: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x24bcfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x24bd00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24bd04: 0x14620074  bne         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x24BD04u;
    {
        const bool branch_taken_0x24bd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD04u;
        // 0x24bd08: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd04) {
            ctx->pc = 0x24BED8u;
            goto label_24bed8;
        }
    }
    ctx->pc = 0x24BD0Cu;
    // 0x24bd0c: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x24bd0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24bd10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BD10u;
    {
        const bool branch_taken_0x24bd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD10u;
        // 0x24bd14: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd10) {
            ctx->pc = 0x24BD20u;
            goto label_24bd20;
        }
    }
    ctx->pc = 0x24BD18u;
    // 0x24bd18: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x24BD18u;
    {
        const bool branch_taken_0x24bd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD18u;
        // 0x24bd1c: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd18) {
            ctx->pc = 0x24BED8u;
            goto label_24bed8;
        }
    }
    ctx->pc = 0x24BD20u;
label_24bd20:
    // 0x24bd20: 0x8c5011a0  lw          $s0, 0x11A0($v0)
    ctx->pc = 0x24bd20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x24bd24: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x24BD24u;
    {
        const bool branch_taken_0x24bd24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bd24) {
            ctx->pc = 0x24BDA4u;
            goto label_24bda4;
        }
    }
    ctx->pc = 0x24BD2Cu;
    // 0x24bd2c: 0x8a530007  lwl         $s3, 0x7($s2)
    ctx->pc = 0x24bd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 19) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 19, (int32_t)merged); }
    // 0x24bd30: 0x9a530004  lwr         $s3, 0x4($s2)
    ctx->pc = 0x24bd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 19) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 19) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 19, merged64); }
    // 0x24bd34: 0xc08a254  jal         func_228950
    ctx->pc = 0x24BD34u;
    SET_GPR_U32(ctx, 31, 0x24BD3Cu);
    ctx->pc = 0x24BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD34u;
    // 0x24bd38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24BD34u, 0x24BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD3Cu;
label_24bd3c:
    // 0x24bd3c: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BD3Cu;
    {
        const bool branch_taken_0x24bd3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x24bd3c) {
            ctx->pc = 0x24BD58u;
            goto label_24bd58;
        }
    }
    ctx->pc = 0x24BD44u;
    // 0x24bd44: 0x8a020063  lwl         $v0, 0x63($s0)
    ctx->pc = 0x24bd44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24bd48: 0x9a020060  lwr         $v0, 0x60($s0)
    ctx->pc = 0x24bd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24bd4c: 0xaa420007  swl         $v0, 0x7($s2)
    ctx->pc = 0x24bd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24bd50: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24BD50u;
    {
        const bool branch_taken_0x24bd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD50u;
        // 0x24bd54: 0xba420004  swr         $v0, 0x4($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd50) {
            ctx->pc = 0x24BDA4u;
            goto label_24bda4;
        }
    }
    ctx->pc = 0x24BD58u;
label_24bd58:
    // 0x24bd58: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x24bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x24bd5c: 0xc08a254  jal         func_228950
    ctx->pc = 0x24BD5Cu;
    SET_GPR_U32(ctx, 31, 0x24BD64u);
    ctx->pc = 0x24BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD5Cu;
    // 0x24bd60: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24BD5Cu, 0x24BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD64u;
label_24bd64:
    // 0x24bd64: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24BD64u;
    {
        const bool branch_taken_0x24bd64 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x24BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD64u;
        // 0x24bd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd64) {
            ctx->pc = 0x24BDA4u;
            goto label_24bda4;
        }
    }
    ctx->pc = 0x24BD6Cu;
    // 0x24bd6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24BD6Cu;
    {
        const bool branch_taken_0x24bd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD6Cu;
        // 0x24bd70: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bd6c) {
            ctx->pc = 0x24BD84u;
            goto label_24bd84;
        }
    }
    ctx->pc = 0x24BD74u;
    // 0x24bd74: 0x0  nop
    ctx->pc = 0x24bd74u;
    // NOP
label_24bd78:
    // 0x24bd78: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x24BD78u;
    {
        const bool branch_taken_0x24bd78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bd78) {
            ctx->pc = 0x24BDA4u;
            goto label_24bda4;
        }
    }
    ctx->pc = 0x24BD80u;
    // 0x24bd80: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x24bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_24bd84:
    // 0x24bd84: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x24bd84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24bd88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24bd8c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24BD8Cu;
    {
        const bool branch_taken_0x24bd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bd8c) {
            ctx->pc = 0x24BD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BD8Cu;
            // 0x24bd90: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BD78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24bd78;
        }
    }
    ctx->pc = 0x24BD94u;
    // 0x24bd94: 0x88860073  lwl         $a2, 0x73($a0)
    ctx->pc = 0x24bd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 115); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x24bd98: 0x98860070  lwr         $a2, 0x70($a0)
    ctx->pc = 0x24bd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 112); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x24bd9c: 0xaa460007  swl         $a2, 0x7($s2)
    ctx->pc = 0x24bd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24bda0: 0xba460004  swr         $a2, 0x4($s2)
    ctx->pc = 0x24bda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24bda4:
    // 0x24bda4: 0xc08a254  jal         func_228950
    ctx->pc = 0x24BDA4u;
    SET_GPR_U32(ctx, 31, 0x24BDACu);
    ctx->pc = 0x24BDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDA4u;
    // 0x24bda8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24BDA4u, 0x24BDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDACu;
label_24bdac:
    // 0x24bdac: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x24bdacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x24bdb0: 0x56020014  bnel        $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24BDB0u;
    {
        const bool branch_taken_0x24bdb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24bdb0) {
            ctx->pc = 0x24BDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BDB0u;
            // 0x24bdb4: 0x96530002  lhu         $s3, 0x2($s2) (Delay Slot)
            SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BE04u;
            goto label_24be04;
        }
    }
    ctx->pc = 0x24BDB8u;
    // 0x24bdb8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x24bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x24bdbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24bdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bdc0: 0x8e270050  lw          $a3, 0x50($s1)
    ctx->pc = 0x24bdc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x24bdc4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x24bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x24bdc8: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x24bdc8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x24bdcc: 0xc093302  jal         func_24CC08
    ctx->pc = 0x24BDCCu;
    SET_GPR_U32(ctx, 31, 0x24BDD4u);
    ctx->pc = 0x24BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDCCu;
    // 0x24bdd0: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CC08u, 0x24BDCCu, 0x24BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDD4u;
label_24bdd4:
    // 0x24bdd4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24bdd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bdd8: 0x56a00009  bnel        $s5, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24BDD8u;
    {
        const bool branch_taken_0x24bdd8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bdd8) {
            ctx->pc = 0x24BDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BDD8u;
            // 0x24bddc: 0x8e300044  lw          $s0, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BE00u;
            goto label_24be00;
        }
    }
    ctx->pc = 0x24BDE0u;
    // 0x24bde0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bde4: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x24BDE4u;
    {
        const bool branch_taken_0x24bde4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bde4) {
            ctx->pc = 0x24BDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BDE4u;
            // 0x24bde8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BED8u;
            goto label_24bed8;
        }
    }
    ctx->pc = 0x24BDECu;
    // 0x24bdec: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x24bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x24bdf0: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x24bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x24bdf4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x24bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x24bdf8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x24BDF8u;
    {
        const bool branch_taken_0x24bdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BDF8u;
        // 0x24bdfc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bdf8) {
            ctx->pc = 0x24BED8u;
            goto label_24bed8;
        }
    }
    ctx->pc = 0x24BE00u;
label_24be00:
    // 0x24be00: 0x96530002  lhu         $s3, 0x2($s2)
    ctx->pc = 0x24be00u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_24be04:
    // 0x24be04: 0xc08a254  jal         func_228950
    ctx->pc = 0x24BE04u;
    SET_GPR_U32(ctx, 31, 0x24BE0Cu);
    ctx->pc = 0x24BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE04u;
    // 0x24be08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24BE04u, 0x24BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE0Cu;
label_24be0c:
    // 0x24be0c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BE0Cu;
    {
        const bool branch_taken_0x24be0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x24be0c) {
            ctx->pc = 0x24BE28u;
            goto label_24be28;
        }
    }
    ctx->pc = 0x24BE14u;
    // 0x24be14: 0x8a860047  lwl         $a2, 0x47($s4)
    ctx->pc = 0x24be14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x24be18: 0x9a860044  lwr         $a2, 0x44($s4)
    ctx->pc = 0x24be18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x24be1c: 0xaba60003  swl         $a2, 0x3($sp)
    ctx->pc = 0x24be1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24be20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24BE20u;
    {
        const bool branch_taken_0x24be20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE20u;
        // 0x24be24: 0xbba60000  swr         $a2, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be20) {
            ctx->pc = 0x24BE38u;
            goto label_24be38;
        }
    }
    ctx->pc = 0x24BE28u;
label_24be28:
    // 0x24be28: 0x8aa50007  lwl         $a1, 0x7($s5)
    ctx->pc = 0x24be28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x24be2c: 0x9aa50004  lwr         $a1, 0x4($s5)
    ctx->pc = 0x24be2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x24be30: 0xaba50003  swl         $a1, 0x3($sp)
    ctx->pc = 0x24be30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24be34: 0xbba50000  swr         $a1, 0x0($sp)
    ctx->pc = 0x24be34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24be38:
    // 0x24be38: 0x8a450007  lwl         $a1, 0x7($s2)
    ctx->pc = 0x24be38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x24be3c: 0x9a450004  lwr         $a1, 0x4($s2)
    ctx->pc = 0x24be3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x24be40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24be40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24be44: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24be44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24be48: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x24be48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24be4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24be4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be50: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x24be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x24be54: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x24be54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24be58: 0x9628001a  lhu         $t0, 0x1A($s1)
    ctx->pc = 0x24be58u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x24be5c: 0xc093182  jal         func_24C608
    ctx->pc = 0x24BE5Cu;
    SET_GPR_U32(ctx, 31, 0x24BE64u);
    ctx->pc = 0x24BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE5Cu;
    // 0x24be60: 0xe23824  and         $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C608u, 0x24BE5Cu, 0x24BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE64u;
label_24be64:
    // 0x24be64: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x24BE64u;
    {
        const bool branch_taken_0x24be64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE64u;
        // 0x24be68: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be64) {
            ctx->pc = 0x24BED8u;
            goto label_24bed8;
        }
    }
    ctx->pc = 0x24BE6Cu;
    // 0x24be6c: 0xc08a254  jal         func_228950
    ctx->pc = 0x24BE6Cu;
    SET_GPR_U32(ctx, 31, 0x24BE74u);
    ctx->pc = 0x24BE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE6Cu;
    // 0x24be70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24BE6Cu, 0x24BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE74u;
label_24be74:
    // 0x24be74: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x24be74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x24be78: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24BE78u;
    {
        const bool branch_taken_0x24be78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24be78) {
            ctx->pc = 0x24BEB0u;
            goto label_24beb0;
        }
    }
    ctx->pc = 0x24BE80u;
    // 0x24be80: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x24be80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x24be84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BE84u;
    {
        const bool branch_taken_0x24be84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE84u;
        // 0x24be88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be84) {
            ctx->pc = 0x24BEA0u;
            goto label_24bea0;
        }
    }
    ctx->pc = 0x24BE8Cu;
    // 0x24be8c: 0xc092e84  jal         func_24BA10
    ctx->pc = 0x24BE8Cu;
    SET_GPR_U32(ctx, 31, 0x24BE94u);
    ctx->pc = 0x24BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE8Cu;
    // 0x24be90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA10u, 0x24BE8Cu, 0x24BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE94u;
label_24be94:
    // 0x24be94: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x24be94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x24be98: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x24BE98u;
    {
        const bool branch_taken_0x24be98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE98u;
        // 0x24be9c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be98) {
            ctx->pc = 0x24BED8u;
            goto label_24bed8;
        }
    }
    ctx->pc = 0x24BEA0u;
label_24bea0:
    // 0x24bea0: 0x8aa40007  lwl         $a0, 0x7($s5)
    ctx->pc = 0x24bea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x24bea4: 0x9aa40004  lwr         $a0, 0x4($s5)
    ctx->pc = 0x24bea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x24bea8: 0xaa840047  swl         $a0, 0x47($s4)
    ctx->pc = 0x24bea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24beac: 0xba840044  swr         $a0, 0x44($s4)
    ctx->pc = 0x24beacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24beb0:
    // 0x24beb0: 0x8a430007  lwl         $v1, 0x7($s2)
    ctx->pc = 0x24beb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24beb4: 0x9a430004  lwr         $v1, 0x4($s2)
    ctx->pc = 0x24beb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24beb8: 0xaa83004b  swl         $v1, 0x4B($s4)
    ctx->pc = 0x24beb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 75); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24bebc: 0xba830048  swr         $v1, 0x48($s4)
    ctx->pc = 0x24bebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 72); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24bec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24bec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bec4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24bec8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x24bec8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x24becc: 0xc093234  jal         func_24C8D0
    ctx->pc = 0x24BECCu;
    SET_GPR_U32(ctx, 31, 0x24BED4u);
    ctx->pc = 0x24BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BECCu;
    // 0x24bed0: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C8D0u, 0x24BECCu, 0x24BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BED4u;
label_24bed4:
    // 0x24bed4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24bed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bed8:
    // 0x24bed8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x24bed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24bedc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x24bedcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24bee0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x24bee0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24bee4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x24bee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24bee8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24bee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24beec: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24beecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24bef0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24bef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bef4: 0x3e00008  jr          $ra
    ctx->pc = 0x24BEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BEF4u;
        // 0x24bef8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BEFCu;
    // 0x24befc: 0x0  nop
    ctx->pc = 0x24befcu;
    // NOP
    if (ctx->pc == 0x24befcu) { ctx->pc = 0x24bf00u; }
}
