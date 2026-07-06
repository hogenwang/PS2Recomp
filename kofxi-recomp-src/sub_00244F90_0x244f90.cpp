#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244F90
// Address: 0x244f90 - 0x245048
void sub_00244F90_0x244f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244F90_0x244f90");
#endif

    switch (ctx->pc) {
        case 0x244fc4u: goto label_244fc4;
        case 0x244fd8u: goto label_244fd8;
        default: break;
    }

    ctx->pc = 0x244f90u;

    // 0x244f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x244f94: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x244f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x244f98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x244f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x244f9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x244f9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fa0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x244fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x244fa4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x244fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244fac: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x244facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x244fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x244fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x244fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fbc: 0xc048c96  jal         func_123258
    ctx->pc = 0x244FBCu;
    SET_GPR_U32(ctx, 31, 0x244FC4u);
    ctx->pc = 0x244FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244FBCu;
            // 0x244fc0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FC4u; }
        if (ctx->pc != 0x244FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FC4u; }
        if (ctx->pc != 0x244FC4u) { return; }
    }
    ctx->pc = 0x244FC4u;
label_244fc4:
    // 0x244fc4: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x244fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x244fc8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x244FC8u;
    {
        const bool branch_taken_0x244fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244FC8u;
            // 0x244fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fc8) {
            ctx->pc = 0x245028u;
            goto label_245028;
        }
    }
    ctx->pc = 0x244FD0u;
    // 0x244fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fd4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x244fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_244fd8:
    // 0x244fd8: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x244fd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x244fdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x244fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x244fe0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x244FE0u;
    {
        const bool branch_taken_0x244fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244fe0) {
            ctx->pc = 0x244FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244FE0u;
            // 0x244fe4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x245010u;
            goto label_245010;
        }
    }
    ctx->pc = 0x244FE8u;
    // 0x244fe8: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x244fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x244fec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x244fecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x244ff0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x244FF0u;
    {
        const bool branch_taken_0x244ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244FF0u;
            // 0x244ff4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ff0) {
            ctx->pc = 0x245008u;
            goto label_245008;
        }
    }
    ctx->pc = 0x244FF8u;
    // 0x244ff8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x244ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x244ffc: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x244ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x245000: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245000u;
    {
        const bool branch_taken_0x245000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245000u;
            // 0x245004: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245000) {
            ctx->pc = 0x24500Cu;
            goto label_24500c;
        }
    }
    ctx->pc = 0x245008u;
label_245008:
    // 0x245008: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x245008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_24500c:
    // 0x24500c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24500cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_245010:
    // 0x245010: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x245010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x245014: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245014u;
    {
        const bool branch_taken_0x245014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245014u;
            // 0x245018: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245014) {
            ctx->pc = 0x245028u;
            goto label_245028;
        }
    }
    ctx->pc = 0x24501Cu;
    // 0x24501c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x24501cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x245020: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x245020u;
    {
        const bool branch_taken_0x245020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245020) {
            ctx->pc = 0x245024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x245020u;
            // 0x245024: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244FD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244fd8;
        }
    }
    ctx->pc = 0x245028u;
label_245028:
    // 0x245028: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x245028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24502c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24502cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245030: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x245030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245034: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x245034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24503c: 0x3e00008  jr          $ra
    ctx->pc = 0x24503Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24503Cu;
            // 0x245040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245044u;
    // 0x245044: 0x0  nop
    ctx->pc = 0x245044u;
    // NOP
    ctx->pc = 0x245048u;
}
