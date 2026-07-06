#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1010
// Address: 0x2f1010 - 0x2f1090
void sub_002F1010_0x2f1010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1010_0x2f1010");
#endif

    switch (ctx->pc) {
        case 0x2f101cu: goto label_2f101c;
        case 0x2f104cu: goto label_2f104c;
        case 0x2f1054u: goto label_2f1054;
        case 0x2f1060u: goto label_2f1060;
        case 0x2f1070u: goto label_2f1070;
        case 0x2f107cu: goto label_2f107c;
        default: break;
    }

    ctx->pc = 0x2f1010u;

    // 0x2f1010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f1010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f1014: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f1014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f101c:
    // 0x2f101c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f1020: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F1020u;
    {
        const bool branch_taken_0x2f1020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1020u;
            // 0x2f1024: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1020) {
            ctx->pc = 0x2F1060u;
            goto label_2f1060;
        }
    }
    ctx->pc = 0x2F1028u;
    // 0x2f1028: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f1028u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f102c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f102cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f1030: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f1030u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2f1034: 0x24841858  addiu       $a0, $a0, 0x1858
    ctx->pc = 0x2f1034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6232));
    // 0x2f1038: 0x25081840  addiu       $t0, $t0, 0x1840
    ctx->pc = 0x2f1038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6208));
    // 0x2f103c: 0x24050ec3  addiu       $a1, $zero, 0xEC3
    ctx->pc = 0x2f103cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3779));
    // 0x2f1040: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f1040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f1044: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2F1044u;
    SET_GPR_U32(ctx, 31, 0x2F104Cu);
    ctx->pc = 0x2F1048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1044u;
            // 0x2f1048: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F104Cu; }
        if (ctx->pc != 0x2F104Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F104Cu; }
        if (ctx->pc != 0x2F104Cu) { return; }
    }
    ctx->pc = 0x2F104Cu;
label_2f104c:
    // 0x2f104c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f104cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f1054:
    // 0x2f1054: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f1054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f1058: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1058u;
            // 0x2f105c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1060u;
label_2f1060:
    // 0x2f1060: 0x908f0003  lbu         $t7, 0x3($a0)
    ctx->pc = 0x2f1060u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2f1064: 0x51f0fffb  beql        $t7, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F1064u;
    {
        const bool branch_taken_0x2f1064 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 16));
        if (branch_taken_0x2f1064) {
            ctx->pc = 0x2F1068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1064u;
            // 0x2f1068: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1054;
        }
    }
    ctx->pc = 0x2F106Cu;
    // 0x2f106c: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2f106cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2f1070:
    // 0x2f1070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1074: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F1074u;
    SET_GPR_U32(ctx, 31, 0x2F107Cu);
    ctx->pc = 0x2F1078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1074u;
            // 0x2f1078: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (runtime->hasFunction(0x2F0678u)) {
        auto targetFn = runtime->lookupFunction(0x2F0678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F107Cu; }
        if (ctx->pc != 0x2F107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0678_0x2f0678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F107Cu; }
        if (ctx->pc != 0x2F107Cu) { return; }
    }
    ctx->pc = 0x2F107Cu;
label_2f107c:
    // 0x2f107c: 0x904f0003  lbu         $t7, 0x3($v0)
    ctx->pc = 0x2f107cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2f1080: 0x55f0fffb  bnel        $t7, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F1080u;
    {
        const bool branch_taken_0x2f1080 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f1080) {
            ctx->pc = 0x2F1084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1080u;
            // 0x2f1084: 0x90450001  lbu         $a1, 0x1($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F1070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1070;
        }
    }
    ctx->pc = 0x2F1088u;
    // 0x2f1088: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x2F1088u;
    {
        const bool branch_taken_0x2f1088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1088u;
            // 0x2f108c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1088) {
            ctx->pc = 0x2F1054u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1054;
        }
    }
    ctx->pc = 0x2F1090u;
    ctx->pc = 0x2f1090u;
}
