#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00213F58
// Address: 0x213f58 - 0x2142b0
void sub_00213F58_0x213f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213F58_0x213f58");
#endif

    switch (ctx->pc) {
        case 0x213f74u: goto label_213f74;
        case 0x213f84u: goto label_213f84;
        case 0x213f94u: goto label_213f94;
        case 0x213fa4u: goto label_213fa4;
        case 0x213fb4u: goto label_213fb4;
        case 0x213fc4u: goto label_213fc4;
        case 0x213fd4u: goto label_213fd4;
        case 0x213fe4u: goto label_213fe4;
        case 0x214008u: goto label_214008;
        case 0x214044u: goto label_214044;
        case 0x214058u: goto label_214058;
        case 0x21406cu: goto label_21406c;
        case 0x214080u: goto label_214080;
        case 0x214094u: goto label_214094;
        case 0x2140a8u: goto label_2140a8;
        case 0x2140bcu: goto label_2140bc;
        case 0x2140d0u: goto label_2140d0;
        case 0x2140e0u: goto label_2140e0;
        case 0x214108u: goto label_214108;
        case 0x214144u: goto label_214144;
        case 0x214158u: goto label_214158;
        case 0x21416cu: goto label_21416c;
        case 0x214180u: goto label_214180;
        case 0x214194u: goto label_214194;
        case 0x2141a8u: goto label_2141a8;
        case 0x2141bcu: goto label_2141bc;
        case 0x2141d0u: goto label_2141d0;
        case 0x2141d8u: goto label_2141d8;
        case 0x214200u: goto label_214200;
        case 0x21422cu: goto label_21422c;
        case 0x21423cu: goto label_21423c;
        case 0x214258u: goto label_214258;
        case 0x214284u: goto label_214284;
        case 0x21428cu: goto label_21428c;
        default: break;
    }

    ctx->pc = 0x213f58u;

label_213f58:
    // 0x213f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213f60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213f6c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213F6Cu;
    SET_GPR_U32(ctx, 31, 0x213F74u);
    ctx->pc = 0x213F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213F6Cu;
            // 0x213f70: 0x248407a8  addiu       $a0, $a0, 0x7A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F74u; }
        if (ctx->pc != 0x213F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F74u; }
        if (ctx->pc != 0x213F74u) { return; }
    }
    ctx->pc = 0x213F74u;
label_213f74:
    // 0x213f74: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x213f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213f78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213f7c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213F7Cu;
    SET_GPR_U32(ctx, 31, 0x213F84u);
    ctx->pc = 0x213F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213F7Cu;
            // 0x213f80: 0x248407c8  addiu       $a0, $a0, 0x7C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F84u; }
        if (ctx->pc != 0x213F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F84u; }
        if (ctx->pc != 0x213F84u) { return; }
    }
    ctx->pc = 0x213F84u;
label_213f84:
    // 0x213f84: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x213f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x213f88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213f8c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213F8Cu;
    SET_GPR_U32(ctx, 31, 0x213F94u);
    ctx->pc = 0x213F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213F8Cu;
            // 0x213f90: 0x248407d8  addiu       $a0, $a0, 0x7D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F94u; }
        if (ctx->pc != 0x213F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213F94u; }
        if (ctx->pc != 0x213F94u) { return; }
    }
    ctx->pc = 0x213F94u;
label_213f94:
    // 0x213f94: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x213f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x213f98: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213f9c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213F9Cu;
    SET_GPR_U32(ctx, 31, 0x213FA4u);
    ctx->pc = 0x213FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213F9Cu;
            // 0x213fa0: 0x248407e8  addiu       $a0, $a0, 0x7E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FA4u; }
        if (ctx->pc != 0x213FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FA4u; }
        if (ctx->pc != 0x213FA4u) { return; }
    }
    ctx->pc = 0x213FA4u;
label_213fa4:
    // 0x213fa4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x213fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x213fa8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213fac: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213FACu;
    SET_GPR_U32(ctx, 31, 0x213FB4u);
    ctx->pc = 0x213FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213FACu;
            // 0x213fb0: 0x24840568  addiu       $a0, $a0, 0x568 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FB4u; }
        if (ctx->pc != 0x213FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FB4u; }
        if (ctx->pc != 0x213FB4u) { return; }
    }
    ctx->pc = 0x213FB4u;
label_213fb4:
    // 0x213fb4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x213fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x213fb8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213fbc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213FBCu;
    SET_GPR_U32(ctx, 31, 0x213FC4u);
    ctx->pc = 0x213FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213FBCu;
            // 0x213fc0: 0x248407f8  addiu       $a0, $a0, 0x7F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FC4u; }
        if (ctx->pc != 0x213FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FC4u; }
        if (ctx->pc != 0x213FC4u) { return; }
    }
    ctx->pc = 0x213FC4u;
label_213fc4:
    // 0x213fc4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x213fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x213fc8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213fcc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213FCCu;
    SET_GPR_U32(ctx, 31, 0x213FD4u);
    ctx->pc = 0x213FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213FCCu;
            // 0x213fd0: 0x24840408  addiu       $a0, $a0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FD4u; }
        if (ctx->pc != 0x213FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FD4u; }
        if (ctx->pc != 0x213FD4u) { return; }
    }
    ctx->pc = 0x213FD4u;
label_213fd4:
    // 0x213fd4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x213fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x213fd8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213fdc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x213FDCu;
    SET_GPR_U32(ctx, 31, 0x213FE4u);
    ctx->pc = 0x213FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213FDCu;
            // 0x213fe0: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FE4u; }
        if (ctx->pc != 0x213FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FE4u; }
        if (ctx->pc != 0x213FE4u) { return; }
    }
    ctx->pc = 0x213FE4u;
label_213fe4:
    // 0x213fe4: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x213fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x213fe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213fec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x213fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213ff0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x213ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x213ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213ff8: 0x24840428  addiu       $a0, $a0, 0x428
    ctx->pc = 0x213ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1064));
    // 0x213ffc: 0x8043e52  j           func_10F948
    ctx->pc = 0x213FFCu;
    ctx->pc = 0x214000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x213FFCu;
            // 0x214000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x214004u;
    // 0x214004: 0x0  nop
    ctx->pc = 0x214004u;
    // NOP
label_214008:
    // 0x214008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21400c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x214010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214018: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21401c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21401cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214020: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214024: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x214024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214028: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x214028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21402c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21402cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214030: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214034: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x214034u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214038: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x214038u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21403c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21403Cu;
    SET_GPR_U32(ctx, 31, 0x214044u);
    ctx->pc = 0x214040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21403Cu;
            // 0x214040: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214044u; }
        if (ctx->pc != 0x214044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214044u; }
        if (ctx->pc != 0x214044u) { return; }
    }
    ctx->pc = 0x214044u;
label_214044:
    // 0x214044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214048: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21404c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21404cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214050: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214050u;
    SET_GPR_U32(ctx, 31, 0x214058u);
    ctx->pc = 0x214054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214050u;
            // 0x214054: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214058u; }
        if (ctx->pc != 0x214058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214058u; }
        if (ctx->pc != 0x214058u) { return; }
    }
    ctx->pc = 0x214058u;
label_214058:
    // 0x214058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21405c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21405cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214060: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214064: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214064u;
    SET_GPR_U32(ctx, 31, 0x21406Cu);
    ctx->pc = 0x214068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214064u;
            // 0x214068: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21406Cu; }
        if (ctx->pc != 0x21406Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21406Cu; }
        if (ctx->pc != 0x21406Cu) { return; }
    }
    ctx->pc = 0x21406Cu;
label_21406c:
    // 0x21406c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21406cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214074: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214078: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214078u;
    SET_GPR_U32(ctx, 31, 0x214080u);
    ctx->pc = 0x21407Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214078u;
            // 0x21407c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214080u; }
        if (ctx->pc != 0x214080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214080u; }
        if (ctx->pc != 0x214080u) { return; }
    }
    ctx->pc = 0x214080u;
label_214080:
    // 0x214080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214084: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214088: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21408c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21408Cu;
    SET_GPR_U32(ctx, 31, 0x214094u);
    ctx->pc = 0x214090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21408Cu;
            // 0x214090: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214094u; }
        if (ctx->pc != 0x214094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214094u; }
        if (ctx->pc != 0x214094u) { return; }
    }
    ctx->pc = 0x214094u;
label_214094:
    // 0x214094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21409c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21409cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140a0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2140A0u;
    SET_GPR_U32(ctx, 31, 0x2140A8u);
    ctx->pc = 0x2140A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140A0u;
            // 0x2140a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140A8u; }
        if (ctx->pc != 0x2140A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140A8u; }
        if (ctx->pc != 0x2140A8u) { return; }
    }
    ctx->pc = 0x2140A8u;
label_2140a8:
    // 0x2140a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2140a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2140acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2140b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140b4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2140B4u;
    SET_GPR_U32(ctx, 31, 0x2140BCu);
    ctx->pc = 0x2140B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140B4u;
            // 0x2140b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (runtime->hasFunction(0x211370u)) {
        auto targetFn = runtime->lookupFunction(0x211370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140BCu; }
        if (ctx->pc != 0x2140BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211370_0x211370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140BCu; }
        if (ctx->pc != 0x2140BCu) { return; }
    }
    ctx->pc = 0x2140BCu;
label_2140bc:
    // 0x2140bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2140bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2140c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2140c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140c8: 0xc08449a  jal         func_211268
    ctx->pc = 0x2140C8u;
    SET_GPR_U32(ctx, 31, 0x2140D0u);
    ctx->pc = 0x2140CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140C8u;
            // 0x2140cc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140D0u; }
        if (ctx->pc != 0x2140D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140D0u; }
        if (ctx->pc != 0x2140D0u) { return; }
    }
    ctx->pc = 0x2140D0u;
label_2140d0:
    // 0x2140d0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2140d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2140d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2140d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140d8: 0xc084fd6  jal         func_213F58
    ctx->pc = 0x2140D8u;
    SET_GPR_U32(ctx, 31, 0x2140E0u);
    ctx->pc = 0x2140DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2140D8u;
            // 0x2140dc: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213F58u;
    goto label_213f58;
    ctx->pc = 0x2140E0u;
label_2140e0:
    // 0x2140e0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2140e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2140e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2140e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2140e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2140ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2140ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2140f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2140f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2140f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2140f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2140f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2140f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2140fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2140FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2140FCu;
            // 0x214100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214104u;
    // 0x214104: 0x0  nop
    ctx->pc = 0x214104u;
    // NOP
label_214108:
    // 0x214108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21410c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x214110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214118: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21411c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21411cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214120: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214124: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x214124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214128: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x214128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21412c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21412cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214130: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214134: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x214134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214138: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x214138u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21413c: 0xc084612  jal         func_211848
    ctx->pc = 0x21413Cu;
    SET_GPR_U32(ctx, 31, 0x214144u);
    ctx->pc = 0x214140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21413Cu;
            // 0x214140: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214144u; }
        if (ctx->pc != 0x214144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214144u; }
        if (ctx->pc != 0x214144u) { return; }
    }
    ctx->pc = 0x214144u;
label_214144:
    // 0x214144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214148: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21414c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21414cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214150: 0xc084612  jal         func_211848
    ctx->pc = 0x214150u;
    SET_GPR_U32(ctx, 31, 0x214158u);
    ctx->pc = 0x214154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214150u;
            // 0x214154: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214158u; }
        if (ctx->pc != 0x214158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214158u; }
        if (ctx->pc != 0x214158u) { return; }
    }
    ctx->pc = 0x214158u;
label_214158:
    // 0x214158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21415c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21415cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214160: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214164: 0xc084612  jal         func_211848
    ctx->pc = 0x214164u;
    SET_GPR_U32(ctx, 31, 0x21416Cu);
    ctx->pc = 0x214168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214164u;
            // 0x214168: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21416Cu; }
        if (ctx->pc != 0x21416Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21416Cu; }
        if (ctx->pc != 0x21416Cu) { return; }
    }
    ctx->pc = 0x21416Cu;
label_21416c:
    // 0x21416c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21416cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214170: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214174: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214178: 0xc084612  jal         func_211848
    ctx->pc = 0x214178u;
    SET_GPR_U32(ctx, 31, 0x214180u);
    ctx->pc = 0x21417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214178u;
            // 0x21417c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214180u; }
        if (ctx->pc != 0x214180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214180u; }
        if (ctx->pc != 0x214180u) { return; }
    }
    ctx->pc = 0x214180u;
label_214180:
    // 0x214180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214184: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214188: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21418c: 0xc084612  jal         func_211848
    ctx->pc = 0x21418Cu;
    SET_GPR_U32(ctx, 31, 0x214194u);
    ctx->pc = 0x214190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21418Cu;
            // 0x214190: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214194u; }
        if (ctx->pc != 0x214194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214194u; }
        if (ctx->pc != 0x214194u) { return; }
    }
    ctx->pc = 0x214194u;
label_214194:
    // 0x214194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214198: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21419c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21419cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141a0: 0xc084612  jal         func_211848
    ctx->pc = 0x2141A0u;
    SET_GPR_U32(ctx, 31, 0x2141A8u);
    ctx->pc = 0x2141A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2141A0u;
            // 0x2141a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141A8u; }
        if (ctx->pc != 0x2141A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141A8u; }
        if (ctx->pc != 0x2141A8u) { return; }
    }
    ctx->pc = 0x2141A8u;
label_2141a8:
    // 0x2141a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2141a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2141acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2141b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141b4: 0xc084612  jal         func_211848
    ctx->pc = 0x2141B4u;
    SET_GPR_U32(ctx, 31, 0x2141BCu);
    ctx->pc = 0x2141B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2141B4u;
            // 0x2141b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (runtime->hasFunction(0x211848u)) {
        auto targetFn = runtime->lookupFunction(0x211848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141BCu; }
        if (ctx->pc != 0x2141BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211848_0x211848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141BCu; }
        if (ctx->pc != 0x2141BCu) { return; }
    }
    ctx->pc = 0x2141BCu;
label_2141bc:
    // 0x2141bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2141bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2141c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2141c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2141c8: 0xc0845c2  jal         func_211708
    ctx->pc = 0x2141C8u;
    SET_GPR_U32(ctx, 31, 0x2141D0u);
    ctx->pc = 0x2141CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2141C8u;
            // 0x2141cc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141D0u; }
        if (ctx->pc != 0x2141D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2141D0u; }
        if (ctx->pc != 0x2141D0u) { return; }
    }
    ctx->pc = 0x2141D0u;
label_2141d0:
    // 0x2141d0: 0xc084fd6  jal         func_213F58
    ctx->pc = 0x2141D0u;
    SET_GPR_U32(ctx, 31, 0x2141D8u);
    ctx->pc = 0x2141D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2141D0u;
            // 0x2141d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x213F58u;
    goto label_213f58;
    ctx->pc = 0x2141D8u;
label_2141d8:
    // 0x2141d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2141d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2141dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2141dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2141e0: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2141e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2141e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2141e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2141e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2141e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2141ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2141ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2141f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2141f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2141f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2141f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2141f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2141F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2141FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2141F8u;
            // 0x2141fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214200u;
label_214200:
    // 0x214200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214208: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x214208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21420c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214210: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x214210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214214: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214218: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21421c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x21421cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214220: 0x24067d00  addiu       $a2, $zero, 0x7D00
    ctx->pc = 0x214220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
    // 0x214224: 0xc08449a  jal         func_211268
    ctx->pc = 0x214224u;
    SET_GPR_U32(ctx, 31, 0x21422Cu);
    ctx->pc = 0x214228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214224u;
            // 0x214228: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (runtime->hasFunction(0x211268u)) {
        auto targetFn = runtime->lookupFunction(0x211268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21422Cu; }
        if (ctx->pc != 0x21422Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211268_0x211268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21422Cu; }
        if (ctx->pc != 0x21422Cu) { return; }
    }
    ctx->pc = 0x21422Cu;
label_21422c:
    // 0x21422c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21422cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214234: 0xc0850ac  jal         func_2142B0
    ctx->pc = 0x214234u;
    SET_GPR_U32(ctx, 31, 0x21423Cu);
    ctx->pc = 0x214238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214234u;
            // 0x214238: 0x22f8823  subu        $s1, $s1, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2142B0u;
    if (runtime->hasFunction(0x2142B0u)) {
        auto targetFn = runtime->lookupFunction(0x2142B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21423Cu; }
        if (ctx->pc != 0x21423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002142B0_0x2142b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21423Cu; }
        if (ctx->pc != 0x21423Cu) { return; }
    }
    ctx->pc = 0x21423Cu;
label_21423c:
    // 0x21423c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21423cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214244: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214248: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21424c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21424cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214250: 0x3e00008  jr          $ra
    ctx->pc = 0x214250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214250u;
            // 0x214254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214258u;
label_214258:
    // 0x214258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21425c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21425cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214260: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x214260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x214264: 0x24067d00  addiu       $a2, $zero, 0x7D00
    ctx->pc = 0x214264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
    // 0x214268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21426c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214274: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x214274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214278: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x214278u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21427c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x21427Cu;
    SET_GPR_U32(ctx, 31, 0x214284u);
    ctx->pc = 0x214280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21427Cu;
            // 0x214280: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (runtime->hasFunction(0x211708u)) {
        auto targetFn = runtime->lookupFunction(0x211708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214284u; }
        if (ctx->pc != 0x214284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211708_0x211708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214284u; }
        if (ctx->pc != 0x214284u) { return; }
    }
    ctx->pc = 0x214284u;
label_214284:
    // 0x214284: 0xc0850ac  jal         func_2142B0
    ctx->pc = 0x214284u;
    SET_GPR_U32(ctx, 31, 0x21428Cu);
    ctx->pc = 0x214288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214284u;
            // 0x214288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2142B0u;
    if (runtime->hasFunction(0x2142B0u)) {
        auto targetFn = runtime->lookupFunction(0x2142B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21428Cu; }
        if (ctx->pc != 0x21428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002142B0_0x2142b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21428Cu; }
        if (ctx->pc != 0x21428Cu) { return; }
    }
    ctx->pc = 0x21428Cu;
label_21428c:
    // 0x21428c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x214290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214294: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x214294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x214298: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21429c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21429cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2142a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2142a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2142a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2142A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2142A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2142A4u;
            // 0x2142a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2142ACu;
    // 0x2142ac: 0x0  nop
    ctx->pc = 0x2142acu;
    // NOP
    ctx->pc = 0x2142b0u;
}
