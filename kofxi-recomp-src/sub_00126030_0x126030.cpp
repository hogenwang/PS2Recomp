#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126030
// Address: 0x126030 - 0x126240
void sub_00126030_0x126030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126030_0x126030");
#endif

    switch (ctx->pc) {
        case 0x126064u: goto label_126064;
        case 0x126078u: goto label_126078;
        case 0x126080u: goto label_126080;
        case 0x126084u: goto label_126084;
        case 0x1260acu: goto label_1260ac;
        case 0x1260c8u: goto label_1260c8;
        case 0x1260f8u: goto label_1260f8;
        case 0x126104u: goto label_126104;
        case 0x126154u: goto label_126154;
        case 0x126170u: goto label_126170;
        case 0x126180u: goto label_126180;
        case 0x1261b8u: goto label_1261b8;
        case 0x1261ccu: goto label_1261cc;
        case 0x1261dcu: goto label_1261dc;
        case 0x126200u: goto label_126200;
        case 0x126208u: goto label_126208;
        case 0x126218u: goto label_126218;
        default: break;
    }

    ctx->pc = 0x126030u;

label_126030:
    // 0x126030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x126034: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x126034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x126038: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x126038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12603c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x126040: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x126040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126048: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x126048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12604c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126050: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126054: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x126054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x126058: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x126058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12605c: 0xc0491ee  jal         func_1247B8
    ctx->pc = 0x12605Cu;
    SET_GPR_U32(ctx, 31, 0x126064u);
    ctx->pc = 0x126060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12605Cu;
            // 0x126060: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1247B8u;
    if (runtime->hasFunction(0x1247B8u)) {
        auto targetFn = runtime->lookupFunction(0x1247B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126064u; }
        if (ctx->pc != 0x126064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247B8_0x1247b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126064u; }
        if (ctx->pc != 0x126064u) { return; }
    }
    ctx->pc = 0x126064u;
label_126064:
    // 0x126064: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x126064u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x126068: 0x8deebaf0  lw          $t6, -0x4510($t7)
    ctx->pc = 0x126068u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294949616)));
    // 0x12606c: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x12606cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x126070: 0x55a0000e  bnel        $t5, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x126070u;
    {
        const bool branch_taken_0x126070 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x126070) {
            ctx->pc = 0x126074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126070u;
            // 0x126074: 0x826e0000  lb          $t6, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1260ACu;
            goto label_1260ac;
        }
    }
    ctx->pc = 0x126078u;
label_126078:
    // 0x126078: 0xc0491f0  jal         func_1247C0
    ctx->pc = 0x126078u;
    SET_GPR_U32(ctx, 31, 0x126080u);
    ctx->pc = 0x12607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126078u;
            // 0x12607c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1247C0u;
    if (runtime->hasFunction(0x1247C0u)) {
        auto targetFn = runtime->lookupFunction(0x1247C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126080u; }
        if (ctx->pc != 0x126080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C0_0x1247c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126080u; }
        if (ctx->pc != 0x126080u) { return; }
    }
    ctx->pc = 0x126080u;
label_126080:
    // 0x126080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126084:
    // 0x126084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12608c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12608cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126090: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126094: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x126094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126098: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x126098u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12609c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12609cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1260a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1260a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1260a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1260A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1260A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1260A4u;
            // 0x1260a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1260ACu;
label_1260ac:
    // 0x1260ac: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1260acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260b0: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x1260B0u;
    {
        const bool branch_taken_0x1260b0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1260B0u;
            // 0x1260b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260b0) {
            ctx->pc = 0x1260DCu;
            goto label_1260dc;
        }
    }
    ctx->pc = 0x1260B8u;
    // 0x1260b8: 0x240f003d  addiu       $t7, $zero, 0x3D
    ctx->pc = 0x1260b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1260bc: 0x11cf0007  beq         $t6, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1260BCu;
    {
        const bool branch_taken_0x1260bc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1260C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1260BCu;
            // 0x1260c0: 0x240e003d  addiu       $t6, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260bc) {
            ctx->pc = 0x1260DCu;
            goto label_1260dc;
        }
    }
    ctx->pc = 0x1260C4u;
    // 0x1260c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1260c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1260c8:
    // 0x1260c8: 0x822f0000  lb          $t7, 0x0($s1)
    ctx->pc = 0x1260c8u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1260cc: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1260CCu;
    {
        const bool branch_taken_0x1260cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1260CCu;
            // 0x1260d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260cc) {
            ctx->pc = 0x1260DCu;
            goto label_1260dc;
        }
    }
    ctx->pc = 0x1260D4u;
    // 0x1260d4: 0x55eefffc  bnel        $t7, $t6, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1260D4u;
    {
        const bool branch_taken_0x1260d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        if (branch_taken_0x1260d4) {
            ctx->pc = 0x1260D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1260D4u;
            // 0x1260d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1260C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1260c8;
        }
    }
    ctx->pc = 0x1260DCu;
label_1260dc:
    // 0x1260dc: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1260dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x1260e0: 0x8deebaf0  lw          $t6, -0x4510($t7)
    ctx->pc = 0x1260e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294949616)));
    // 0x1260e4: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x1260e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1260e8: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1260e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1260ec: 0x11e0ffe2  beqz        $t7, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1260ECu;
    {
        const bool branch_taken_0x1260ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1260ECu;
            // 0x1260f0: 0x2415003d  addiu       $s5, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260ec) {
            ctx->pc = 0x126078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126078;
        }
    }
    ctx->pc = 0x1260F4u;
    // 0x1260f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1260f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1260f8:
    // 0x1260f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1260f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260fc: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x1260FCu;
    SET_GPR_U32(ctx, 31, 0x126104u);
    ctx->pc = 0x126100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1260FCu;
            // 0x126100: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126104u; }
        if (ctx->pc != 0x126104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126104u; }
        if (ctx->pc != 0x126104u) { return; }
    }
    ctx->pc = 0x126104u;
label_126104:
    // 0x126104: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x126104u;
    {
        const bool branch_taken_0x126104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126104) {
            ctx->pc = 0x126108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126104u;
            // 0x126108: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126124u;
            goto label_126124;
        }
    }
    ctx->pc = 0x12610Cu;
    // 0x12610c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x12610cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126110: 0x1f28821  addu        $s1, $t7, $s2
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x126114: 0x822e0000  lb          $t6, 0x0($s1)
    ctx->pc = 0x126114u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x126118: 0x11d50007  beq         $t6, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x126118u;
    {
        const bool branch_taken_0x126118 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 21));
        ctx->pc = 0x12611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126118u;
            // 0x12611c: 0x3c0f0036  lui         $t7, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126118) {
            ctx->pc = 0x126138u;
            goto label_126138;
        }
    }
    ctx->pc = 0x126120u;
    // 0x126120: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_126124:
    // 0x126124: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x126124u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126128: 0x55e0fff3  bnel        $t7, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x126128u;
    {
        const bool branch_taken_0x126128 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126128) {
            ctx->pc = 0x12612Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126128u;
            // 0x12612c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1260F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1260f8;
        }
    }
    ctx->pc = 0x126130u;
    // 0x126130: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x126130u;
    {
        const bool branch_taken_0x126130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126130) {
            ctx->pc = 0x126078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126078;
        }
    }
    ctx->pc = 0x126138u;
label_126138:
    // 0x126138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x126138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12613c: 0x8dedbaf0  lw          $t5, -0x4510($t7)
    ctx->pc = 0x12613cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294949616)));
    // 0x126140: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x126140u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x126144: 0x20e7023  subu        $t6, $s0, $t6
    ctx->pc = 0x126144u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
    // 0x126148: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x126148u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
    // 0x12614c: 0xc0491f0  jal         func_1247C0
    ctx->pc = 0x12614Cu;
    SET_GPR_U32(ctx, 31, 0x126154u);
    ctx->pc = 0x126150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12614Cu;
            // 0x126150: 0xaece0000  sw          $t6, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1247C0u;
    if (runtime->hasFunction(0x1247C0u)) {
        auto targetFn = runtime->lookupFunction(0x1247C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126154u; }
        if (ctx->pc != 0x126154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C0_0x1247c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126154u; }
        if (ctx->pc != 0x126154u) { return; }
    }
    ctx->pc = 0x126154u;
label_126154:
    // 0x126154: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x126154u;
    {
        const bool branch_taken_0x126154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126154u;
            // 0x126158: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126154) {
            ctx->pc = 0x126084u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126084;
        }
    }
    ctx->pc = 0x12615Cu;
    // 0x12615c: 0x0  nop
    ctx->pc = 0x12615cu;
    // NOP
    // 0x126160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126168: 0xc04980c  jal         func_126030
    ctx->pc = 0x126168u;
    SET_GPR_U32(ctx, 31, 0x126170u);
    ctx->pc = 0x12616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126168u;
            // 0x12616c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126030u;
    goto label_126030;
    ctx->pc = 0x126170u;
label_126170:
    // 0x126170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126174: 0x3e00008  jr          $ra
    ctx->pc = 0x126174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126174u;
            // 0x126178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12617Cu;
    // 0x12617c: 0x0  nop
    ctx->pc = 0x12617cu;
    // NOP
label_126180:
    // 0x126180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126184: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12618c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12618cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126194: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x126194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x126198: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x126198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12619c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12619cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1261a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1261a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261a4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1261A4u;
    {
        const bool branch_taken_0x1261a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1261A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1261A4u;
            // 0x1261a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261a4) {
            ctx->pc = 0x126200u;
            goto label_126200;
        }
    }
    ctx->pc = 0x1261ACu;
    // 0x1261ac: 0x3c13003e  lui         $s3, 0x3E
    ctx->pc = 0x1261acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
    // 0x1261b0: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1261B0u;
    SET_GPR_U32(ctx, 31, 0x1261B8u);
    ctx->pc = 0x1261B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1261B0u;
            // 0x1261b4: 0x2665b960  addiu       $a1, $s3, -0x46A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1261B8u; }
        if (ctx->pc != 0x1261B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1261B8u; }
        if (ctx->pc != 0x1261B8u) { return; }
    }
    ctx->pc = 0x1261B8u;
label_1261b8:
    // 0x1261b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1261B8u;
    {
        const bool branch_taken_0x1261b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1261BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1261B8u;
            // 0x1261bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261b8) {
            ctx->pc = 0x1261D4u;
            goto label_1261d4;
        }
    }
    ctx->pc = 0x1261C0u;
    // 0x1261c0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1261c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1261c4: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1261C4u;
    SET_GPR_U32(ctx, 31, 0x1261CCu);
    ctx->pc = 0x1261C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1261C4u;
            // 0x1261c8: 0x24a5b928  addiu       $a1, $a1, -0x46D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (runtime->hasFunction(0x129E28u)) {
        auto targetFn = runtime->lookupFunction(0x129E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1261CCu; }
        if (ctx->pc != 0x1261CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E28_0x129e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1261CCu; }
        if (ctx->pc != 0x1261CCu) { return; }
    }
    ctx->pc = 0x1261CCu;
label_1261cc:
    // 0x1261cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1261CCu;
    {
        const bool branch_taken_0x1261cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1261D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1261CCu;
            // 0x1261d0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1261cc) {
            ctx->pc = 0x1261E0u;
            goto label_1261e0;
        }
    }
    ctx->pc = 0x1261D4u;
label_1261d4:
    // 0x1261d4: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1261d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1261d8: 0xae320030  sw          $s2, 0x30($s1)
    ctx->pc = 0x1261d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
label_1261dc:
    // 0x1261dc: 0x266fb960  addiu       $t7, $s3, -0x46A0
    ctx->pc = 0x1261dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949216));
label_1261e0:
    // 0x1261e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1261e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1261e4: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1261e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1261e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1261ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1261ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1261f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1261f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1261f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1261f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1261f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1261F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1261FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1261F8u;
            // 0x1261fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126200u;
label_126200:
    // 0x126200: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x126200u;
    {
        const bool branch_taken_0x126200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126200u;
            // 0x126204: 0x3c13003e  lui         $s3, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126200) {
            ctx->pc = 0x1261DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1261dc;
        }
    }
    ctx->pc = 0x126208u;
label_126208:
    // 0x126208: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x126208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x12620c: 0x3e00008  jr          $ra
    ctx->pc = 0x12620Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12620Cu;
            // 0x126210: 0x2442b930  addiu       $v0, $v0, -0x46D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126214u;
    // 0x126214: 0x0  nop
    ctx->pc = 0x126214u;
    // NOP
label_126218:
    // 0x126218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12621c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x12621cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126224: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x126224u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x126228: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x126228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12622c: 0x8dc4bde8  lw          $a0, -0x4218($t6)
    ctx->pc = 0x12622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294950376)));
    // 0x126230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126234: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x126234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126238: 0x8049860  j           func_126180
    ctx->pc = 0x126238u;
    ctx->pc = 0x12623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126238u;
            // 0x12623c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126180u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_126180;
    ctx->pc = 0x126240u;
    ctx->pc = 0x126240u;
}
