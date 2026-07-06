#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00249070
// Address: 0x249070 - 0x2492b0
void sub_00249070_0x249070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249070_0x249070");
#endif

    switch (ctx->pc) {
        case 0x2490a4u: goto label_2490a4;
        case 0x2490b4u: goto label_2490b4;
        case 0x249100u: goto label_249100;
        case 0x249118u: goto label_249118;
        case 0x249148u: goto label_249148;
        case 0x249160u: goto label_249160;
        case 0x249198u: goto label_249198;
        case 0x2491ccu: goto label_2491cc;
        case 0x2491dcu: goto label_2491dc;
        case 0x2491f0u: goto label_2491f0;
        case 0x249224u: goto label_249224;
        case 0x249248u: goto label_249248;
        case 0x249258u: goto label_249258;
        case 0x249278u: goto label_249278;
        default: break;
    }

    ctx->pc = 0x249070u;

    // 0x249070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249074: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x249074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x249078: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x249078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24907c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24907cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249084: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x249084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x249088: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x249088u;
    {
        const bool branch_taken_0x249088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249088u;
            // 0x24908c: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249088) {
            ctx->pc = 0x249100u;
            goto label_249100;
        }
    }
    ctx->pc = 0x249090u;
    // 0x249090: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x249090u;
    {
        const bool branch_taken_0x249090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249090u;
            // 0x249094: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249090) {
            ctx->pc = 0x249104u;
            goto label_249104;
        }
    }
    ctx->pc = 0x249098u;
    // 0x249098: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x249098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x24909c: 0xc08a254  jal         func_228950
    ctx->pc = 0x24909Cu;
    SET_GPR_U32(ctx, 31, 0x2490A4u);
    ctx->pc = 0x2490A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24909Cu;
            // 0x2490a0: 0x3484ff00  ori         $a0, $a0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490A4u; }
        if (ctx->pc != 0x2490A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490A4u; }
        if (ctx->pc != 0x2490A4u) { return; }
    }
    ctx->pc = 0x2490A4u;
label_2490a4:
    // 0x2490a4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2490a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2490a8: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x2490a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x2490ac: 0xc08a254  jal         func_228950
    ctx->pc = 0x2490ACu;
    SET_GPR_U32(ctx, 31, 0x2490B4u);
    ctx->pc = 0x2490B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2490ACu;
            // 0x2490b0: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490B4u; }
        if (ctx->pc != 0x2490B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2490B4u; }
        if (ctx->pc != 0x2490B4u) { return; }
    }
    ctx->pc = 0x2490B4u;
label_2490b4:
    // 0x2490b4: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2490B4u;
    {
        const bool branch_taken_0x2490b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2490B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2490B4u;
            // 0x2490b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490b4) {
            ctx->pc = 0x249104u;
            goto label_249104;
        }
    }
    ctx->pc = 0x2490BCu;
    // 0x2490bc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2490bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2490c0: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x2490c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2490c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2490c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2490c8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2490C8u;
    {
        const bool branch_taken_0x2490c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2490c8) {
            ctx->pc = 0x2490CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2490C8u;
            // 0x2490cc: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x249108u;
            goto label_249108;
        }
    }
    ctx->pc = 0x2490D0u;
    // 0x2490d0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2490d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2490d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2490d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2490d8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2490d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2490dc: 0x5064000a  beql        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2490DCu;
    {
        const bool branch_taken_0x2490dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2490dc) {
            ctx->pc = 0x2490E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2490DCu;
            // 0x2490e0: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x249108u;
            goto label_249108;
        }
    }
    ctx->pc = 0x2490E4u;
    // 0x2490e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2490e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2490e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2490e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2490ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2490ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2490f0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2490f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2490f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2490f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2490f8: 0x80924ac  j           func_2492B0
    ctx->pc = 0x2490F8u;
    ctx->pc = 0x2490FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2490F8u;
            // 0x2490fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2492B0u;
    if (runtime->hasFunction(0x2492B0u)) {
        auto targetFn = runtime->lookupFunction(0x2492B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002492B0_0x2492b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x249100u;
label_249100:
    // 0x249100: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x249100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_249104:
    // 0x249104: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x249104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_249108:
    // 0x249108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24910c: 0x3e00008  jr          $ra
    ctx->pc = 0x24910Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24910Cu;
            // 0x249110: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x249114u;
    // 0x249114: 0x0  nop
    ctx->pc = 0x249114u;
    // NOP
label_249118:
    // 0x249118: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x249118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24911c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x249120: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x249120u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x249124: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x249124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x249128: 0x8e420190  lw          $v0, 0x190($s2)
    ctx->pc = 0x249128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
    // 0x24912c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x249130: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x249130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x249134: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x249134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x249138: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x249138u;
    {
        const bool branch_taken_0x249138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24913Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249138u;
            // 0x24913c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249138) {
            ctx->pc = 0x249224u;
            goto label_249224;
        }
    }
    ctx->pc = 0x249140u;
    // 0x249140: 0xc08c682  jal         func_231A08
    ctx->pc = 0x249140u;
    SET_GPR_U32(ctx, 31, 0x249148u);
    ctx->pc = 0x249144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249140u;
            // 0x249144: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249148u; }
        if (ctx->pc != 0x249148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249148u; }
        if (ctx->pc != 0x249148u) { return; }
    }
    ctx->pc = 0x249148u;
label_249148:
    // 0x249148: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x249148u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24914c: 0xae400190  sw          $zero, 0x190($s2)
    ctx->pc = 0x24914cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 0));
    // 0x249150: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x249150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x249154: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x249154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x249158: 0x8c4311a0  lw          $v1, 0x11A0($v0)
    ctx->pc = 0x249158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x24915c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x24915cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_249160:
    // 0x249160: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x249160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249164: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x249164u;
    {
        const bool branch_taken_0x249164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249164) {
            ctx->pc = 0x249184u;
            goto label_249184;
        }
    }
    ctx->pc = 0x24916Cu;
    // 0x24916c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x24916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x249170: 0x8c70008c  lw          $s0, 0x8C($v1)
    ctx->pc = 0x249170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x249174: 0x1200fffa  beqz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x249174u;
    {
        const bool branch_taken_0x249174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249174u;
            // 0x249178: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249174) {
            ctx->pc = 0x249160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249160;
        }
    }
    ctx->pc = 0x24917Cu;
    // 0x24917c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x249180: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x249180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_249184:
    // 0x249184: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x249184u;
    {
        const bool branch_taken_0x249184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249184u;
            // 0x249188: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249184) {
            ctx->pc = 0x24921Cu;
            goto label_24921c;
        }
    }
    ctx->pc = 0x24918Cu;
    // 0x24918c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x24918cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249190: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x249190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x249194: 0x0  nop
    ctx->pc = 0x249194u;
    // NOP
label_249198:
    // 0x249198: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x249198u;
    {
        const bool branch_taken_0x249198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24919Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249198u;
            // 0x24919c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249198) {
            ctx->pc = 0x2491E8u;
            goto label_2491e8;
        }
    }
    ctx->pc = 0x2491A0u;
    // 0x2491a0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2491A0u;
    {
        const bool branch_taken_0x2491a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2491A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2491A0u;
            // 0x2491a4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491a0) {
            ctx->pc = 0x2491E4u;
            goto label_2491e4;
        }
    }
    ctx->pc = 0x2491A8u;
    // 0x2491a8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2491a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2491ac: 0x54510015  bnel        $v0, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2491ACu;
    {
        const bool branch_taken_0x2491ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2491ac) {
            ctx->pc = 0x2491B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2491ACu;
            // 0x2491b0: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x249204u;
            goto label_249204;
        }
    }
    ctx->pc = 0x2491B4u;
    // 0x2491b4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2491b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2491b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2491b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2491bc: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2491BCu;
    {
        const bool branch_taken_0x2491bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2491C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2491BCu;
            // 0x2491c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491bc) {
            ctx->pc = 0x2491D4u;
            goto label_2491d4;
        }
    }
    ctx->pc = 0x2491C4u;
    // 0x2491c4: 0xc0924ac  jal         func_2492B0
    ctx->pc = 0x2491C4u;
    SET_GPR_U32(ctx, 31, 0x2491CCu);
    ctx->pc = 0x2491C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2491C4u;
            // 0x2491c8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2492B0u;
    if (runtime->hasFunction(0x2492B0u)) {
        auto targetFn = runtime->lookupFunction(0x2492B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2491CCu; }
        if (ctx->pc != 0x2491CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002492B0_0x2492b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2491CCu; }
        if (ctx->pc != 0x2491CCu) { return; }
    }
    ctx->pc = 0x2491CCu;
label_2491cc:
    // 0x2491cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2491CCu;
    {
        const bool branch_taken_0x2491cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2491CCu;
            // 0x2491d0: 0xae13001c  sw          $s3, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491cc) {
            ctx->pc = 0x2491E8u;
            goto label_2491e8;
        }
    }
    ctx->pc = 0x2491D4u;
label_2491d4:
    // 0x2491d4: 0xc0924ac  jal         func_2492B0
    ctx->pc = 0x2491D4u;
    SET_GPR_U32(ctx, 31, 0x2491DCu);
    ctx->pc = 0x2491D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2491D4u;
            // 0x2491d8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2492B0u;
    if (runtime->hasFunction(0x2492B0u)) {
        auto targetFn = runtime->lookupFunction(0x2492B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2491DCu; }
        if (ctx->pc != 0x2491DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002492B0_0x2492b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2491DCu; }
        if (ctx->pc != 0x2491DCu) { return; }
    }
    ctx->pc = 0x2491DCu;
label_2491dc:
    // 0x2491dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2491DCu;
    {
        const bool branch_taken_0x2491dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2491DCu;
            // 0x2491e0: 0xae13001c  sw          $s3, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491dc) {
            ctx->pc = 0x2491E8u;
            goto label_2491e8;
        }
    }
    ctx->pc = 0x2491E4u;
label_2491e4:
    // 0x2491e4: 0xae510190  sw          $s1, 0x190($s2)
    ctx->pc = 0x2491e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 17));
label_2491e8:
    // 0x2491e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2491E8u;
    {
        const bool branch_taken_0x2491e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2491ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2491E8u;
            // 0x2491ec: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2491e8) {
            ctx->pc = 0x249204u;
            goto label_249204;
        }
    }
    ctx->pc = 0x2491F0u;
label_2491f0:
    // 0x2491f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2491F0u;
    {
        const bool branch_taken_0x2491f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2491f0) {
            ctx->pc = 0x249214u;
            goto label_249214;
        }
    }
    ctx->pc = 0x2491F8u;
    // 0x2491f8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2491f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2491fc: 0x8c70008c  lw          $s0, 0x8C($v1)
    ctx->pc = 0x2491fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x249200: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x249200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_249204:
    // 0x249204: 0x1200fffa  beqz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x249204u;
    {
        const bool branch_taken_0x249204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x249208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249204u;
            // 0x249208: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249204) {
            ctx->pc = 0x2491F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2491f0;
        }
    }
    ctx->pc = 0x24920Cu;
    // 0x24920c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x249210: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x249210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_249214:
    // 0x249214: 0x5600ffe0  bnel        $s0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x249214u;
    {
        const bool branch_taken_0x249214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x249214) {
            ctx->pc = 0x249218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x249214u;
            // 0x249218: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x249198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249198;
        }
    }
    ctx->pc = 0x24921Cu;
label_24921c:
    // 0x24921c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x24921Cu;
    SET_GPR_U32(ctx, 31, 0x249224u);
    ctx->pc = 0x249220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24921Cu;
            // 0x249220: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249224u; }
        if (ctx->pc != 0x249224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249224u; }
        if (ctx->pc != 0x249224u) { return; }
    }
    ctx->pc = 0x249224u;
label_249224:
    // 0x249224: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x249224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x249228: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x249228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24922c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24922cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x249230: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x249230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249234: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x249234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249238: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x249238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24923c: 0x3e00008  jr          $ra
    ctx->pc = 0x24923Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24923Cu;
            // 0x249240: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x249244u;
    // 0x249244: 0x0  nop
    ctx->pc = 0x249244u;
    // NOP
label_249248:
    // 0x249248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24924c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24924cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249250: 0xc08c682  jal         func_231A08
    ctx->pc = 0x249250u;
    SET_GPR_U32(ctx, 31, 0x249258u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249258u; }
        if (ctx->pc != 0x249258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249258u; }
        if (ctx->pc != 0x249258u) { return; }
    }
    ctx->pc = 0x249258u;
label_249258:
    // 0x249258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x249258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24925c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x24925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x249260: 0x8c45ae48  lw          $a1, -0x51B8($v0)
    ctx->pc = 0x249260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946376)));
    // 0x249264: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x249264u;
    {
        const bool branch_taken_0x249264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x249268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249264u;
            // 0x249268: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249264) {
            ctx->pc = 0x2492A4u;
            goto label_2492a4;
        }
    }
    ctx->pc = 0x24926Cu;
    // 0x24926c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x24926cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249270: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x249270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x249274: 0x0  nop
    ctx->pc = 0x249274u;
    // NOP
label_249278:
    // 0x249278: 0x54470008  bnel        $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x249278u;
    {
        const bool branch_taken_0x249278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x249278) {
            ctx->pc = 0x24927Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x249278u;
            // 0x24927c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24929Cu;
            goto label_24929c;
        }
    }
    ctx->pc = 0x249280u;
    // 0x249280: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x249280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x249284: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x249284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x249288: 0x2843021c  slti        $v1, $v0, 0x21C
    ctx->pc = 0x249288u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)540) ? 1 : 0);
    // 0x24928c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24928Cu;
    {
        const bool branch_taken_0x24928c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24928Cu;
            // 0x249290: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24928c) {
            ctx->pc = 0x249298u;
            goto label_249298;
        }
    }
    ctx->pc = 0x249294u;
    // 0x249294: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x249294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_249298:
    // 0x249298: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x249298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_24929c:
    // 0x24929c: 0x54a0fff6  bnel        $a1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x24929Cu;
    {
        const bool branch_taken_0x24929c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24929c) {
            ctx->pc = 0x2492A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24929Cu;
            // 0x2492a0: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x249278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249278;
        }
    }
    ctx->pc = 0x2492A4u;
label_2492a4:
    // 0x2492a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2492a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2492a8: 0x808c698  j           func_231A60
    ctx->pc = 0x2492A8u;
    ctx->pc = 0x2492ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2492A8u;
            // 0x2492ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2492B0u;
    ctx->pc = 0x2492b0u;
}
