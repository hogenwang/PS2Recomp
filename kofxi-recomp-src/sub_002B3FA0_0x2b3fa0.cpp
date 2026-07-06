#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B3FA0
// Address: 0x2b3fa0 - 0x2b43a0
void sub_002B3FA0_0x2b3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3FA0_0x2b3fa0");
#endif

    switch (ctx->pc) {
        case 0x2b3ffcu: goto label_2b3ffc;
        case 0x2b4064u: goto label_2b4064;
        case 0x2b4088u: goto label_2b4088;
        case 0x2b40d0u: goto label_2b40d0;
        case 0x2b4114u: goto label_2b4114;
        case 0x2b413cu: goto label_2b413c;
        case 0x2b4164u: goto label_2b4164;
        case 0x2b4180u: goto label_2b4180;
        case 0x2b419cu: goto label_2b419c;
        case 0x2b41c0u: goto label_2b41c0;
        case 0x2b41e0u: goto label_2b41e0;
        case 0x2b41f4u: goto label_2b41f4;
        case 0x2b421cu: goto label_2b421c;
        case 0x2b4248u: goto label_2b4248;
        case 0x2b425cu: goto label_2b425c;
        case 0x2b4278u: goto label_2b4278;
        case 0x2b42a8u: goto label_2b42a8;
        case 0x2b42b4u: goto label_2b42b4;
        case 0x2b42f4u: goto label_2b42f4;
        case 0x2b4314u: goto label_2b4314;
        case 0x2b4338u: goto label_2b4338;
        case 0x2b4348u: goto label_2b4348;
        case 0x2b4358u: goto label_2b4358;
        case 0x2b436cu: goto label_2b436c;
        default: break;
    }

    ctx->pc = 0x2b3fa0u;

    // 0x2b3fa0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b3fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b3fa4: 0x24051130  addiu       $a1, $zero, 0x1130
    ctx->pc = 0x2b3fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4400));
    // 0x2b3fa8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2b3fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2b3fac: 0x24061131  addiu       $a2, $zero, 0x1131
    ctx->pc = 0x2b3facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4401));
    // 0x2b3fb0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2b3fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2b3fb4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2b3fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3fb8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2b3fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2b3fbc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2b3fbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fc0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2b3fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2b3fc4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2b3fc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fc8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b3fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b3fcc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2b3fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2b3fd0: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x2b3fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x2b3fd4: 0x36529000  ori         $s2, $s2, 0x9000
    ctx->pc = 0x2b3fd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)36864);
    // 0x2b3fd8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b3fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2b3fdc: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x2b3fdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3fe0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2b3fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2b3fe4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b3fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fe8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3fec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b3fecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ff0: 0xdea80120  ld          $t0, 0x120($s5)
    ctx->pc = 0x2b3ff0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 21), 288)));
    // 0x2b3ff4: 0xc0ab498  jal         func_2AD260
    ctx->pc = 0x2B3FF4u;
    SET_GPR_U32(ctx, 31, 0x2B3FFCu);
    ctx->pc = 0x2B3FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3FF4u;
            // 0x2b3ff8: 0x248400a  movz        $t0, $s2, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD260u;
    if (runtime->hasFunction(0x2AD260u)) {
        auto targetFn = runtime->lookupFunction(0x2AD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3FFCu; }
        if (ctx->pc != 0x2B3FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD260_0x2ad260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3FFCu; }
        if (ctx->pc != 0x2B3FFCu) { return; }
    }
    ctx->pc = 0x2B3FFCu;
label_2b3ffc:
    // 0x2b3ffc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b3ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4000: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b4000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4004: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4004u;
    {
        const bool branch_taken_0x2b4004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4004) {
            ctx->pc = 0x2B4008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4004u;
            // 0x2b4008: 0x8ea40054  lw          $a0, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B401Cu;
            goto label_2b401c;
        }
    }
    ctx->pc = 0x2B400Cu;
    // 0x2b400c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x2b400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2b4010: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b4010u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b4014: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x2B4014u;
    {
        const bool branch_taken_0x2b4014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4014u;
            // 0x2b4018: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4014) {
            ctx->pc = 0x2B4374u;
            goto label_2b4374;
        }
    }
    ctx->pc = 0x2B401Cu;
label_2b401c:
    // 0x2b401c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b4020: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x2b4020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x2b4024: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4024u;
    {
        const bool branch_taken_0x2b4024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4024u;
            // 0x2b4028: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4024) {
            ctx->pc = 0x2B403Cu;
            goto label_2b403c;
        }
    }
    ctx->pc = 0x2B402Cu;
    // 0x2b402c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4034: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2B4034u;
    {
        const bool branch_taken_0x2b4034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4034u;
            // 0x2b4038: 0xac830168  sw          $v1, 0x168($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4034) {
            ctx->pc = 0x2B4370u;
            goto label_2b4370;
        }
    }
    ctx->pc = 0x2B403Cu;
label_2b403c:
    // 0x2b403c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B403Cu;
    {
        const bool branch_taken_0x2b403c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B403Cu;
            // 0x2b4040: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b403c) {
            ctx->pc = 0x2B4054u;
            goto label_2b4054;
        }
    }
    ctx->pc = 0x2B4044u;
    // 0x2b4044: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4048: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2b4048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2b404c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2B404Cu;
    {
        const bool branch_taken_0x2b404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B404Cu;
            // 0x2b4050: 0x24060072  addiu       $a2, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b404c) {
            ctx->pc = 0x2B423Cu;
            goto label_2b423c;
        }
    }
    ctx->pc = 0x2B4054u;
label_2b4054:
    // 0x2b4054: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x2b4054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x2b4058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b405c: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2B405Cu;
    SET_GPR_U32(ctx, 31, 0x2B4064u);
    ctx->pc = 0x2B4060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B405Cu;
            // 0x2b4060: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4064u; }
        if (ctx->pc != 0x2B4064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4064u; }
        if (ctx->pc != 0x2B4064u) { return; }
    }
    ctx->pc = 0x2B4064u;
label_2b4064:
    // 0x2b4064: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2b4064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4068: 0x56c00009  bnel        $s6, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4068u;
    {
        const bool branch_taken_0x2b4068 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4068) {
            ctx->pc = 0x2B406Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4068u;
            // 0x2b406c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4090u;
            goto label_2b4090;
        }
    }
    ctx->pc = 0x2B4070u;
    // 0x2b4070: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4074: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2b4074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2b4078: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b4078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2b407c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b407cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4080: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B4080u;
    SET_GPR_U32(ctx, 31, 0x2B4088u);
    ctx->pc = 0x2B4084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4080u;
            // 0x2b4084: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4088u; }
        if (ctx->pc != 0x2B4088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4088u; }
        if (ctx->pc != 0x2B4088u) { return; }
    }
    ctx->pc = 0x2B4088u;
label_2b4088:
    // 0x2b4088: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2B4088u;
    {
        const bool branch_taken_0x2b4088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4088) {
            ctx->pc = 0x2B4348u;
            goto label_2b4348;
        }
    }
    ctx->pc = 0x2B4090u;
label_2b4090:
    // 0x2b4090: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2b4090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b4094: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2b4094u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b4098: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b4098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2b409c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2b409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2b40a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b40a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b40a4: 0x649825  or          $s3, $v1, $a0
    ctx->pc = 0x2b40a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b40a8: 0x66620003  daddiu      $v0, $s3, 0x3
    ctx->pc = 0x2b40a8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)3);
    // 0x2b40ac: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B40ACu;
    {
        const bool branch_taken_0x2b40ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B40B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B40ACu;
            // 0x2b40b0: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40ac) {
            ctx->pc = 0x2B40C8u;
            goto label_2b40c8;
        }
    }
    ctx->pc = 0x2B40B4u;
    // 0x2b40b4: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x2b40b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b40b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b40bc: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2b40bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2b40c0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2B40C0u;
    {
        const bool branch_taken_0x2b40c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B40C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B40C0u;
            // 0x2b40c4: 0x2406009f  addiu       $a2, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40c0) {
            ctx->pc = 0x2B423Cu;
            goto label_2b423c;
        }
    }
    ctx->pc = 0x2B40C8u;
label_2b40c8:
    // 0x2b40c8: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B40C8u;
    {
        const bool branch_taken_0x2b40c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B40CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B40C8u;
            // 0x2b40cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40c8) {
            ctx->pc = 0x2B4158u;
            goto label_2b4158;
        }
    }
    ctx->pc = 0x2B40D0u;
label_2b40d0:
    // 0x2b40d0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2b40d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b40d4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2b40d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2b40d8: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2b40d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b40dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2b40dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2b40e0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2b40e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2b40e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b40e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b40e8: 0x649025  or          $s2, $v1, $a0
    ctx->pc = 0x2b40e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b40ec: 0x251102d  daddu       $v0, $s2, $s1
    ctx->pc = 0x2b40ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 17));
    // 0x2b40f0: 0x64420003  daddiu      $v0, $v0, 0x3
    ctx->pc = 0x2b40f0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)3);
    // 0x2b40f4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2b40f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b40f8: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2B40F8u;
    {
        const bool branch_taken_0x2b40f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B40FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B40F8u;
            // 0x2b40fc: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40f8) {
            ctx->pc = 0x2B431Cu;
            goto label_2b431c;
        }
    }
    ctx->pc = 0x2B4100u;
    // 0x2b4100: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x2b4100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x2b4104: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4108: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2b4108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2b410c: 0xc0a3954  jal         func_28E550
    ctx->pc = 0x2B410Cu;
    SET_GPR_U32(ctx, 31, 0x2B4114u);
    ctx->pc = 0x2B4110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B410Cu;
            // 0x2b4110: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E550u;
    if (runtime->hasFunction(0x28E550u)) {
        auto targetFn = runtime->lookupFunction(0x28E550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4114u; }
        if (ctx->pc != 0x2B4114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E550_0x28e550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4114u; }
        if (ctx->pc != 0x2B4114u) { return; }
    }
    ctx->pc = 0x2B4114u;
label_2b4114:
    // 0x2b4114: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b4114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4118: 0x1280006a  beqz        $s4, . + 4 + (0x6A << 2)
    ctx->pc = 0x2B4118u;
    {
        const bool branch_taken_0x2b4118 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B411Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4118u;
            // 0x2b411c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4118) {
            ctx->pc = 0x2B42C4u;
            goto label_2b42c4;
        }
    }
    ctx->pc = 0x2B4120u;
    // 0x2b4120: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2b4120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2b4124: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b4124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b4128: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b4128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b412c: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2B412Cu;
    {
        const bool branch_taken_0x2b412c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B412Cu;
            // 0x2b4130: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b412c) {
            ctx->pc = 0x2B42D8u;
            goto label_2b42d8;
        }
    }
    ctx->pc = 0x2B4134u;
    // 0x2b4134: 0xc0af10e  jal         func_2BC438
    ctx->pc = 0x2B4134u;
    SET_GPR_U32(ctx, 31, 0x2B413Cu);
    ctx->pc = 0x2B4138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4134u;
            // 0x2b4138: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B413Cu; }
        if (ctx->pc != 0x2B413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B413Cu; }
        if (ctx->pc != 0x2B413Cu) { return; }
    }
    ctx->pc = 0x2B413Cu;
label_2b413c:
    // 0x2b413c: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2B413Cu;
    {
        const bool branch_taken_0x2b413c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B413Cu;
            // 0x2b4140: 0x66220003  daddiu      $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b413c) {
            ctx->pc = 0x2B42FCu;
            goto label_2b42fc;
        }
    }
    ctx->pc = 0x2B4144u;
    // 0x2b4144: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b4144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4148: 0x52882d  daddu       $s1, $v0, $s2
    ctx->pc = 0x2b4148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x2b414c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2b414cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2b4150: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2B4150u;
    {
        const bool branch_taken_0x2b4150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4150u;
            // 0x2b4154: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4150) {
            ctx->pc = 0x2B40D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b40d0;
        }
    }
    ctx->pc = 0x2B4158u;
label_2b4158:
    // 0x2b4158: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b4158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b415c: 0xc0abeb2  jal         func_2AFAC8
    ctx->pc = 0x2B415Cu;
    SET_GPR_U32(ctx, 31, 0x2B4164u);
    ctx->pc = 0x2B4160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B415Cu;
            // 0x2b4160: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFAC8u;
    if (runtime->hasFunction(0x2AFAC8u)) {
        auto targetFn = runtime->lookupFunction(0x2AFAC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4164u; }
        if (ctx->pc != 0x2B4164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AFAC8_0x2afac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4164u; }
        if (ctx->pc != 0x2B4164u) { return; }
    }
    ctx->pc = 0x2B4164u;
label_2b4164:
    // 0x2b4164: 0x8ea300b4  lw          $v1, 0xB4($s5)
    ctx->pc = 0x2b4164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
    // 0x2b4168: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B4168u;
    {
        const bool branch_taken_0x2b4168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4168u;
            // 0x2b416c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4168) {
            ctx->pc = 0x2B4194u;
            goto label_2b4194;
        }
    }
    ctx->pc = 0x2B4170u;
    // 0x2b4170: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4170u;
    {
        const bool branch_taken_0x2b4170 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4170) {
            ctx->pc = 0x2B4194u;
            goto label_2b4194;
        }
    }
    ctx->pc = 0x2B4178u;
    // 0x2b4178: 0xc0ab558  jal         func_2AD560
    ctx->pc = 0x2B4178u;
    SET_GPR_U32(ctx, 31, 0x2B4180u);
    ctx->pc = 0x2B417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4178u;
            // 0x2b417c: 0xdea400e8  ld          $a0, 0xE8($s5) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 232)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD560u;
    if (runtime->hasFunction(0x2AD560u)) {
        auto targetFn = runtime->lookupFunction(0x2AD560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4180u; }
        if (ctx->pc != 0x2B4180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD560_0x2ad560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4180u; }
        if (ctx->pc != 0x2B4180u) { return; }
    }
    ctx->pc = 0x2B4180u;
label_2b4180:
    // 0x2b4180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4184: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4188: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2b4188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2b418c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2B418Cu;
    {
        const bool branch_taken_0x2b418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B418Cu;
            // 0x2b4190: 0x24060086  addiu       $a2, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b418c) {
            ctx->pc = 0x2B423Cu;
            goto label_2b423c;
        }
    }
    ctx->pc = 0x2B4194u;
label_2b4194:
    // 0x2b4194: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x2B4194u;
    SET_GPR_U32(ctx, 31, 0x2B419Cu);
    ctx->pc = 0x2AF918u;
    if (runtime->hasFunction(0x2AF918u)) {
        auto targetFn = runtime->lookupFunction(0x2AF918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B419Cu; }
        if (ctx->pc != 0x2B419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF918_0x2af918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B419Cu; }
        if (ctx->pc != 0x2B419Cu) { return; }
    }
    ctx->pc = 0x2B419Cu;
label_2b419c:
    // 0x2b419c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b419cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41a0: 0x12200069  beqz        $s1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2B41A0u;
    {
        const bool branch_taken_0x2b41a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b41a0) {
            ctx->pc = 0x2B4348u;
            goto label_2b4348;
        }
    }
    ctx->pc = 0x2B41A8u;
    // 0x2b41a8: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x2b41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2b41ac: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x2b41acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2b41b0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B41B0u;
    {
        const bool branch_taken_0x2b41b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b41b0) {
            ctx->pc = 0x2B41B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B41B0u;
            // 0x2b41b4: 0xac510090  sw          $s1, 0x90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B41C8u;
            goto label_2b41c8;
        }
    }
    ctx->pc = 0x2B41B8u;
    // 0x2b41b8: 0xc0abe62  jal         func_2AF988
    ctx->pc = 0x2B41B8u;
    SET_GPR_U32(ctx, 31, 0x2B41C0u);
    ctx->pc = 0x2AF988u;
    if (runtime->hasFunction(0x2AF988u)) {
        auto targetFn = runtime->lookupFunction(0x2AF988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41C0u; }
        if (ctx->pc != 0x2B41C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF988_0x2af988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41C0u; }
        if (ctx->pc != 0x2B41C0u) { return; }
    }
    ctx->pc = 0x2B41C0u;
label_2b41c0:
    // 0x2b41c0: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x2b41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2b41c4: 0xac510090  sw          $s1, 0x90($v0)
    ctx->pc = 0x2b41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 17));
label_2b41c8:
    // 0x2b41c8: 0xae360068  sw          $s6, 0x68($s1)
    ctx->pc = 0x2b41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 22));
    // 0x2b41cc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2b41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2b41d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b41d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41d4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2b41d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b41d8: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x2B41D8u;
    SET_GPR_U32(ctx, 31, 0x2B41E0u);
    ctx->pc = 0x2B41DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B41D8u;
            // 0x2b41dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E700u;
    if (runtime->hasFunction(0x28E700u)) {
        auto targetFn = runtime->lookupFunction(0x28E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41E0u; }
        if (ctx->pc != 0x2B41E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E700_0x28e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41E0u; }
        if (ctx->pc != 0x2B41E0u) { return; }
    }
    ctx->pc = 0x2B41E0u;
label_2b41e0:
    // 0x2b41e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b41e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41e4: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B41E4u;
    {
        const bool branch_taken_0x2b41e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b41e4) {
            ctx->pc = 0x2B41E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B41E4u;
            // 0x2b41e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4200u;
            goto label_2b4200;
        }
    }
    ctx->pc = 0x2B41ECu;
    // 0x2b41ec: 0xc0aef4c  jal         func_2BBD30
    ctx->pc = 0x2B41ECu;
    SET_GPR_U32(ctx, 31, 0x2B41F4u);
    ctx->pc = 0x2B41F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B41ECu;
            // 0x2b41f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBD30u;
    if (runtime->hasFunction(0x2BBD30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41F4u; }
        if (ctx->pc != 0x2B41F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBD30_0x2bbd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41F4u; }
        if (ctx->pc != 0x2B41F4u) { return; }
    }
    ctx->pc = 0x2B41F4u;
label_2b41f4:
    // 0x2b41f4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B41F4u;
    {
        const bool branch_taken_0x2b41f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b41f4) {
            ctx->pc = 0x2B41F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B41F4u;
            // 0x2b41f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4214u;
            goto label_2b4214;
        }
    }
    ctx->pc = 0x2B41FCu;
    // 0x2b41fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b41fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4200:
    // 0x2b4200: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2b4200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4204: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4208: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2b4208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2b420c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B420Cu;
    {
        const bool branch_taken_0x2b420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B420Cu;
            // 0x2b4210: 0x240600ef  addiu       $a2, $zero, 0xEF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b420c) {
            ctx->pc = 0x2B423Cu;
            goto label_2b423c;
        }
    }
    ctx->pc = 0x2B4214u;
label_2b4214:
    // 0x2b4214: 0xc0ab52e  jal         func_2AD4B8
    ctx->pc = 0x2B4214u;
    SET_GPR_U32(ctx, 31, 0x2B421Cu);
    ctx->pc = 0x2B4218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4214u;
            // 0x2b4218: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD4B8u;
    if (runtime->hasFunction(0x2AD4B8u)) {
        auto targetFn = runtime->lookupFunction(0x2AD4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B421Cu; }
        if (ctx->pc != 0x2B421Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD4B8_0x2ad4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B421Cu; }
        if (ctx->pc != 0x2B421Cu) { return; }
    }
    ctx->pc = 0x2B421Cu;
label_2b421c:
    // 0x2b421c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b421cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4220: 0x603000b  bgezl       $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B4220u;
    {
        const bool branch_taken_0x2b4220 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2b4220) {
            ctx->pc = 0x2B4224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4220u;
            // 0x2b4224: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B4250u;
            goto label_2b4250;
        }
    }
    ctx->pc = 0x2B4228u;
    // 0x2b4228: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b4228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b422c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2b422cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4230: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4234: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2b4234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2b4238: 0x240600f7  addiu       $a2, $zero, 0xF7
    ctx->pc = 0x2b4238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
label_2b423c:
    // 0x2b423c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b423cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4240: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B4240u;
    SET_GPR_U32(ctx, 31, 0x2B4248u);
    ctx->pc = 0x2B4244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4240u;
            // 0x2b4244: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4248u; }
        if (ctx->pc != 0x2B4248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4248u; }
        if (ctx->pc != 0x2B4248u) { return; }
    }
    ctx->pc = 0x2B4248u;
label_2b4248:
    // 0x2b4248: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2B4248u;
    {
        const bool branch_taken_0x2b4248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4248u;
            // 0x2b424c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4248) {
            ctx->pc = 0x2B433Cu;
            goto label_2b433c;
        }
    }
    ctx->pc = 0x2B4250u;
label_2b4250:
    // 0x2b4250: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b4250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4254: 0xc0a3966  jal         func_28E598
    ctx->pc = 0x2B4254u;
    SET_GPR_U32(ctx, 31, 0x2B425Cu);
    ctx->pc = 0x2B4258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4254u;
            // 0x2b4258: 0x1090c0  sll         $s2, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E598u;
    if (runtime->hasFunction(0x28E598u)) {
        auto targetFn = runtime->lookupFunction(0x28E598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B425Cu; }
        if (ctx->pc != 0x2B425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E598_0x28e598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B425Cu; }
        if (ctx->pc != 0x2B425Cu) { return; }
    }
    ctx->pc = 0x2B425Cu;
label_2b425c:
    // 0x2b425c: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x2b425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2b4260: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x2b4260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b4264: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b4264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4268: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4268u;
    {
        const bool branch_taken_0x2b4268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B426Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4268u;
            // 0x2b426c: 0x26420040  addiu       $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4268) {
            ctx->pc = 0x2B427Cu;
            goto label_2b427c;
        }
    }
    ctx->pc = 0x2B4270u;
    // 0x2b4270: 0xc0a390c  jal         func_28E430
    ctx->pc = 0x2B4270u;
    SET_GPR_U32(ctx, 31, 0x2B4278u);
    ctx->pc = 0x28E430u;
    if (runtime->hasFunction(0x28E430u)) {
        auto targetFn = runtime->lookupFunction(0x28E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4278u; }
        if (ctx->pc != 0x2B4278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E430_0x28e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4278u; }
        if (ctx->pc != 0x2B4278u) { return; }
    }
    ctx->pc = 0x2B4278u;
label_2b4278:
    // 0x2b4278: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x2b4278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_2b427c:
    // 0x2b427c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x2b427cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2b4280: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b4280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b4284: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2b4284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2b4288: 0x8ea400b0  lw          $a0, 0xB0($s5)
    ctx->pc = 0x2b4288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2b428c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B428Cu;
    {
        const bool branch_taken_0x2b428c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b428c) {
            ctx->pc = 0x2B4290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B428Cu;
            // 0x2b4290: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B42ACu;
            goto label_2b42ac;
        }
    }
    ctx->pc = 0x2B4294u;
    // 0x2b4294: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x2b4294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x2b4298: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4298u;
    {
        const bool branch_taken_0x2b4298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4298) {
            ctx->pc = 0x2B429Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4298u;
            // 0x2b429c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B42ACu;
            goto label_2b42ac;
        }
    }
    ctx->pc = 0x2B42A0u;
    // 0x2b42a0: 0xc0a390c  jal         func_28E430
    ctx->pc = 0x2B42A0u;
    SET_GPR_U32(ctx, 31, 0x2B42A8u);
    ctx->pc = 0x28E430u;
    if (runtime->hasFunction(0x28E430u)) {
        auto targetFn = runtime->lookupFunction(0x28E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42A8u; }
        if (ctx->pc != 0x2B42A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E430_0x28e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42A8u; }
        if (ctx->pc != 0x2B42A8u) { return; }
    }
    ctx->pc = 0x2B42A8u;
label_2b42a8:
    // 0x2b42a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b42a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b42ac:
    // 0x2b42ac: 0xc0a3966  jal         func_28E598
    ctx->pc = 0x2B42ACu;
    SET_GPR_U32(ctx, 31, 0x2B42B4u);
    ctx->pc = 0x2B42B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42ACu;
            // 0x2b42b0: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E598u;
    if (runtime->hasFunction(0x28E598u)) {
        auto targetFn = runtime->lookupFunction(0x28E598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42B4u; }
        if (ctx->pc != 0x2B42B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E598_0x28e598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42B4u; }
        if (ctx->pc != 0x2B42B4u) { return; }
    }
    ctx->pc = 0x2B42B4u;
label_2b42b4:
    // 0x2b42b4: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x2b42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2b42b8: 0xac540094  sw          $s4, 0x94($v0)
    ctx->pc = 0x2b42b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 20));
    // 0x2b42bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2B42BCu;
    {
        const bool branch_taken_0x2b42bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B42C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42BCu;
            // 0x2b42c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42bc) {
            ctx->pc = 0x2B4348u;
            goto label_2b4348;
        }
    }
    ctx->pc = 0x2B42C4u;
label_2b42c4:
    // 0x2b42c4: 0x2410002a  addiu       $s0, $zero, 0x2A
    ctx->pc = 0x2b42c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2b42c8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b42c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b42cc: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2b42ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2b42d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B42D0u;
    {
        const bool branch_taken_0x2b42d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B42D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42D0u;
            // 0x2b42d4: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42d0) {
            ctx->pc = 0x2B42E8u;
            goto label_2b42e8;
        }
    }
    ctx->pc = 0x2B42D8u;
label_2b42d8:
    // 0x2b42d8: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x2b42d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b42dc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b42dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b42e0: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2b42e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2b42e4: 0x24060087  addiu       $a2, $zero, 0x87
    ctx->pc = 0x2b42e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_2b42e8:
    // 0x2b42e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b42e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b42ec: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B42ECu;
    SET_GPR_U32(ctx, 31, 0x2B42F4u);
    ctx->pc = 0x2B42F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42ECu;
            // 0x2b42f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42F4u; }
        if (ctx->pc != 0x2B42F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42F4u; }
        if (ctx->pc != 0x2B42F4u) { return; }
    }
    ctx->pc = 0x2B42F4u;
label_2b42f4:
    // 0x2b42f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B42F4u;
    {
        const bool branch_taken_0x2b42f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B42F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42F4u;
            // 0x2b42f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42f4) {
            ctx->pc = 0x2B433Cu;
            goto label_2b433c;
        }
    }
    ctx->pc = 0x2B42FCu;
label_2b42fc:
    // 0x2b42fc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b42fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4300: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2b4300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2b4304: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b4304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2b4308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b430c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B430Cu;
    SET_GPR_U32(ctx, 31, 0x2B4314u);
    ctx->pc = 0x2B4310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B430Cu;
            // 0x2b4310: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4314u; }
        if (ctx->pc != 0x2B4314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4314u; }
        if (ctx->pc != 0x2B4314u) { return; }
    }
    ctx->pc = 0x2B4314u;
label_2b4314:
    // 0x2b4314: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B4314u;
    {
        const bool branch_taken_0x2b4314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4314) {
            ctx->pc = 0x2B4348u;
            goto label_2b4348;
        }
    }
    ctx->pc = 0x2B431Cu;
label_2b431c:
    // 0x2b431c: 0x24100032  addiu       $s0, $zero, 0x32
    ctx->pc = 0x2b431cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2b4320: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b4320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b4324: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x2b4324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2b4328: 0x24060087  addiu       $a2, $zero, 0x87
    ctx->pc = 0x2b4328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2b432c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b432cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4330: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B4330u;
    SET_GPR_U32(ctx, 31, 0x2B4338u);
    ctx->pc = 0x2B4334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4330u;
            // 0x2b4334: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4338u; }
        if (ctx->pc != 0x2B4338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4338u; }
        if (ctx->pc != 0x2B4338u) { return; }
    }
    ctx->pc = 0x2B4338u;
label_2b4338:
    // 0x2b4338: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b4338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b433c:
    // 0x2b433c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b433cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4340: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B4340u;
    SET_GPR_U32(ctx, 31, 0x2B4348u);
    ctx->pc = 0x2B4344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4340u;
            // 0x2b4344: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4348u; }
        if (ctx->pc != 0x2B4348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4348u; }
        if (ctx->pc != 0x2B4348u) { return; }
    }
    ctx->pc = 0x2B4348u;
label_2b4348:
    // 0x2b4348: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4348u;
    {
        const bool branch_taken_0x2b4348 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4348) {
            ctx->pc = 0x2B4358u;
            goto label_2b4358;
        }
    }
    ctx->pc = 0x2B4350u;
    // 0x2b4350: 0xc0a390c  jal         func_28E430
    ctx->pc = 0x2B4350u;
    SET_GPR_U32(ctx, 31, 0x2B4358u);
    ctx->pc = 0x2B4354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4350u;
            // 0x2b4354: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E430u;
    if (runtime->hasFunction(0x28E430u)) {
        auto targetFn = runtime->lookupFunction(0x28E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4358u; }
        if (ctx->pc != 0x2B4358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E430_0x28e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4358u; }
        if (ctx->pc != 0x2B4358u) { return; }
    }
    ctx->pc = 0x2B4358u;
label_2b4358:
    // 0x2b4358: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4358u;
    {
        const bool branch_taken_0x2b4358 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4358u;
            // 0x2b435c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4358) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B4360u;
    // 0x2b4360: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2b4360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2b4364: 0xc0af16c  jal         func_2BC5B0
    ctx->pc = 0x2B4364u;
    SET_GPR_U32(ctx, 31, 0x2B436Cu);
    ctx->pc = 0x2B4368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4364u;
            // 0x2b4368: 0x24a5e430  addiu       $a1, $a1, -0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5B0u;
    if (runtime->hasFunction(0x2BC5B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B436Cu; }
        if (ctx->pc != 0x2B436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC5B0_0x2bc5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B436Cu; }
        if (ctx->pc != 0x2B436Cu) { return; }
    }
    ctx->pc = 0x2B436Cu;
label_2b436c:
    // 0x2b436c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2b436cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b4370:
    // 0x2b4370: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b4370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b4374:
    // 0x2b4374: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2b4374u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4378: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2b4378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b437c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2b437cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b4380: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2b4380u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4384: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2b4384u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4388: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b4388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b438c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2b438cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4390: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b4390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4394: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4394u;
            // 0x2b4398: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B439Cu;
    // 0x2b439c: 0x0  nop
    ctx->pc = 0x2b439cu;
    // NOP
    ctx->pc = 0x2b43a0u;
}
