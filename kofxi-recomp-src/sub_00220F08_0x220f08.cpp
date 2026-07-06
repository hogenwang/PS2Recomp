#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220F08
// Address: 0x220f08 - 0x2212b8
void sub_00220F08_0x220f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220F08_0x220f08");
#endif

    switch (ctx->pc) {
        case 0x220f48u: goto label_220f48;
        case 0x220f68u: goto label_220f68;
        case 0x220f88u: goto label_220f88;
        case 0x220fa8u: goto label_220fa8;
        case 0x220fb0u: goto label_220fb0;
        case 0x220fc0u: goto label_220fc0;
        case 0x220fd0u: goto label_220fd0;
        case 0x220fe4u: goto label_220fe4;
        case 0x220fecu: goto label_220fec;
        case 0x221004u: goto label_221004;
        case 0x22100cu: goto label_22100c;
        case 0x22101cu: goto label_22101c;
        case 0x22102cu: goto label_22102c;
        case 0x221058u: goto label_221058;
        case 0x22107cu: goto label_22107c;
        case 0x22108cu: goto label_22108c;
        case 0x2210a8u: goto label_2210a8;
        case 0x2210ccu: goto label_2210cc;
        case 0x2210dcu: goto label_2210dc;
        case 0x2210ecu: goto label_2210ec;
        case 0x22110cu: goto label_22110c;
        case 0x221130u: goto label_221130;
        case 0x22114cu: goto label_22114c;
        case 0x22115cu: goto label_22115c;
        case 0x22116cu: goto label_22116c;
        case 0x2211acu: goto label_2211ac;
        case 0x2211fcu: goto label_2211fc;
        case 0x22122cu: goto label_22122c;
        case 0x221234u: goto label_221234;
        case 0x221244u: goto label_221244;
        case 0x221278u: goto label_221278;
        case 0x221280u: goto label_221280;
        case 0x2212a0u: goto label_2212a0;
        default: break;
    }

    ctx->pc = 0x220f08u;

label_220f08:
    // 0x220f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220f0c: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x220f0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x220f10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x220f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x220f14: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220f14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x220f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220f1c: 0x24e727e0  addiu       $a3, $a3, 0x27E0
    ctx->pc = 0x220f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10208));
    // 0x220f20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220f24: 0x24050324  addiu       $a1, $zero, 0x324
    ctx->pc = 0x220f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 804));
    // 0x220f28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x220f2c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x220f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x220f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x220f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f34: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x220f34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x220f38: 0x25f227d0  addiu       $s2, $t7, 0x27D0
    ctx->pc = 0x220f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 10192));
    // 0x220f3c: 0x8dc81300  lw          $t0, 0x1300($t6)
    ctx->pc = 0x220f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4864)));
    // 0x220f40: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x220F40u;
    SET_GPR_U32(ctx, 31, 0x220F48u);
    ctx->pc = 0x220F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F40u;
            // 0x220f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F48u; }
        if (ctx->pc != 0x220F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F48u; }
        if (ctx->pc != 0x220F48u) { return; }
    }
    ctx->pc = 0x220F48u;
label_220f48:
    // 0x220f48: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x220f48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220f4c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x220f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f54: 0x24e727f0  addiu       $a3, $a3, 0x27F0
    ctx->pc = 0x220f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10224));
    // 0x220f58: 0x8de8130c  lw          $t0, 0x130C($t7)
    ctx->pc = 0x220f58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4876)));
    // 0x220f5c: 0x24050325  addiu       $a1, $zero, 0x325
    ctx->pc = 0x220f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 805));
    // 0x220f60: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x220F60u;
    SET_GPR_U32(ctx, 31, 0x220F68u);
    ctx->pc = 0x220F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F60u;
            // 0x220f64: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F68u; }
        if (ctx->pc != 0x220F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F68u; }
        if (ctx->pc != 0x220F68u) { return; }
    }
    ctx->pc = 0x220F68u;
label_220f68:
    // 0x220f68: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x220f68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220f6c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x220f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f74: 0x24e72800  addiu       $a3, $a3, 0x2800
    ctx->pc = 0x220f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10240));
    // 0x220f78: 0x91e81320  lbu         $t0, 0x1320($t7)
    ctx->pc = 0x220f78u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 4896)));
    // 0x220f7c: 0x24050326  addiu       $a1, $zero, 0x326
    ctx->pc = 0x220f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 806));
    // 0x220f80: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x220F80u;
    SET_GPR_U32(ctx, 31, 0x220F88u);
    ctx->pc = 0x220F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F80u;
            // 0x220f84: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F88u; }
        if (ctx->pc != 0x220F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F88u; }
        if (ctx->pc != 0x220F88u) { return; }
    }
    ctx->pc = 0x220F88u;
label_220f88:
    // 0x220f88: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x220f88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220f8c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x220f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x220f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f94: 0x24e72810  addiu       $a3, $a3, 0x2810
    ctx->pc = 0x220f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10256));
    // 0x220f98: 0x91e81325  lbu         $t0, 0x1325($t7)
    ctx->pc = 0x220f98u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 4901)));
    // 0x220f9c: 0x24050327  addiu       $a1, $zero, 0x327
    ctx->pc = 0x220f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 807));
    // 0x220fa0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x220FA0u;
    SET_GPR_U32(ctx, 31, 0x220FA8u);
    ctx->pc = 0x220FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FA0u;
            // 0x220fa4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FA8u; }
        if (ctx->pc != 0x220FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FA8u; }
        if (ctx->pc != 0x220FA8u) { return; }
    }
    ctx->pc = 0x220FA8u;
label_220fa8:
    // 0x220fa8: 0xc0bae02  jal         func_2EB808
    ctx->pc = 0x220FA8u;
    SET_GPR_U32(ctx, 31, 0x220FB0u);
    ctx->pc = 0x220FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FA8u;
            // 0x220fac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EB808u;
    if (runtime->hasFunction(0x2EB808u)) {
        auto targetFn = runtime->lookupFunction(0x2EB808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FB0u; }
        if (ctx->pc != 0x220FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EB808_0x2eb808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FB0u; }
        if (ctx->pc != 0x220FB0u) { return; }
    }
    ctx->pc = 0x220FB0u;
label_220fb0:
    // 0x220fb0: 0x4410014  bgez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x220FB0u;
    {
        const bool branch_taken_0x220fb0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x220FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220FB0u;
            // 0x220fb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fb0) {
            ctx->pc = 0x221004u;
            goto label_221004;
        }
    }
    ctx->pc = 0x220FB8u;
    // 0x220fb8: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x220FB8u;
    SET_GPR_U32(ctx, 31, 0x220FC0u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FC0u; }
        if (ctx->pc != 0x220FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FC0u; }
        if (ctx->pc != 0x220FC0u) { return; }
    }
    ctx->pc = 0x220FC0u;
label_220fc0:
    // 0x220fc0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x220fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fc8: 0xc08867a  jal         func_2219E8
    ctx->pc = 0x220FC8u;
    SET_GPR_U32(ctx, 31, 0x220FD0u);
    ctx->pc = 0x220FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FC8u;
            // 0x220fcc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FD0u; }
        if (ctx->pc != 0x220FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FD0u; }
        if (ctx->pc != 0x220FD0u) { return; }
    }
    ctx->pc = 0x220FD0u;
label_220fd0:
    // 0x220fd0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x220fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x220fd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fd8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x220fd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fdc: 0x25082820  addiu       $t0, $t0, 0x2820
    ctx->pc = 0x220fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10272));
    // 0x220fe0: 0x2405032d  addiu       $a1, $zero, 0x32D
    ctx->pc = 0x220fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 813));
label_220fe4:
    // 0x220fe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fe8: 0x2407b1e0  addiu       $a3, $zero, -0x4E20
    ctx->pc = 0x220fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947296));
label_220fec:
    // 0x220fec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220ff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220ff4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220ff8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220ffc: 0x8089794  j           func_225E50
    ctx->pc = 0x220FFCu;
    ctx->pc = 0x221000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FFCu;
            // 0x221000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x221004u;
label_221004:
    // 0x221004: 0xc0bade6  jal         func_2EB798
    ctx->pc = 0x221004u;
    SET_GPR_U32(ctx, 31, 0x22100Cu);
    ctx->pc = 0x2EB798u;
    if (runtime->hasFunction(0x2EB798u)) {
        auto targetFn = runtime->lookupFunction(0x2EB798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22100Cu; }
        if (ctx->pc != 0x22100Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EB798_0x2eb798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22100Cu; }
        if (ctx->pc != 0x22100Cu) { return; }
    }
    ctx->pc = 0x22100Cu;
label_22100c:
    // 0x22100c: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22100Cu;
    {
        const bool branch_taken_0x22100c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x221010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22100Cu;
            // 0x221010: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22100c) {
            ctx->pc = 0x221044u;
            goto label_221044;
        }
    }
    ctx->pc = 0x221014u;
    // 0x221014: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221014u;
    SET_GPR_U32(ctx, 31, 0x22101Cu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22101Cu; }
        if (ctx->pc != 0x22101Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22101Cu; }
        if (ctx->pc != 0x22101Cu) { return; }
    }
    ctx->pc = 0x22101Cu;
label_22101c:
    // 0x22101c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22101cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221024: 0xc08867a  jal         func_2219E8
    ctx->pc = 0x221024u;
    SET_GPR_U32(ctx, 31, 0x22102Cu);
    ctx->pc = 0x221028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221024u;
            // 0x221028: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22102Cu; }
        if (ctx->pc != 0x22102Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22102Cu; }
        if (ctx->pc != 0x22102Cu) { return; }
    }
    ctx->pc = 0x22102Cu;
label_22102c:
    // 0x22102c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x22102cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221034: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x221034u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221038: 0x25082838  addiu       $t0, $t0, 0x2838
    ctx->pc = 0x221038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10296));
    // 0x22103c: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x22103Cu;
    {
        const bool branch_taken_0x22103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22103Cu;
            // 0x221040: 0x24050334  addiu       $a1, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22103c) {
            ctx->pc = 0x220FE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220fe4;
        }
    }
    ctx->pc = 0x221044u;
label_221044:
    // 0x221044: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x221044u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x221048: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22104c: 0x8de5ca10  lw          $a1, -0x35F0($t7)
    ctx->pc = 0x22104cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953488)));
    // 0x221050: 0xc089e80  jal         func_227A00
    ctx->pc = 0x221050u;
    SET_GPR_U32(ctx, 31, 0x221058u);
    ctx->pc = 0x221054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221050u;
            // 0x221054: 0x24842850  addiu       $a0, $a0, 0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227A00u;
    if (runtime->hasFunction(0x227A00u)) {
        auto targetFn = runtime->lookupFunction(0x227A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221058u; }
        if (ctx->pc != 0x221058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227A00_0x227a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221058u; }
        if (ctx->pc != 0x221058u) { return; }
    }
    ctx->pc = 0x221058u;
label_221058:
    // 0x221058: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x221058u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22105c: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x22105cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x221060: 0x8ded130c  lw          $t5, 0x130C($t7)
    ctx->pc = 0x221060u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4876)));
    // 0x221064: 0x11ae0032  beq         $t5, $t6, . + 4 + (0x32 << 2)
    ctx->pc = 0x221064u;
    {
        const bool branch_taken_0x221064 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x221068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221064u;
            // 0x221068: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221064) {
            ctx->pc = 0x221130u;
            goto label_221130;
        }
    }
    ctx->pc = 0x22106Cu;
    // 0x22106c: 0x11af0011  beq         $t5, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x22106Cu;
    {
        const bool branch_taken_0x22106c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x221070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22106Cu;
            // 0x221070: 0x3c0e003a  lui         $t6, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22106c) {
            ctx->pc = 0x2210B4u;
            goto label_2210b4;
        }
    }
    ctx->pc = 0x221074u;
    // 0x221074: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221074u;
    SET_GPR_U32(ctx, 31, 0x22107Cu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22107Cu; }
        if (ctx->pc != 0x22107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22107Cu; }
        if (ctx->pc != 0x22107Cu) { return; }
    }
    ctx->pc = 0x22107Cu;
label_22107c:
    // 0x22107c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22107cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221084: 0xc08867a  jal         func_2219E8
    ctx->pc = 0x221084u;
    SET_GPR_U32(ctx, 31, 0x22108Cu);
    ctx->pc = 0x221088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221084u;
            // 0x221088: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22108Cu; }
        if (ctx->pc != 0x22108Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22108Cu; }
        if (ctx->pc != 0x22108Cu) { return; }
    }
    ctx->pc = 0x22108Cu;
label_22108c:
    // 0x22108c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x22108cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x221090: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221094: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221094u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221098: 0x248427d0  addiu       $a0, $a0, 0x27D0
    ctx->pc = 0x221098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10192));
    // 0x22109c: 0x8de9130c  lw          $t1, 0x130C($t7)
    ctx->pc = 0x22109cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4876)));
    // 0x2210a0: 0x25082608  addiu       $t0, $t0, 0x2608
    ctx->pc = 0x2210a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9736));
    // 0x2210a4: 0x24050364  addiu       $a1, $zero, 0x364
    ctx->pc = 0x2210a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 868));
label_2210a8:
    // 0x2210a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2210a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210ac: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x2210ACu;
    {
        const bool branch_taken_0x2210ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2210B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210ACu;
            // 0x2210b0: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210ac) {
            ctx->pc = 0x220FECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220fec;
        }
    }
    ctx->pc = 0x2210B4u;
label_2210b4:
    // 0x2210b4: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x2210b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x2210b8: 0x8dc4ca00  lw          $a0, -0x3600($t6)
    ctx->pc = 0x2210b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294953472)));
    // 0x2210bc: 0x25ef2640  addiu       $t7, $t7, 0x2640
    ctx->pc = 0x2210bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9792));
    // 0x2210c0: 0xae2f0010  sw          $t7, 0x10($s1)
    ctx->pc = 0x2210c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 15));
    // 0x2210c4: 0xc0ba8e2  jal         func_2EA388
    ctx->pc = 0x2210C4u;
    SET_GPR_U32(ctx, 31, 0x2210CCu);
    ctx->pc = 0x2210C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2210C4u;
            // 0x2210c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA388u;
    if (runtime->hasFunction(0x2EA388u)) {
        auto targetFn = runtime->lookupFunction(0x2EA388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210CCu; }
        if (ctx->pc != 0x2210CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA388_0x2ea388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210CCu; }
        if (ctx->pc != 0x2210CCu) { return; }
    }
    ctx->pc = 0x2210CCu;
label_2210cc:
    // 0x2210cc: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2210CCu;
    {
        const bool branch_taken_0x2210cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2210D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210CCu;
            // 0x2210d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210cc) {
            ctx->pc = 0x221104u;
            goto label_221104;
        }
    }
    ctx->pc = 0x2210D4u;
    // 0x2210d4: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2210D4u;
    SET_GPR_U32(ctx, 31, 0x2210DCu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210DCu; }
        if (ctx->pc != 0x2210DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210DCu; }
        if (ctx->pc != 0x2210DCu) { return; }
    }
    ctx->pc = 0x2210DCu;
label_2210dc:
    // 0x2210dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2210dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2210e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2210e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210e4: 0xc08867a  jal         func_2219E8
    ctx->pc = 0x2210E4u;
    SET_GPR_U32(ctx, 31, 0x2210ECu);
    ctx->pc = 0x2210E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2210E4u;
            // 0x2210e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210ECu; }
        if (ctx->pc != 0x2210ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2210ECu; }
        if (ctx->pc != 0x2210ECu) { return; }
    }
    ctx->pc = 0x2210ECu;
label_2210ec:
    // 0x2210ec: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x2210ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x2210f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2210f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210f4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2210f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210f8: 0x25082648  addiu       $t0, $t0, 0x2648
    ctx->pc = 0x2210f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9800));
    // 0x2210fc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x2210FCu;
    {
        const bool branch_taken_0x2210fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210FCu;
            // 0x221100: 0x2405035d  addiu       $a1, $zero, 0x35D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 861));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210fc) {
            ctx->pc = 0x2210A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2210a8;
        }
    }
    ctx->pc = 0x221104u;
label_221104:
    // 0x221104: 0x3c0f002f  lui         $t7, 0x2F
    ctx->pc = 0x221104u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)47 << 16));
    // 0x221108: 0x25efa460  addiu       $t7, $t7, -0x5BA0
    ctx->pc = 0x221108u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943840));
label_22110c:
    // 0x22110c: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x22110cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x221110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221114: 0xadcfca1c  sw          $t7, -0x35E4($t6)
    ctx->pc = 0x221114u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294953500), GPR_U32(ctx, 15));
    // 0x221118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22111c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22111cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x221120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221124: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x221124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x221128: 0x3e00008  jr          $ra
    ctx->pc = 0x221128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221128u;
            // 0x22112c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221130u;
label_221130:
    // 0x221130: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x221130u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x221134: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x221134u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x221138: 0x8dc4ca00  lw          $a0, -0x3600($t6)
    ctx->pc = 0x221138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294953472)));
    // 0x22113c: 0x25ef2680  addiu       $t7, $t7, 0x2680
    ctx->pc = 0x22113cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9856));
    // 0x221140: 0xae2f0010  sw          $t7, 0x10($s1)
    ctx->pc = 0x221140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 15));
    // 0x221144: 0xc0ba2e2  jal         func_2E8B88
    ctx->pc = 0x221144u;
    SET_GPR_U32(ctx, 31, 0x22114Cu);
    ctx->pc = 0x221148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221144u;
            // 0x221148: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8B88u;
    if (runtime->hasFunction(0x2E8B88u)) {
        auto targetFn = runtime->lookupFunction(0x2E8B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22114Cu; }
        if (ctx->pc != 0x22114Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8B88_0x2e8b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22114Cu; }
        if (ctx->pc != 0x22114Cu) { return; }
    }
    ctx->pc = 0x22114Cu;
label_22114c:
    // 0x22114c: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22114Cu;
    {
        const bool branch_taken_0x22114c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x221150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22114Cu;
            // 0x221150: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22114c) {
            ctx->pc = 0x221184u;
            goto label_221184;
        }
    }
    ctx->pc = 0x221154u;
    // 0x221154: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x221154u;
    SET_GPR_U32(ctx, 31, 0x22115Cu);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22115Cu; }
        if (ctx->pc != 0x22115Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22115Cu; }
        if (ctx->pc != 0x22115Cu) { return; }
    }
    ctx->pc = 0x22115Cu;
label_22115c:
    // 0x22115c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x22115cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221164: 0xc08867a  jal         func_2219E8
    ctx->pc = 0x221164u;
    SET_GPR_U32(ctx, 31, 0x22116Cu);
    ctx->pc = 0x221168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221164u;
            // 0x221168: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2219E8u;
    if (runtime->hasFunction(0x2219E8u)) {
        auto targetFn = runtime->lookupFunction(0x2219E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22116Cu; }
        if (ctx->pc != 0x22116Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002219E8_0x2219e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22116Cu; }
        if (ctx->pc != 0x22116Cu) { return; }
    }
    ctx->pc = 0x22116Cu;
label_22116c:
    // 0x22116c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x22116cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221174: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x221174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221178: 0x25082688  addiu       $t0, $t0, 0x2688
    ctx->pc = 0x221178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9864));
    // 0x22117c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x22117Cu;
    {
        const bool branch_taken_0x22117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22117Cu;
            // 0x221180: 0x24050351  addiu       $a1, $zero, 0x351 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 849));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22117c) {
            ctx->pc = 0x2210A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2210a8;
        }
    }
    ctx->pc = 0x221184u;
label_221184:
    // 0x221184: 0x3c0f002f  lui         $t7, 0x2F
    ctx->pc = 0x221184u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)47 << 16));
    // 0x221188: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x221188u;
    {
        const bool branch_taken_0x221188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22118Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221188u;
            // 0x22118c: 0x25ef8c68  addiu       $t7, $t7, -0x7398 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294937704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221188) {
            ctx->pc = 0x22110Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22110c;
        }
    }
    ctx->pc = 0x221190u;
    // 0x221190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x221198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22119c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2211a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2211a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211a4: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x2211A4u;
    SET_GPR_U32(ctx, 31, 0x2211ACu);
    ctx->pc = 0x2211A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2211A4u;
            // 0x2211a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (runtime->hasFunction(0x21FE80u)) {
        auto targetFn = runtime->lookupFunction(0x21FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211ACu; }
        if (ctx->pc != 0x2211ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FE80_0x21fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211ACu; }
        if (ctx->pc != 0x2211ACu) { return; }
    }
    ctx->pc = 0x2211ACu;
label_2211ac:
    // 0x2211ac: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x2211acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x2211b0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2211b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2211b4: 0x25ef0870  addiu       $t7, $t7, 0x870
    ctx->pc = 0x2211b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2160));
    // 0x2211b8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2211b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2211bc: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x2211bcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x2211c0: 0xae2f003c  sw          $t7, 0x3C($s1)
    ctx->pc = 0x2211c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 15));
    // 0x2211c4: 0x25ce0958  addiu       $t6, $t6, 0x958
    ctx->pc = 0x2211c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2392));
    // 0x2211c8: 0xae2e0034  sw          $t6, 0x34($s1)
    ctx->pc = 0x2211c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 14));
    // 0x2211cc: 0x3c0f0022  lui         $t7, 0x22
    ctx->pc = 0x2211ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)34 << 16));
    // 0x2211d0: 0x25ef0b40  addiu       $t7, $t7, 0xB40
    ctx->pc = 0x2211d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2880));
    // 0x2211d4: 0x3c0e0022  lui         $t6, 0x22
    ctx->pc = 0x2211d4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)34 << 16));
    // 0x2211d8: 0xae2f0038  sw          $t7, 0x38($s1)
    ctx->pc = 0x2211d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 15));
    // 0x2211dc: 0x25ce0c80  addiu       $t6, $t6, 0xC80
    ctx->pc = 0x2211dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3200));
    // 0x2211e0: 0xae2e0040  sw          $t6, 0x40($s1)
    ctx->pc = 0x2211e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 14));
    // 0x2211e4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2211e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2211e8: 0x8deec9ec  lw          $t6, -0x3614($t7)
    ctx->pc = 0x2211e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953452)));
    // 0x2211ec: 0x15c0000f  bnez        $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x2211ECu;
    {
        const bool branch_taken_0x2211ec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2211F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2211ECu;
            // 0x2211f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2211ec) {
            ctx->pc = 0x22122Cu;
            goto label_22122c;
        }
    }
    ctx->pc = 0x2211F4u;
    // 0x2211f4: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x2211F4u;
    SET_GPR_U32(ctx, 31, 0x2211FCu);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211FCu; }
        if (ctx->pc != 0x2211FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2211FCu; }
        if (ctx->pc != 0x2211FCu) { return; }
    }
    ctx->pc = 0x2211FCu;
label_2211fc:
    // 0x2211fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2211fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221204: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221204u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22120c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221210: 0x24842868  addiu       $a0, $a0, 0x2868
    ctx->pc = 0x221210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10344));
    // 0x221214: 0x25082878  addiu       $t0, $t0, 0x2878
    ctx->pc = 0x221214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10360));
    // 0x221218: 0x24050388  addiu       $a1, $zero, 0x388
    ctx->pc = 0x221218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x22121c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22121cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221220: 0x2407b1e0  addiu       $a3, $zero, -0x4E20
    ctx->pc = 0x221220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947296));
    // 0x221224: 0x8089794  j           func_225E50
    ctx->pc = 0x221224u;
    ctx->pc = 0x221228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221224u;
            // 0x221228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x22122Cu;
label_22122c:
    // 0x22122c: 0xc0883c2  jal         func_220F08
    ctx->pc = 0x22122Cu;
    SET_GPR_U32(ctx, 31, 0x221234u);
    ctx->pc = 0x220F08u;
    goto label_220f08;
    ctx->pc = 0x221234u;
label_221234:
    // 0x221234: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x221234u;
    {
        const bool branch_taken_0x221234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221234) {
            ctx->pc = 0x221278u;
            goto label_221278;
        }
    }
    ctx->pc = 0x22123Cu;
    // 0x22123c: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x22123Cu;
    SET_GPR_U32(ctx, 31, 0x221244u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221244u; }
        if (ctx->pc != 0x221244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221244u; }
        if (ctx->pc != 0x221244u) { return; }
    }
    ctx->pc = 0x221244u;
label_221244:
    // 0x221244: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22124c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22124cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221258: 0x25082898  addiu       $t0, $t0, 0x2898
    ctx->pc = 0x221258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10392));
    // 0x22125c: 0x24050390  addiu       $a1, $zero, 0x390
    ctx->pc = 0x22125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x221260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221264: 0x2407b1e0  addiu       $a3, $zero, -0x4E20
    ctx->pc = 0x221264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294947296));
    // 0x221268: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x221268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22126c: 0x24842868  addiu       $a0, $a0, 0x2868
    ctx->pc = 0x22126cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10344));
    // 0x221270: 0x8089794  j           func_225E50
    ctx->pc = 0x221270u;
    ctx->pc = 0x221274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221270u;
            // 0x221274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x221278u;
label_221278:
    // 0x221278: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x221278u;
    SET_GPR_U32(ctx, 31, 0x221280u);
    ctx->pc = 0x21FEB0u;
    if (runtime->hasFunction(0x21FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x21FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221280u; }
        if (ctx->pc != 0x221280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021FEB0_0x21feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221280u; }
        if (ctx->pc != 0x221280u) { return; }
    }
    ctx->pc = 0x221280u;
label_221280:
    // 0x221280: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x221280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x221284: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x221284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x221288: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22128c: 0x24e728b0  addiu       $a3, $a3, 0x28B0
    ctx->pc = 0x22128cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10416));
    // 0x221290: 0x24050395  addiu       $a1, $zero, 0x395
    ctx->pc = 0x221290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 917));
    // 0x221294: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x221294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x221298: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x221298u;
    SET_GPR_U32(ctx, 31, 0x2212A0u);
    ctx->pc = 0x22129Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221298u;
            // 0x22129c: 0x24842868  addiu       $a0, $a0, 0x2868 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212A0u; }
        if (ctx->pc != 0x2212A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212A0u; }
        if (ctx->pc != 0x2212A0u) { return; }
    }
    ctx->pc = 0x2212A0u;
label_2212a0:
    // 0x2212a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2212a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2212a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2212a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2212a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2212a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2212ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2212acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2212b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2212B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2212B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2212B0u;
            // 0x2212b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2212B8u;
    ctx->pc = 0x2212b8u;
}
