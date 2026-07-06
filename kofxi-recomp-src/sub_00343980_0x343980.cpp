#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00343980
// Address: 0x343980 - 0x344040
void sub_00343980_0x343980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343980_0x343980");
#endif

    switch (ctx->pc) {
        case 0x3439a4u: goto label_3439a4;
        case 0x3439b0u: goto label_3439b0;
        case 0x3439c8u: goto label_3439c8;
        case 0x343a24u: goto label_343a24;
        case 0x343a38u: goto label_343a38;
        case 0x343a58u: goto label_343a58;
        case 0x343a64u: goto label_343a64;
        case 0x343abcu: goto label_343abc;
        case 0x343ad0u: goto label_343ad0;
        case 0x343aecu: goto label_343aec;
        case 0x343b00u: goto label_343b00;
        case 0x343b20u: goto label_343b20;
        case 0x343b2cu: goto label_343b2c;
        case 0x343b5cu: goto label_343b5c;
        case 0x343b6cu: goto label_343b6c;
        case 0x343bf0u: goto label_343bf0;
        case 0x343c14u: goto label_343c14;
        case 0x343c7cu: goto label_343c7c;
        case 0x343c88u: goto label_343c88;
        case 0x343cccu: goto label_343ccc;
        case 0x343d04u: goto label_343d04;
        case 0x343d64u: goto label_343d64;
        case 0x343d6cu: goto label_343d6c;
        case 0x343d74u: goto label_343d74;
        case 0x343d7cu: goto label_343d7c;
        case 0x343d88u: goto label_343d88;
        case 0x343dc0u: goto label_343dc0;
        case 0x343dd0u: goto label_343dd0;
        case 0x343decu: goto label_343dec;
        case 0x343e00u: goto label_343e00;
        case 0x343e14u: goto label_343e14;
        case 0x343e28u: goto label_343e28;
        case 0x343e48u: goto label_343e48;
        case 0x343e68u: goto label_343e68;
        case 0x343e74u: goto label_343e74;
        case 0x343e7cu: goto label_343e7c;
        case 0x343e90u: goto label_343e90;
        case 0x343ea8u: goto label_343ea8;
        case 0x343eb4u: goto label_343eb4;
        case 0x343ebcu: goto label_343ebc;
        case 0x343ed4u: goto label_343ed4;
        case 0x343eecu: goto label_343eec;
        case 0x343ef8u: goto label_343ef8;
        case 0x343f00u: goto label_343f00;
        case 0x343f20u: goto label_343f20;
        case 0x343f30u: goto label_343f30;
        case 0x343f44u: goto label_343f44;
        case 0x343f64u: goto label_343f64;
        case 0x343f6cu: goto label_343f6c;
        case 0x343f74u: goto label_343f74;
        case 0x343f80u: goto label_343f80;
        case 0x343f94u: goto label_343f94;
        case 0x343fa4u: goto label_343fa4;
        case 0x343fb8u: goto label_343fb8;
        case 0x343ff0u: goto label_343ff0;
        case 0x344000u: goto label_344000;
        case 0x344010u: goto label_344010;
        case 0x34401cu: goto label_34401c;
        case 0x344030u: goto label_344030;
        default: break;
    }

    ctx->pc = 0x343980u;

    // 0x343980: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x343980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x343984: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x343984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x343988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x343988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34398c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x343990: 0x8c639478  lw          $v1, -0x6B88($v1)
    ctx->pc = 0x343990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939768)));
    // 0x343994: 0x50600191  beql        $v1, $zero, . + 4 + (0x191 << 2)
    ctx->pc = 0x343994u;
    {
        const bool branch_taken_0x343994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x343994) {
            ctx->pc = 0x343998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343994u;
            // 0x343998: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343FDCu;
            goto label_343fdc;
        }
    }
    ctx->pc = 0x34399Cu;
    // 0x34399c: 0xc089268  jal         func_2249A0
    ctx->pc = 0x34399Cu;
    SET_GPR_U32(ctx, 31, 0x3439A4u);
    ctx->pc = 0x2249A0u;
    if (runtime->hasFunction(0x2249A0u)) {
        auto targetFn = runtime->lookupFunction(0x2249A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3439A4u; }
        if (ctx->pc != 0x3439A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002249A0_0x2249a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3439A4u; }
        if (ctx->pc != 0x3439A4u) { return; }
    }
    ctx->pc = 0x3439A4u;
label_3439a4:
    // 0x3439a4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3439a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3439a8: 0xc083b66  jal         func_20ED98
    ctx->pc = 0x3439A8u;
    SET_GPR_U32(ctx, 31, 0x3439B0u);
    ctx->pc = 0x3439ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3439A8u;
            // 0x3439ac: 0x2484eac0  addiu       $a0, $a0, -0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20ED98u;
    if (runtime->hasFunction(0x20ED98u)) {
        auto targetFn = runtime->lookupFunction(0x20ED98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3439B0u; }
        if (ctx->pc != 0x3439B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020ED98_0x20ed98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3439B0u; }
        if (ctx->pc != 0x3439B0u) { return; }
    }
    ctx->pc = 0x3439B0u;
label_3439b0:
    // 0x3439b0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3439b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3439b4: 0x8c44eac0  lw          $a0, -0x1540($v0)
    ctx->pc = 0x3439b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
    // 0x3439b8: 0x10800151  beqz        $a0, . + 4 + (0x151 << 2)
    ctx->pc = 0x3439B8u;
    {
        const bool branch_taken_0x3439b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3439b8) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x3439C0u;
    // 0x3439c0: 0xc083caa  jal         func_20F2A8
    ctx->pc = 0x3439C0u;
    SET_GPR_U32(ctx, 31, 0x3439C8u);
    ctx->pc = 0x20F2A8u;
    if (runtime->hasFunction(0x20F2A8u)) {
        auto targetFn = runtime->lookupFunction(0x20F2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3439C8u; }
        if (ctx->pc != 0x3439C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F2A8_0x20f2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3439C8u; }
        if (ctx->pc != 0x3439C8u) { return; }
    }
    ctx->pc = 0x3439C8u;
label_3439c8:
    // 0x3439c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3439c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3439cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3439ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3439d0: 0x1044013c  beq         $v0, $a0, . + 4 + (0x13C << 2)
    ctx->pc = 0x3439D0u;
    {
        const bool branch_taken_0x3439d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3439D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3439D0u;
            // 0x3439d4: 0xac62eac8  sw          $v0, -0x1538($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3439d0) {
            ctx->pc = 0x343EC4u;
            goto label_343ec4;
        }
    }
    ctx->pc = 0x3439D8u;
    // 0x3439d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3439d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3439dc: 0x50430129  beql        $v0, $v1, . + 4 + (0x129 << 2)
    ctx->pc = 0x3439DCu;
    {
        const bool branch_taken_0x3439dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3439dc) {
            ctx->pc = 0x3439E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3439DCu;
            // 0x3439e0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343E84u;
            goto label_343e84;
        }
    }
    ctx->pc = 0x3439E4u;
    // 0x3439e4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3439e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3439e8: 0x10430119  beq         $v0, $v1, . + 4 + (0x119 << 2)
    ctx->pc = 0x3439E8u;
    {
        const bool branch_taken_0x3439e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3439e8) {
            ctx->pc = 0x343E50u;
            goto label_343e50;
        }
    }
    ctx->pc = 0x3439F0u;
    // 0x3439f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3439f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3439f4: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3439F4u;
    {
        const bool branch_taken_0x3439f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3439f4) {
            ctx->pc = 0x343AD8u;
            goto label_343ad8;
        }
    }
    ctx->pc = 0x3439FCu;
    // 0x3439fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3439fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x343a00: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x343A00u;
    {
        const bool branch_taken_0x343a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x343a00) {
            ctx->pc = 0x343A10u;
            goto label_343a10;
        }
    }
    ctx->pc = 0x343A08u;
    // 0x343a08: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x343A08u;
    {
        const bool branch_taken_0x343a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343a08) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343A10u;
label_343a10:
    // 0x343a10: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x343a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x343a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a18: 0x2484fe70  addiu       $a0, $a0, -0x190
    ctx->pc = 0x343a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966896));
    // 0x343a1c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343A1Cu;
    SET_GPR_U32(ctx, 31, 0x343A24u);
    ctx->pc = 0x343A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343A1Cu;
            // 0x343a20: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A24u; }
        if (ctx->pc != 0x343A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A24u; }
        if (ctx->pc != 0x343A24u) { return; }
    }
    ctx->pc = 0x343A24u;
label_343a24:
    // 0x343a24: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x343a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x343a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a2c: 0x2484ddc0  addiu       $a0, $a0, -0x2240
    ctx->pc = 0x343a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958528));
    // 0x343a30: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343A30u;
    SET_GPR_U32(ctx, 31, 0x343A38u);
    ctx->pc = 0x343A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343A30u;
            // 0x343a34: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A38u; }
        if (ctx->pc != 0x343A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A38u; }
        if (ctx->pc != 0x343A38u) { return; }
    }
    ctx->pc = 0x343A38u;
label_343a38:
    // 0x343a38: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343a3c: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x343a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x343a40: 0x8c44eac0  lw          $a0, -0x1540($v0)
    ctx->pc = 0x343a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
    // 0x343a44: 0x3c0601df  lui         $a2, 0x1DF
    ctx->pc = 0x343a44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)479 << 16));
    // 0x343a48: 0x24a5fe70  addiu       $a1, $a1, -0x190
    ctx->pc = 0x343a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966896));
    // 0x343a4c: 0x24c6ddc0  addiu       $a2, $a2, -0x2240
    ctx->pc = 0x343a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958528));
    // 0x343a50: 0xc083fa8  jal         func_20FEA0
    ctx->pc = 0x343A50u;
    SET_GPR_U32(ctx, 31, 0x343A58u);
    ctx->pc = 0x343A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343A50u;
            // 0x343a54: 0x24072000  addiu       $a3, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FEA0u;
    if (runtime->hasFunction(0x20FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x20FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A58u; }
        if (ctx->pc != 0x343A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FEA0_0x20fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A58u; }
        if (ctx->pc != 0x343A58u) { return; }
    }
    ctx->pc = 0x343A58u;
label_343a58:
    // 0x343a58: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343a5c: 0xc084356  jal         func_210D58
    ctx->pc = 0x343A5Cu;
    SET_GPR_U32(ctx, 31, 0x343A64u);
    ctx->pc = 0x343A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343A5Cu;
            // 0x343a60: 0x8c44eac0  lw          $a0, -0x1540($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210D58u;
    if (runtime->hasFunction(0x210D58u)) {
        auto targetFn = runtime->lookupFunction(0x210D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A64u; }
        if (ctx->pc != 0x343A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210D58_0x210d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343A64u; }
        if (ctx->pc != 0x343A64u) { return; }
    }
    ctx->pc = 0x343A64u;
label_343a64:
    // 0x343a64: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x343a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343a68: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x343a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x343a6c: 0x8c429478  lw          $v0, -0x6B88($v0)
    ctx->pc = 0x343a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x343a70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x343a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x343a74: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x343A74u;
    {
        const bool branch_taken_0x343a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343a74) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343A7Cu;
    // 0x343a7c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x343a80: 0x8c42bdc8  lw          $v0, -0x4238($v0)
    ctx->pc = 0x343a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950344)));
    // 0x343a84: 0x1040011e  beqz        $v0, . + 4 + (0x11E << 2)
    ctx->pc = 0x343A84u;
    {
        const bool branch_taken_0x343a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343a84) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343A8Cu;
    // 0x343a8c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343a90: 0x24031141  addiu       $v1, $zero, 0x1141
    ctx->pc = 0x343a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4417));
    // 0x343a94: 0x9444fe72  lhu         $a0, -0x18E($v0)
    ctx->pc = 0x343a94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294966898)));
    // 0x343a98: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x343A98u;
    {
        const bool branch_taken_0x343a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x343a98) {
            ctx->pc = 0x343AC8u;
            goto label_343ac8;
        }
    }
    ctx->pc = 0x343AA0u;
    // 0x343aa0: 0x24021111  addiu       $v0, $zero, 0x1111
    ctx->pc = 0x343aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4369));
    // 0x343aa4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343AA4u;
    {
        const bool branch_taken_0x343aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x343aa4) {
            ctx->pc = 0x343AB4u;
            goto label_343ab4;
        }
    }
    ctx->pc = 0x343AACu;
    // 0x343aac: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x343AACu;
    {
        const bool branch_taken_0x343aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343aac) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343AB4u;
label_343ab4:
    // 0x343ab4: 0xc0d0e20  jal         func_343880
    ctx->pc = 0x343AB4u;
    SET_GPR_U32(ctx, 31, 0x343ABCu);
    ctx->pc = 0x343880u;
    if (runtime->hasFunction(0x343880u)) {
        auto targetFn = runtime->lookupFunction(0x343880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343ABCu; }
        if (ctx->pc != 0x343ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343880_0x343880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343ABCu; }
        if (ctx->pc != 0x343ABCu) { return; }
    }
    ctx->pc = 0x343ABCu;
label_343abc:
    // 0x343abc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x343ac0: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x343AC0u;
    {
        const bool branch_taken_0x343ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343AC0u;
            // 0x343ac4: 0xac40bdc8  sw          $zero, -0x4238($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ac0) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343AC8u;
label_343ac8:
    // 0x343ac8: 0xc0d0de8  jal         func_3437A0
    ctx->pc = 0x343AC8u;
    SET_GPR_U32(ctx, 31, 0x343AD0u);
    ctx->pc = 0x3437A0u;
    if (runtime->hasFunction(0x3437A0u)) {
        auto targetFn = runtime->lookupFunction(0x3437A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343AD0u; }
        if (ctx->pc != 0x343AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003437A0_0x3437a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343AD0u; }
        if (ctx->pc != 0x343AD0u) { return; }
    }
    ctx->pc = 0x343AD0u;
label_343ad0:
    // 0x343ad0: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x343AD0u;
    {
        const bool branch_taken_0x343ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343ad0) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343AD8u;
label_343ad8:
    // 0x343ad8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x343ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x343adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343ae0: 0x2484fe70  addiu       $a0, $a0, -0x190
    ctx->pc = 0x343ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966896));
    // 0x343ae4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343AE4u;
    SET_GPR_U32(ctx, 31, 0x343AECu);
    ctx->pc = 0x343AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343AE4u;
            // 0x343ae8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343AECu; }
        if (ctx->pc != 0x343AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343AECu; }
        if (ctx->pc != 0x343AECu) { return; }
    }
    ctx->pc = 0x343AECu;
label_343aec:
    // 0x343aec: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x343aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x343af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343af4: 0x2484ddc0  addiu       $a0, $a0, -0x2240
    ctx->pc = 0x343af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958528));
    // 0x343af8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343AF8u;
    SET_GPR_U32(ctx, 31, 0x343B00u);
    ctx->pc = 0x343AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343AF8u;
            // 0x343afc: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343B00u; }
        if (ctx->pc != 0x343B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343B00u; }
        if (ctx->pc != 0x343B00u) { return; }
    }
    ctx->pc = 0x343B00u;
label_343b00:
    // 0x343b00: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343b04: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x343b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x343b08: 0x8c44eac0  lw          $a0, -0x1540($v0)
    ctx->pc = 0x343b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
    // 0x343b0c: 0x3c0601df  lui         $a2, 0x1DF
    ctx->pc = 0x343b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)479 << 16));
    // 0x343b10: 0x24a5fe70  addiu       $a1, $a1, -0x190
    ctx->pc = 0x343b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966896));
    // 0x343b14: 0x24c6ddc0  addiu       $a2, $a2, -0x2240
    ctx->pc = 0x343b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958528));
    // 0x343b18: 0xc083fa8  jal         func_20FEA0
    ctx->pc = 0x343B18u;
    SET_GPR_U32(ctx, 31, 0x343B20u);
    ctx->pc = 0x343B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343B18u;
            // 0x343b1c: 0x24072000  addiu       $a3, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FEA0u;
    if (runtime->hasFunction(0x20FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x20FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343B20u; }
        if (ctx->pc != 0x343B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FEA0_0x20fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343B20u; }
        if (ctx->pc != 0x343B20u) { return; }
    }
    ctx->pc = 0x343B20u;
label_343b20:
    // 0x343b20: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343b24: 0xc084356  jal         func_210D58
    ctx->pc = 0x343B24u;
    SET_GPR_U32(ctx, 31, 0x343B2Cu);
    ctx->pc = 0x343B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343B24u;
            // 0x343b28: 0x8c44eac0  lw          $a0, -0x1540($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210D58u;
    if (runtime->hasFunction(0x210D58u)) {
        auto targetFn = runtime->lookupFunction(0x210D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343B2Cu; }
        if (ctx->pc != 0x343B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210D58_0x210d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343B2Cu; }
        if (ctx->pc != 0x343B2Cu) { return; }
    }
    ctx->pc = 0x343B2Cu;
label_343b2c:
    // 0x343b2c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343b30: 0x8042fe7b  lb          $v0, -0x185($v0)
    ctx->pc = 0x343b30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966907)));
    // 0x343b34: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x343B34u;
    {
        const bool branch_taken_0x343b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343b34) {
            ctx->pc = 0x343B74u;
            goto label_343b74;
        }
    }
    ctx->pc = 0x343B3Cu;
    // 0x343b3c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x343b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343b40: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x343b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x343b44: 0x8c429478  lw          $v0, -0x6B88($v0)
    ctx->pc = 0x343b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x343b48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x343b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x343b4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x343B4Cu;
    {
        const bool branch_taken_0x343b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343b4c) {
            ctx->pc = 0x343B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343B4Cu;
            // 0x343b50: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343B64u;
            goto label_343b64;
        }
    }
    ctx->pc = 0x343B54u;
    // 0x343b54: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x343B54u;
    SET_GPR_U32(ctx, 31, 0x343B5Cu);
    ctx->pc = 0x343B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343B54u;
            // 0x343b58: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343B5Cu; }
        if (ctx->pc != 0x343B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343B5Cu; }
        if (ctx->pc != 0x343B5Cu) { return; }
    }
    ctx->pc = 0x343B5Cu;
label_343b5c:
    // 0x343b5c: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x343B5Cu;
    {
        const bool branch_taken_0x343b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343b5c) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343B64u;
label_343b64:
    // 0x343b64: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x343B64u;
    SET_GPR_U32(ctx, 31, 0x343B6Cu);
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343B6Cu; }
        if (ctx->pc != 0x343B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343B6Cu; }
        if (ctx->pc != 0x343B6Cu) { return; }
    }
    ctx->pc = 0x343B6Cu;
label_343b6c:
    // 0x343b6c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x343B6Cu;
    {
        const bool branch_taken_0x343b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343b6c) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343B74u;
label_343b74:
    // 0x343b74: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x343b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343b78: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x343b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x343b7c: 0x8c459478  lw          $a1, -0x6B88($v0)
    ctx->pc = 0x343b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x343b80: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x343b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x343b84: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x343B84u;
    {
        const bool branch_taken_0x343b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343b84) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343B8Cu;
    // 0x343b8c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343b90: 0x24031162  addiu       $v1, $zero, 0x1162
    ctx->pc = 0x343b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4450));
    // 0x343b94: 0x9444fe72  lhu         $a0, -0x18E($v0)
    ctx->pc = 0x343b94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294966898)));
    // 0x343b98: 0x508300a5  beql        $a0, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x343B98u;
    {
        const bool branch_taken_0x343b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x343b98) {
            ctx->pc = 0x343B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343B98u;
            // 0x343b9c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343E30u;
            goto label_343e30;
        }
    }
    ctx->pc = 0x343BA0u;
    // 0x343ba0: 0x24021212  addiu       $v0, $zero, 0x1212
    ctx->pc = 0x343ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4626));
    // 0x343ba4: 0x1082009d  beq         $a0, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x343BA4u;
    {
        const bool branch_taken_0x343ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x343ba4) {
            ctx->pc = 0x343E1Cu;
            goto label_343e1c;
        }
    }
    ctx->pc = 0x343BACu;
    // 0x343bac: 0x24021152  addiu       $v0, $zero, 0x1152
    ctx->pc = 0x343bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4434));
    // 0x343bb0: 0x10820095  beq         $a0, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x343BB0u;
    {
        const bool branch_taken_0x343bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x343bb0) {
            ctx->pc = 0x343E08u;
            goto label_343e08;
        }
    }
    ctx->pc = 0x343BB8u;
    // 0x343bb8: 0x24021142  addiu       $v0, $zero, 0x1142
    ctx->pc = 0x343bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4418));
    // 0x343bbc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343BBCu;
    {
        const bool branch_taken_0x343bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x343bbc) {
            ctx->pc = 0x343BCCu;
            goto label_343bcc;
        }
    }
    ctx->pc = 0x343BC4u;
    // 0x343bc4: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x343BC4u;
    {
        const bool branch_taken_0x343bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343bc4) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343BCCu;
label_343bcc:
    // 0x343bcc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x343bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343bd0: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x343bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x343bd4: 0x90429490  lbu         $v0, -0x6B70($v0)
    ctx->pc = 0x343bd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x343bd8: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x343BD8u;
    {
        const bool branch_taken_0x343bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343BD8u;
            // 0x343bdc: 0x2610ddc0  addiu       $s0, $s0, -0x2240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343bd8) {
            ctx->pc = 0x343D90u;
            goto label_343d90;
        }
    }
    ctx->pc = 0x343BE0u;
    // 0x343be0: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x343be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x343be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x343be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343be8: 0xc0d0c08  jal         func_343020
    ctx->pc = 0x343BE8u;
    SET_GPR_U32(ctx, 31, 0x343BF0u);
    ctx->pc = 0x343BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343BE8u;
            // 0x343bec: 0x2484dda0  addiu       $a0, $a0, -0x2260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343020u;
    if (runtime->hasFunction(0x343020u)) {
        auto targetFn = runtime->lookupFunction(0x343020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343BF0u; }
        if (ctx->pc != 0x343BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343020_0x343020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343BF0u; }
        if (ctx->pc != 0x343BF0u) { return; }
    }
    ctx->pc = 0x343BF0u;
label_343bf0:
    // 0x343bf0: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x343BF0u;
    {
        const bool branch_taken_0x343bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343bf0) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343BF8u;
    // 0x343bf8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x343bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x343bfc: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x343BFCu;
    {
        const bool branch_taken_0x343bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343bfc) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343C04u;
    // 0x343c04: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x343c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x343c08: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x343c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x343c0c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x343C0Cu;
    SET_GPR_U32(ctx, 31, 0x343C14u);
    ctx->pc = 0x343C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343C0Cu;
            // 0x343c10: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343C14u; }
        if (ctx->pc != 0x343C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343C14u; }
        if (ctx->pc != 0x343C14u) { return; }
    }
    ctx->pc = 0x343C14u;
label_343c14:
    // 0x343c14: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x343c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x343c18: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x343c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x343c1c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x343c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343c20: 0xa0649500  sb          $a0, -0x6B00($v1)
    ctx->pc = 0x343c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294939904), (uint8_t)GPR_U32(ctx, 4));
    // 0x343c24: 0x90429500  lbu         $v0, -0x6B00($v0)
    ctx->pc = 0x343c24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939904)));
    // 0x343c28: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x343C28u;
    {
        const bool branch_taken_0x343c28 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x343c28) {
            ctx->pc = 0x343C3Cu;
            goto label_343c3c;
        }
    }
    ctx->pc = 0x343C30u;
    // 0x343c30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343c34: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x343c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343c38: 0xa0449500  sb          $a0, -0x6B00($v0)
    ctx->pc = 0x343c38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939904), (uint8_t)GPR_U32(ctx, 4));
label_343c3c:
    // 0x343c3c: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x343c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x343c40: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x343c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x343c44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x343C44u;
    {
        const bool branch_taken_0x343c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343c44) {
            ctx->pc = 0x343C68u;
            goto label_343c68;
        }
    }
    ctx->pc = 0x343C4Cu;
    // 0x343c4c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x343c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x343c50: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x343c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x343c54: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x343C54u;
    {
        const bool branch_taken_0x343c54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x343c54) {
            ctx->pc = 0x343C68u;
            goto label_343c68;
        }
    }
    ctx->pc = 0x343C5Cu;
    // 0x343c5c: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x343c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x343c60: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x343c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343c64: 0xa0449500  sb          $a0, -0x6B00($v0)
    ctx->pc = 0x343c64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939904), (uint8_t)GPR_U32(ctx, 4));
label_343c68:
    // 0x343c68: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x343c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x343c6c: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x343c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x343c70: 0x24849530  addiu       $a0, $a0, -0x6AD0
    ctx->pc = 0x343c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939952));
    // 0x343c74: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x343C74u;
    SET_GPR_U32(ctx, 31, 0x343C7Cu);
    ctx->pc = 0x343C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343C74u;
            // 0x343c78: 0x24a59570  addiu       $a1, $a1, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343C7Cu; }
        if (ctx->pc != 0x343C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343C7Cu; }
        if (ctx->pc != 0x343C7Cu) { return; }
    }
    ctx->pc = 0x343C7Cu;
label_343c7c:
    // 0x343c7c: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x343c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x343c80: 0xc0d2964  jal         func_34A590
    ctx->pc = 0x343C80u;
    SET_GPR_U32(ctx, 31, 0x343C88u);
    ctx->pc = 0x343C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343C80u;
            // 0x343c84: 0x24849530  addiu       $a0, $a0, -0x6AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34A590u;
    if (runtime->hasFunction(0x34A590u)) {
        auto targetFn = runtime->lookupFunction(0x34A590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343C88u; }
        if (ctx->pc != 0x343C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034A590_0x34a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343C88u; }
        if (ctx->pc != 0x343C88u) { return; }
    }
    ctx->pc = 0x343C88u;
label_343c88:
    // 0x343c88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x343c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x343c8c: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x343c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x343c90: 0x8c46dd90  lw          $a2, -0x2270($v0)
    ctx->pc = 0x343c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x343c94: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x343C94u;
    {
        const bool branch_taken_0x343c94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x343c94) {
            ctx->pc = 0x343D0Cu;
            goto label_343d0c;
        }
    }
    ctx->pc = 0x343C9Cu;
    // 0x343c9c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x343ca0: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x343ca0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x343ca4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x343CA4u;
    {
        const bool branch_taken_0x343ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343ca4) {
            ctx->pc = 0x343D0Cu;
            goto label_343d0c;
        }
    }
    ctx->pc = 0x343CACu;
    // 0x343cac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x343cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x343cb0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x343cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x343cb4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x343CB4u;
    {
        const bool branch_taken_0x343cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343cb4) {
            ctx->pc = 0x343CD4u;
            goto label_343cd4;
        }
    }
    ctx->pc = 0x343CBCu;
    // 0x343cbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343cc0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x343cc4: 0xc0d0dd0  jal         func_343740
    ctx->pc = 0x343CC4u;
    SET_GPR_U32(ctx, 31, 0x343CCCu);
    ctx->pc = 0x343CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343CC4u;
            // 0x343cc8: 0xac44bdc8  sw          $a0, -0x4238($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343740u;
    if (runtime->hasFunction(0x343740u)) {
        auto targetFn = runtime->lookupFunction(0x343740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343CCCu; }
        if (ctx->pc != 0x343CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343740_0x343740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343CCCu; }
        if (ctx->pc != 0x343CCCu) { return; }
    }
    ctx->pc = 0x343CCCu;
label_343ccc:
    // 0x343ccc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x343CCCu;
    {
        const bool branch_taken_0x343ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343ccc) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343CD4u;
label_343cd4:
    // 0x343cd4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x343cd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x343cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x343cdc: 0x9042beab  lbu         $v0, -0x4155($v0)
    ctx->pc = 0x343cdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950571)));
    // 0x343ce0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x343CE0u;
    {
        const bool branch_taken_0x343ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x343ce0) {
            ctx->pc = 0x343D0Cu;
            goto label_343d0c;
        }
    }
    ctx->pc = 0x343CE8u;
    // 0x343ce8: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x343ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x343cec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x343CECu;
    {
        const bool branch_taken_0x343cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343cec) {
            ctx->pc = 0x343D0Cu;
            goto label_343d0c;
        }
    }
    ctx->pc = 0x343CF4u;
    // 0x343cf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343cf8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x343cfc: 0xc0d0dd0  jal         func_343740
    ctx->pc = 0x343CFCu;
    SET_GPR_U32(ctx, 31, 0x343D04u);
    ctx->pc = 0x343D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343CFCu;
            // 0x343d00: 0xac44bdc8  sw          $a0, -0x4238($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343740u;
    if (runtime->hasFunction(0x343740u)) {
        auto targetFn = runtime->lookupFunction(0x343740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D04u; }
        if (ctx->pc != 0x343D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343740_0x343740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D04u; }
        if (ctx->pc != 0x343D04u) { return; }
    }
    ctx->pc = 0x343D04u;
label_343d04:
    // 0x343d04: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x343D04u;
    {
        const bool branch_taken_0x343d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343d04) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343D0Cu;
label_343d0c:
    // 0x343d0c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x343d10: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x343d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x343d14: 0x9045bea8  lbu         $a1, -0x4158($v0)
    ctx->pc = 0x343d14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950568)));
    // 0x343d18: 0x41a03  sra         $v1, $a0, 8
    ctx->pc = 0x343d18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
    // 0x343d1c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343d20: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x343d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x343d24: 0xa0454308  sb          $a1, 0x4308($v0)
    ctx->pc = 0x343d24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17160), (uint8_t)GPR_U32(ctx, 5));
    // 0x343d28: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x343D28u;
    {
        const bool branch_taken_0x343d28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x343D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343D28u;
            // 0x343d2c: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x343d28) {
            ctx->pc = 0x343D5Cu;
            goto label_343d5c;
        }
    }
    ctx->pc = 0x343D30u;
    // 0x343d30: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x343d34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343d38: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x343d38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x343d3c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x343D3Cu;
    {
        const bool branch_taken_0x343d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x343d3c) {
            ctx->pc = 0x343D5Cu;
            goto label_343d5c;
        }
    }
    ctx->pc = 0x343D44u;
    // 0x343d44: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x343d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x343d48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x343d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x343d4c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343D4Cu;
    {
        const bool branch_taken_0x343d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x343d4c) {
            ctx->pc = 0x343D5Cu;
            goto label_343d5c;
        }
    }
    ctx->pc = 0x343D54u;
    // 0x343d54: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343d58: 0xa0444308  sb          $a0, 0x4308($v0)
    ctx->pc = 0x343d58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17160), (uint8_t)GPR_U32(ctx, 4));
label_343d5c:
    // 0x343d5c: 0xc0c1650  jal         func_305940
    ctx->pc = 0x343D5Cu;
    SET_GPR_U32(ctx, 31, 0x343D64u);
    ctx->pc = 0x305940u;
    if (runtime->hasFunction(0x305940u)) {
        auto targetFn = runtime->lookupFunction(0x305940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D64u; }
        if (ctx->pc != 0x343D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305940_0x305940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D64u; }
        if (ctx->pc != 0x343D64u) { return; }
    }
    ctx->pc = 0x343D64u;
label_343d64:
    // 0x343d64: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x343D64u;
    SET_GPR_U32(ctx, 31, 0x343D6Cu);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D6Cu; }
        if (ctx->pc != 0x343D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D6Cu; }
        if (ctx->pc != 0x343D6Cu) { return; }
    }
    ctx->pc = 0x343D6Cu;
label_343d6c:
    // 0x343d6c: 0xc053318  jal         func_14CC60
    ctx->pc = 0x343D6Cu;
    SET_GPR_U32(ctx, 31, 0x343D74u);
    ctx->pc = 0x14CC60u;
    if (runtime->hasFunction(0x14CC60u)) {
        auto targetFn = runtime->lookupFunction(0x14CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D74u; }
        if (ctx->pc != 0x343D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CC60_0x14cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D74u; }
        if (ctx->pc != 0x343D74u) { return; }
    }
    ctx->pc = 0x343D74u;
label_343d74:
    // 0x343d74: 0xc0d0ccc  jal         func_343330
    ctx->pc = 0x343D74u;
    SET_GPR_U32(ctx, 31, 0x343D7Cu);
    ctx->pc = 0x343330u;
    if (runtime->hasFunction(0x343330u)) {
        auto targetFn = runtime->lookupFunction(0x343330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D7Cu; }
        if (ctx->pc != 0x343D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343330_0x343330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D7Cu; }
        if (ctx->pc != 0x343D7Cu) { return; }
    }
    ctx->pc = 0x343D7Cu;
label_343d7c:
    // 0x343d7c: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x343d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x343d80: 0xc082674  jal         func_2099D0
    ctx->pc = 0x343D80u;
    SET_GPR_U32(ctx, 31, 0x343D88u);
    ctx->pc = 0x343D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343D80u;
            // 0x343d84: 0x24843980  addiu       $a0, $a0, 0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D88u; }
        if (ctx->pc != 0x343D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343D88u; }
        if (ctx->pc != 0x343D88u) { return; }
    }
    ctx->pc = 0x343D88u;
label_343d88:
    // 0x343d88: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x343D88u;
    {
        const bool branch_taken_0x343d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343d88) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343D90u;
label_343d90:
    // 0x343d90: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x343d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x343d94: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x343d94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x343d98: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x343D98u;
    {
        const bool branch_taken_0x343d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343d98) {
            ctx->pc = 0x343D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343D98u;
            // 0x343d9c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343DD8u;
            goto label_343dd8;
        }
    }
    ctx->pc = 0x343DA0u;
    // 0x343da0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x343da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x343da4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343DA4u;
    {
        const bool branch_taken_0x343da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343da4) {
            ctx->pc = 0x343DB4u;
            goto label_343db4;
        }
    }
    ctx->pc = 0x343DACu;
    // 0x343dac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x343DACu;
    {
        const bool branch_taken_0x343dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343DACu;
            // 0x343db0: 0x3c040035  lui         $a0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343dac) {
            ctx->pc = 0x343DC8u;
            goto label_343dc8;
        }
    }
    ctx->pc = 0x343DB4u;
label_343db4:
    // 0x343db4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x343db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x343db8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x343DB8u;
    SET_GPR_U32(ctx, 31, 0x343DC0u);
    ctx->pc = 0x343DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343DB8u;
            // 0x343dbc: 0x248407b0  addiu       $a0, $a0, 0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343DC0u; }
        if (ctx->pc != 0x343DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343DC0u; }
        if (ctx->pc != 0x343DC0u) { return; }
    }
    ctx->pc = 0x343DC0u;
label_343dc0:
    // 0x343dc0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x343DC0u;
    {
        const bool branch_taken_0x343dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343dc0) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343DC8u;
label_343dc8:
    // 0x343dc8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x343DC8u;
    SET_GPR_U32(ctx, 31, 0x343DD0u);
    ctx->pc = 0x343DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343DC8u;
            // 0x343dcc: 0x2484f690  addiu       $a0, $a0, -0x970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343DD0u; }
        if (ctx->pc != 0x343DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343DD0u; }
        if (ctx->pc != 0x343DD0u) { return; }
    }
    ctx->pc = 0x343DD0u;
label_343dd0:
    // 0x343dd0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x343DD0u;
    {
        const bool branch_taken_0x343dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343dd0) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343DD8u;
label_343dd8:
    // 0x343dd8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x343DD8u;
    {
        const bool branch_taken_0x343dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343dd8) {
            ctx->pc = 0x343DF4u;
            goto label_343df4;
        }
    }
    ctx->pc = 0x343DE0u;
    // 0x343de0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x343de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x343de4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x343DE4u;
    SET_GPR_U32(ctx, 31, 0x343DECu);
    ctx->pc = 0x343DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343DE4u;
            // 0x343de8: 0x248407b0  addiu       $a0, $a0, 0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343DECu; }
        if (ctx->pc != 0x343DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343DECu; }
        if (ctx->pc != 0x343DECu) { return; }
    }
    ctx->pc = 0x343DECu;
label_343dec:
    // 0x343dec: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x343DECu;
    {
        const bool branch_taken_0x343dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343dec) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343DF4u;
label_343df4:
    // 0x343df4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x343df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x343df8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x343DF8u;
    SET_GPR_U32(ctx, 31, 0x343E00u);
    ctx->pc = 0x343DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343DF8u;
            // 0x343dfc: 0x2484f5e0  addiu       $a0, $a0, -0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E00u; }
        if (ctx->pc != 0x343E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E00u; }
        if (ctx->pc != 0x343E00u) { return; }
    }
    ctx->pc = 0x343E00u;
label_343e00:
    // 0x343e00: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x343E00u;
    {
        const bool branch_taken_0x343e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343e00) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343E08u;
label_343e08:
    // 0x343e08: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x343e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x343e0c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x343E0Cu;
    SET_GPR_U32(ctx, 31, 0x343E14u);
    ctx->pc = 0x343E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E0Cu;
            // 0x343e10: 0x24840850  addiu       $a0, $a0, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E14u; }
        if (ctx->pc != 0x343E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E14u; }
        if (ctx->pc != 0x343E14u) { return; }
    }
    ctx->pc = 0x343E14u;
label_343e14:
    // 0x343e14: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x343E14u;
    {
        const bool branch_taken_0x343e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343e14) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343E1Cu;
label_343e1c:
    // 0x343e1c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x343e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x343e20: 0xc082674  jal         func_2099D0
    ctx->pc = 0x343E20u;
    SET_GPR_U32(ctx, 31, 0x343E28u);
    ctx->pc = 0x343E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E20u;
            // 0x343e24: 0x24840950  addiu       $a0, $a0, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E28u; }
        if (ctx->pc != 0x343E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E28u; }
        if (ctx->pc != 0x343E28u) { return; }
    }
    ctx->pc = 0x343E28u;
label_343e28:
    // 0x343e28: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x343E28u;
    {
        const bool branch_taken_0x343e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343e28) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343E30u;
label_343e30:
    // 0x343e30: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x343e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x343e34: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x343E34u;
    {
        const bool branch_taken_0x343e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343e34) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343E3Cu;
    // 0x343e3c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x343e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x343e40: 0xc082674  jal         func_2099D0
    ctx->pc = 0x343E40u;
    SET_GPR_U32(ctx, 31, 0x343E48u);
    ctx->pc = 0x343E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E40u;
            // 0x343e44: 0x2484dfa0  addiu       $a0, $a0, -0x2060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E48u; }
        if (ctx->pc != 0x343E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E48u; }
        if (ctx->pc != 0x343E48u) { return; }
    }
    ctx->pc = 0x343E48u;
label_343e48:
    // 0x343e48: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x343E48u;
    {
        const bool branch_taken_0x343e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343e48) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343E50u;
label_343e50:
    // 0x343e50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343e54: 0x27a5042c  addiu       $a1, $sp, 0x42C
    ctx->pc = 0x343e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1068));
    // 0x343e58: 0x8c44eac0  lw          $a0, -0x1540($v0)
    ctx->pc = 0x343e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
    // 0x343e5c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x343e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x343e60: 0xc0842f8  jal         func_210BE0
    ctx->pc = 0x343E60u;
    SET_GPR_U32(ctx, 31, 0x343E68u);
    ctx->pc = 0x343E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E60u;
            // 0x343e64: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210BE0u;
    if (runtime->hasFunction(0x210BE0u)) {
        auto targetFn = runtime->lookupFunction(0x210BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E68u; }
        if (ctx->pc != 0x343E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210BE0_0x210be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E68u; }
        if (ctx->pc != 0x343E68u) { return; }
    }
    ctx->pc = 0x343E68u;
label_343e68:
    // 0x343e68: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343e6c: 0xc084356  jal         func_210D58
    ctx->pc = 0x343E6Cu;
    SET_GPR_U32(ctx, 31, 0x343E74u);
    ctx->pc = 0x343E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E6Cu;
            // 0x343e70: 0x8c44eac0  lw          $a0, -0x1540($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210D58u;
    if (runtime->hasFunction(0x210D58u)) {
        auto targetFn = runtime->lookupFunction(0x210D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E74u; }
        if (ctx->pc != 0x343E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210D58_0x210d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E74u; }
        if (ctx->pc != 0x343E74u) { return; }
    }
    ctx->pc = 0x343E74u;
label_343e74:
    // 0x343e74: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x343E74u;
    SET_GPR_U32(ctx, 31, 0x343E7Cu);
    ctx->pc = 0x343E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E74u;
            // 0x343e78: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E7Cu; }
        if (ctx->pc != 0x343E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E7Cu; }
        if (ctx->pc != 0x343E7Cu) { return; }
    }
    ctx->pc = 0x343E7Cu;
label_343e7c:
    // 0x343e7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x343E7Cu;
    {
        const bool branch_taken_0x343e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343e7c) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343E84u;
label_343e84:
    // 0x343e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343e88: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343E88u;
    SET_GPR_U32(ctx, 31, 0x343E90u);
    ctx->pc = 0x343E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343E88u;
            // 0x343e8c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E90u; }
        if (ctx->pc != 0x343E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343E90u; }
        if (ctx->pc != 0x343E90u) { return; }
    }
    ctx->pc = 0x343E90u;
label_343e90:
    // 0x343e90: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343e94: 0x27a5042c  addiu       $a1, $sp, 0x42C
    ctx->pc = 0x343e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1068));
    // 0x343e98: 0x8c44eac0  lw          $a0, -0x1540($v0)
    ctx->pc = 0x343e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
    // 0x343e9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x343e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x343ea0: 0xc0842f8  jal         func_210BE0
    ctx->pc = 0x343EA0u;
    SET_GPR_U32(ctx, 31, 0x343EA8u);
    ctx->pc = 0x343EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EA0u;
            // 0x343ea4: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210BE0u;
    if (runtime->hasFunction(0x210BE0u)) {
        auto targetFn = runtime->lookupFunction(0x210BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EA8u; }
        if (ctx->pc != 0x343EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210BE0_0x210be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EA8u; }
        if (ctx->pc != 0x343EA8u) { return; }
    }
    ctx->pc = 0x343EA8u;
label_343ea8:
    // 0x343ea8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343eac: 0xc084356  jal         func_210D58
    ctx->pc = 0x343EACu;
    SET_GPR_U32(ctx, 31, 0x343EB4u);
    ctx->pc = 0x343EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EACu;
            // 0x343eb0: 0x8c44eac0  lw          $a0, -0x1540($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210D58u;
    if (runtime->hasFunction(0x210D58u)) {
        auto targetFn = runtime->lookupFunction(0x210D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EB4u; }
        if (ctx->pc != 0x343EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210D58_0x210d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EB4u; }
        if (ctx->pc != 0x343EB4u) { return; }
    }
    ctx->pc = 0x343EB4u;
label_343eb4:
    // 0x343eb4: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x343EB4u;
    SET_GPR_U32(ctx, 31, 0x343EBCu);
    ctx->pc = 0x343EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EB4u;
            // 0x343eb8: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EBCu; }
        if (ctx->pc != 0x343EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EBCu; }
        if (ctx->pc != 0x343EBCu) { return; }
    }
    ctx->pc = 0x343EBCu;
label_343ebc:
    // 0x343ebc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x343EBCu;
    {
        const bool branch_taken_0x343ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343ebc) {
            ctx->pc = 0x343F00u;
            goto label_343f00;
        }
    }
    ctx->pc = 0x343EC4u;
label_343ec4:
    // 0x343ec4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x343ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x343ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343ecc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x343ECCu;
    SET_GPR_U32(ctx, 31, 0x343ED4u);
    ctx->pc = 0x343ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343ECCu;
            // 0x343ed0: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343ED4u; }
        if (ctx->pc != 0x343ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343ED4u; }
        if (ctx->pc != 0x343ED4u) { return; }
    }
    ctx->pc = 0x343ED4u;
label_343ed4:
    // 0x343ed4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343ed8: 0x27a5042c  addiu       $a1, $sp, 0x42C
    ctx->pc = 0x343ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1068));
    // 0x343edc: 0x8c44eac0  lw          $a0, -0x1540($v0)
    ctx->pc = 0x343edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
    // 0x343ee0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x343ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x343ee4: 0xc0842f8  jal         func_210BE0
    ctx->pc = 0x343EE4u;
    SET_GPR_U32(ctx, 31, 0x343EECu);
    ctx->pc = 0x343EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EE4u;
            // 0x343ee8: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210BE0u;
    if (runtime->hasFunction(0x210BE0u)) {
        auto targetFn = runtime->lookupFunction(0x210BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EECu; }
        if (ctx->pc != 0x343EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210BE0_0x210be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EECu; }
        if (ctx->pc != 0x343EECu) { return; }
    }
    ctx->pc = 0x343EECu;
label_343eec:
    // 0x343eec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343ef0: 0xc084356  jal         func_210D58
    ctx->pc = 0x343EF0u;
    SET_GPR_U32(ctx, 31, 0x343EF8u);
    ctx->pc = 0x343EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EF0u;
            // 0x343ef4: 0x8c44eac0  lw          $a0, -0x1540($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210D58u;
    if (runtime->hasFunction(0x210D58u)) {
        auto targetFn = runtime->lookupFunction(0x210D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EF8u; }
        if (ctx->pc != 0x343EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210D58_0x210d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343EF8u; }
        if (ctx->pc != 0x343EF8u) { return; }
    }
    ctx->pc = 0x343EF8u;
label_343ef8:
    // 0x343ef8: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x343EF8u;
    SET_GPR_U32(ctx, 31, 0x343F00u);
    ctx->pc = 0x343EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343EF8u;
            // 0x343efc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F00u; }
        if (ctx->pc != 0x343F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F00u; }
        if (ctx->pc != 0x343F00u) { return; }
    }
    ctx->pc = 0x343F00u;
label_343f00:
    // 0x343f00: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x343f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x343f04: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x343f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x343f08: 0x8c429478  lw          $v0, -0x6B88($v0)
    ctx->pc = 0x343f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x343f0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x343f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x343f10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x343F10u;
    {
        const bool branch_taken_0x343f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343f10) {
            ctx->pc = 0x343F30u;
            goto label_343f30;
        }
    }
    ctx->pc = 0x343F18u;
    // 0x343f18: 0xc0d0c40  jal         func_343100
    ctx->pc = 0x343F18u;
    SET_GPR_U32(ctx, 31, 0x343F20u);
    ctx->pc = 0x343100u;
    if (runtime->hasFunction(0x343100u)) {
        auto targetFn = runtime->lookupFunction(0x343100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F20u; }
        if (ctx->pc != 0x343F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343100_0x343100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F20u; }
        if (ctx->pc != 0x343F20u) { return; }
    }
    ctx->pc = 0x343F20u;
label_343f20:
    // 0x343f20: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343F20u;
    {
        const bool branch_taken_0x343f20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x343f20) {
            ctx->pc = 0x343F30u;
            goto label_343f30;
        }
    }
    ctx->pc = 0x343F28u;
    // 0x343f28: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x343F28u;
    SET_GPR_U32(ctx, 31, 0x343F30u);
    ctx->pc = 0x343F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343F28u;
            // 0x343f2c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F30u; }
        if (ctx->pc != 0x343F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F30u; }
        if (ctx->pc != 0x343F30u) { return; }
    }
    ctx->pc = 0x343F30u;
label_343f30:
    // 0x343f30: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x343f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x343f34: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x343f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x343f38: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x343f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x343f3c: 0xc0bb384  jal         func_2ECE10
    ctx->pc = 0x343F3Cu;
    SET_GPR_U32(ctx, 31, 0x343F44u);
    ctx->pc = 0x343F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343F3Cu;
            // 0x343f40: 0x24a5fe58  addiu       $a1, $a1, -0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECE10u;
    if (runtime->hasFunction(0x2ECE10u)) {
        auto targetFn = runtime->lookupFunction(0x2ECE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F44u; }
        if (ctx->pc != 0x343F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECE10_0x2ece10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F44u; }
        if (ctx->pc != 0x343F44u) { return; }
    }
    ctx->pc = 0x343F44u;
label_343f44:
    // 0x343f44: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x343f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x343f48: 0x14440023  bne         $v0, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x343F48u;
    {
        const bool branch_taken_0x343f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x343f48) {
            ctx->pc = 0x343FD8u;
            goto label_343fd8;
        }
    }
    ctx->pc = 0x343F50u;
    // 0x343f50: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x343f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343f54: 0x8c63fe60  lw          $v1, -0x1A0($v1)
    ctx->pc = 0x343f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966880)));
    // 0x343f58: 0x1464001f  bne         $v1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x343F58u;
    {
        const bool branch_taken_0x343f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x343F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343F58u;
            // 0x343f5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f58) {
            ctx->pc = 0x343FD8u;
            goto label_343fd8;
        }
    }
    ctx->pc = 0x343F60u;
    // 0x343f60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x343f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343f64:
    // 0x343f64: 0xc04042e  jal         func_1010B8
    ctx->pc = 0x343F64u;
    SET_GPR_U32(ctx, 31, 0x343F6Cu);
    ctx->pc = 0x343F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343F64u;
            // 0x343f68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1010B8u;
    if (runtime->hasFunction(0x1010B8u)) {
        auto targetFn = runtime->lookupFunction(0x1010B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F6Cu; }
        if (ctx->pc != 0x343F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001010B8_0x1010b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F6Cu; }
        if (ctx->pc != 0x343F6Cu) { return; }
    }
    ctx->pc = 0x343F6Cu;
label_343f6c:
    // 0x343f6c: 0xc089268  jal         func_2249A0
    ctx->pc = 0x343F6Cu;
    SET_GPR_U32(ctx, 31, 0x343F74u);
    ctx->pc = 0x2249A0u;
    if (runtime->hasFunction(0x2249A0u)) {
        auto targetFn = runtime->lookupFunction(0x2249A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F74u; }
        if (ctx->pc != 0x343F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002249A0_0x2249a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F74u; }
        if (ctx->pc != 0x343F74u) { return; }
    }
    ctx->pc = 0x343F74u;
label_343f74:
    // 0x343f74: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x343f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x343f78: 0xc083b66  jal         func_20ED98
    ctx->pc = 0x343F78u;
    SET_GPR_U32(ctx, 31, 0x343F80u);
    ctx->pc = 0x343F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343F78u;
            // 0x343f7c: 0x2484eac0  addiu       $a0, $a0, -0x1540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20ED98u;
    if (runtime->hasFunction(0x20ED98u)) {
        auto targetFn = runtime->lookupFunction(0x20ED98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F80u; }
        if (ctx->pc != 0x343F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020ED98_0x20ed98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F80u; }
        if (ctx->pc != 0x343F80u) { return; }
    }
    ctx->pc = 0x343F80u;
label_343f80:
    // 0x343f80: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x343f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x343f84: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x343f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x343f88: 0x2484fe60  addiu       $a0, $a0, -0x1A0
    ctx->pc = 0x343f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966880));
    // 0x343f8c: 0xc0bb384  jal         func_2ECE10
    ctx->pc = 0x343F8Cu;
    SET_GPR_U32(ctx, 31, 0x343F94u);
    ctx->pc = 0x343F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343F8Cu;
            // 0x343f90: 0x24a5fe58  addiu       $a1, $a1, -0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECE10u;
    if (runtime->hasFunction(0x2ECE10u)) {
        auto targetFn = runtime->lookupFunction(0x2ECE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F94u; }
        if (ctx->pc != 0x343F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECE10_0x2ece10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343F94u; }
        if (ctx->pc != 0x343F94u) { return; }
    }
    ctx->pc = 0x343F94u;
label_343f94:
    // 0x343f94: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x343f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x343f98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x343f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343f9c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x343F9Cu;
    SET_GPR_U32(ctx, 31, 0x343FA4u);
    ctx->pc = 0x343FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343F9Cu;
            // 0x343fa0: 0x248450f0  addiu       $a0, $a0, 0x50F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343FA4u; }
        if (ctx->pc != 0x343FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343FA4u; }
        if (ctx->pc != 0x343FA4u) { return; }
    }
    ctx->pc = 0x343FA4u;
label_343fa4:
    // 0x343fa4: 0x2a030384  slti        $v1, $s0, 0x384
    ctx->pc = 0x343fa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)900) ? 1 : 0);
    // 0x343fa8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x343FA8u;
    {
        const bool branch_taken_0x343fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343fa8) {
            ctx->pc = 0x343FC0u;
            goto label_343fc0;
        }
    }
    ctx->pc = 0x343FB0u;
    // 0x343fb0: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x343FB0u;
    SET_GPR_U32(ctx, 31, 0x343FB8u);
    ctx->pc = 0x343FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x343FB0u;
            // 0x343fb4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343FB8u; }
        if (ctx->pc != 0x343FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x343FB8u; }
        if (ctx->pc != 0x343FB8u) { return; }
    }
    ctx->pc = 0x343FB8u;
label_343fb8:
    // 0x343fb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x343FB8u;
    {
        const bool branch_taken_0x343fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x343fb8) {
            ctx->pc = 0x343FD8u;
            goto label_343fd8;
        }
    }
    ctx->pc = 0x343FC0u;
label_343fc0:
    // 0x343fc0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x343fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343fc4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x343fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x343fc8: 0x8c63fe60  lw          $v1, -0x1A0($v1)
    ctx->pc = 0x343fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966880)));
    // 0x343fcc: 0x5064ffe5  beql        $v1, $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x343FCCu;
    {
        const bool branch_taken_0x343fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x343fcc) {
            ctx->pc = 0x343FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x343FCCu;
            // 0x343fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x343F64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_343f64;
        }
    }
    ctx->pc = 0x343FD4u;
    // 0x343fd4: 0x0  nop
    ctx->pc = 0x343fd4u;
    // NOP
label_343fd8:
    // 0x343fd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_343fdc:
    // 0x343fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x343fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x343FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x343FE0u;
            // 0x343fe4: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x343FE8u;
    // 0x343fe8: 0x0  nop
    ctx->pc = 0x343fe8u;
    // NOP
    // 0x343fec: 0x0  nop
    ctx->pc = 0x343fecu;
    // NOP
label_343ff0:
    // 0x343ff0: 0x80828f0  j           func_20A3C0
    ctx->pc = 0x343FF0u;
    ctx->pc = 0x20A3C0u;
    if (runtime->hasFunction(0x20A3C0u)) {
        auto targetFn = runtime->lookupFunction(0x20A3C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0020A3C0_0x20a3c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x343FF8u;
    // 0x343ff8: 0x0  nop
    ctx->pc = 0x343ff8u;
    // NOP
    // 0x343ffc: 0x0  nop
    ctx->pc = 0x343ffcu;
    // NOP
label_344000:
    // 0x344000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344008: 0xc0828f0  jal         func_20A3C0
    ctx->pc = 0x344008u;
    SET_GPR_U32(ctx, 31, 0x344010u);
    ctx->pc = 0x20A3C0u;
    if (runtime->hasFunction(0x20A3C0u)) {
        auto targetFn = runtime->lookupFunction(0x20A3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344010u; }
        if (ctx->pc != 0x344010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A3C0_0x20a3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344010u; }
        if (ctx->pc != 0x344010u) { return; }
    }
    ctx->pc = 0x344010u;
label_344010:
    // 0x344010: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x344010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x344014: 0xc082908  jal         func_20A420
    ctx->pc = 0x344014u;
    SET_GPR_U32(ctx, 31, 0x34401Cu);
    ctx->pc = 0x344018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344014u;
            // 0x344018: 0x8c444378  lw          $a0, 0x4378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A420u;
    if (runtime->hasFunction(0x20A420u)) {
        auto targetFn = runtime->lookupFunction(0x20A420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34401Cu; }
        if (ctx->pc != 0x34401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A420_0x20a420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34401Cu; }
        if (ctx->pc != 0x34401Cu) { return; }
    }
    ctx->pc = 0x34401Cu;
label_34401c:
    // 0x34401c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34401cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344020: 0x3e00008  jr          $ra
    ctx->pc = 0x344020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344020u;
            // 0x344024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344028u;
    // 0x344028: 0x0  nop
    ctx->pc = 0x344028u;
    // NOP
    // 0x34402c: 0x0  nop
    ctx->pc = 0x34402cu;
    // NOP
label_344030:
    // 0x344030: 0x3e00008  jr          $ra
    ctx->pc = 0x344030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344038u;
    // 0x344038: 0x0  nop
    ctx->pc = 0x344038u;
    // NOP
    // 0x34403c: 0x0  nop
    ctx->pc = 0x34403cu;
    // NOP
    ctx->pc = 0x344040u;
}
