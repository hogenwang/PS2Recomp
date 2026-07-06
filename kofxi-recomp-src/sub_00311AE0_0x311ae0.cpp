#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00311AE0
// Address: 0x311ae0 - 0x311c00
void sub_00311AE0_0x311ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311AE0_0x311ae0");
#endif

    switch (ctx->pc) {
        case 0x311b18u: goto label_311b18;
        case 0x311b20u: goto label_311b20;
        case 0x311b30u: goto label_311b30;
        case 0x311b3cu: goto label_311b3c;
        case 0x311b44u: goto label_311b44;
        case 0x311ba0u: goto label_311ba0;
        case 0x311ba8u: goto label_311ba8;
        case 0x311bbcu: goto label_311bbc;
        case 0x311bc8u: goto label_311bc8;
        default: break;
    }

    ctx->pc = 0x311ae0u;

    // 0x311ae0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x311ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x311ae4: 0x24053880  addiu       $a1, $zero, 0x3880
    ctx->pc = 0x311ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14464));
    // 0x311ae8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x311ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x311aec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x311aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x311af0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x311af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x311af4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x311af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x311af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x311afc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x311afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x311b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x311b04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b08: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x311b08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x311b0c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x311b0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x311b10: 0xc040532  jal         func_1014C8
    ctx->pc = 0x311B10u;
    SET_GPR_U32(ctx, 31, 0x311B18u);
    ctx->pc = 0x311B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311B10u;
            // 0x311b14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B18u; }
        if (ctx->pc != 0x311B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B18u; }
        if (ctx->pc != 0x311B18u) { return; }
    }
    ctx->pc = 0x311B18u;
label_311b18:
    // 0x311b18: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x311B18u;
    SET_GPR_U32(ctx, 31, 0x311B20u);
    ctx->pc = 0x311B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311B18u;
            // 0x311b1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B20u; }
        if (ctx->pc != 0x311B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B20u; }
        if (ctx->pc != 0x311B20u) { return; }
    }
    ctx->pc = 0x311B20u;
label_311b20:
    // 0x311b20: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x311b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x311b24: 0x8c450980  lw          $a1, 0x980($v0)
    ctx->pc = 0x311b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2432)));
    // 0x311b28: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x311B28u;
    SET_GPR_U32(ctx, 31, 0x311B30u);
    ctx->pc = 0x311B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311B28u;
            // 0x311b2c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B30u; }
        if (ctx->pc != 0x311B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B30u; }
        if (ctx->pc != 0x311B30u) { return; }
    }
    ctx->pc = 0x311B30u;
label_311b30:
    // 0x311b30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x311b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b34: 0xc040454  jal         func_101150
    ctx->pc = 0x311B34u;
    SET_GPR_U32(ctx, 31, 0x311B3Cu);
    ctx->pc = 0x311B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311B34u;
            // 0x311b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B3Cu; }
        if (ctx->pc != 0x311B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311B3Cu; }
        if (ctx->pc != 0x311B3Cu) { return; }
    }
    ctx->pc = 0x311B3Cu;
label_311b3c:
    // 0x311b3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x311b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x311b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_311b44:
    // 0x311b44: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x311B44u;
    {
        const bool branch_taken_0x311b44 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x311B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311B44u;
            // 0x311b48: 0x118043  sra         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b44) {
            ctx->pc = 0x311B54u;
            goto label_311b54;
        }
    }
    ctx->pc = 0x311B4Cu;
    // 0x311b4c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x311b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x311b50: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x311b50u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_311b54:
    // 0x311b54: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311B54u;
    {
        const bool branch_taken_0x311b54 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x311B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311B54u;
            // 0x311b58: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b54) {
            ctx->pc = 0x311B64u;
            goto label_311b64;
        }
    }
    ctx->pc = 0x311B5Cu;
    // 0x311b5c: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x311b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x311b60: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x311b60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_311b64:
    // 0x311b64: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x311B64u;
    {
        const bool branch_taken_0x311b64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x311B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311B64u;
            // 0x311b68: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b64) {
            ctx->pc = 0x311B74u;
            goto label_311b74;
        }
    }
    ctx->pc = 0x311B6Cu;
    // 0x311b6c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x311b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x311b70: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x311b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_311b74:
    // 0x311b74: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x311b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x311b78: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x311b78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x311b7c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x311b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x311b80: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x311b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x311b84: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x311b84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x311b88: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x311b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x311b8c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x311b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x311b90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x311b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x311b94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b98: 0xc040532  jal         func_1014C8
    ctx->pc = 0x311B98u;
    SET_GPR_U32(ctx, 31, 0x311BA0u);
    ctx->pc = 0x311B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311B98u;
            // 0x311b9c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BA0u; }
        if (ctx->pc != 0x311BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BA0u; }
        if (ctx->pc != 0x311BA0u) { return; }
    }
    ctx->pc = 0x311BA0u;
label_311ba0:
    // 0x311ba0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x311BA0u;
    SET_GPR_U32(ctx, 31, 0x311BA8u);
    ctx->pc = 0x311BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311BA0u;
            // 0x311ba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BA8u; }
        if (ctx->pc != 0x311BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BA8u; }
        if (ctx->pc != 0x311BA8u) { return; }
    }
    ctx->pc = 0x311BA8u;
label_311ba8:
    // 0x311ba8: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x311ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x311bac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x311bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x311bb0: 0x8c420988  lw          $v0, 0x988($v0)
    ctx->pc = 0x311bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2440)));
    // 0x311bb4: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x311BB4u;
    SET_GPR_U32(ctx, 31, 0x311BBCu);
    ctx->pc = 0x311BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311BB4u;
            // 0x311bb8: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (runtime->hasFunction(0x1017F0u)) {
        auto targetFn = runtime->lookupFunction(0x1017F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BBCu; }
        if (ctx->pc != 0x311BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001017F0_0x1017f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BBCu; }
        if (ctx->pc != 0x311BBCu) { return; }
    }
    ctx->pc = 0x311BBCu;
label_311bbc:
    // 0x311bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x311bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311bc0: 0xc040454  jal         func_101150
    ctx->pc = 0x311BC0u;
    SET_GPR_U32(ctx, 31, 0x311BC8u);
    ctx->pc = 0x311BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311BC0u;
            // 0x311bc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (runtime->hasFunction(0x101150u)) {
        auto targetFn = runtime->lookupFunction(0x101150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BC8u; }
        if (ctx->pc != 0x311BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101150_0x101150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311BC8u; }
        if (ctx->pc != 0x311BC8u) { return; }
    }
    ctx->pc = 0x311BC8u;
label_311bc8:
    // 0x311bc8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x311bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x311bcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x311bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x311bd0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x311bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x311bd4: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x311bd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x311bd8: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x311BD8u;
    {
        const bool branch_taken_0x311bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x311bd8) {
            ctx->pc = 0x311B44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311b44;
        }
    }
    ctx->pc = 0x311BE0u;
    // 0x311be0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x311be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311be4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x311BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311BF0u;
            // 0x311bf4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x311BF8u;
    // 0x311bf8: 0x0  nop
    ctx->pc = 0x311bf8u;
    // NOP
    // 0x311bfc: 0x0  nop
    ctx->pc = 0x311bfcu;
    // NOP
    ctx->pc = 0x311c00u;
}
