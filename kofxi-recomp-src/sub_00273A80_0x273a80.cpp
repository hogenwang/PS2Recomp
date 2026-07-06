#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00273A80
// Address: 0x273a80 - 0x273d78
void sub_00273A80_0x273a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273A80_0x273a80");
#endif

    switch (ctx->pc) {
        case 0x273ab0u: goto label_273ab0;
        case 0x273ae4u: goto label_273ae4;
        case 0x273af4u: goto label_273af4;
        case 0x273afcu: goto label_273afc;
        case 0x273b20u: goto label_273b20;
        case 0x273b30u: goto label_273b30;
        case 0x273b40u: goto label_273b40;
        case 0x273b50u: goto label_273b50;
        case 0x273b60u: goto label_273b60;
        case 0x273b74u: goto label_273b74;
        case 0x273b7cu: goto label_273b7c;
        case 0x273b84u: goto label_273b84;
        case 0x273ba0u: goto label_273ba0;
        case 0x273ba8u: goto label_273ba8;
        case 0x273bb0u: goto label_273bb0;
        case 0x273bc0u: goto label_273bc0;
        case 0x273be4u: goto label_273be4;
        case 0x273c08u: goto label_273c08;
        case 0x273c2cu: goto label_273c2c;
        case 0x273c50u: goto label_273c50;
        case 0x273c74u: goto label_273c74;
        case 0x273c98u: goto label_273c98;
        case 0x273cc0u: goto label_273cc0;
        case 0x273ce8u: goto label_273ce8;
        case 0x273cf0u: goto label_273cf0;
        case 0x273d44u: goto label_273d44;
        default: break;
    }

    ctx->pc = 0x273a80u;

    // 0x273a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x273a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x273a84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x273a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x273a88: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x273a88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x273a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x273a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x273a90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x273a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x273a94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x273a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x273a98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x273a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x273a9c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x273a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x273aa0: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x273aa0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x273aa4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x273aa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x273aa8: 0xc0b68c8  jal         func_2DA320
    ctx->pc = 0x273AA8u;
    SET_GPR_U32(ctx, 31, 0x273AB0u);
    ctx->pc = 0x273AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273AA8u;
            // 0x273aac: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DA320u;
    if (runtime->hasFunction(0x2DA320u)) {
        auto targetFn = runtime->lookupFunction(0x2DA320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AB0u; }
        if (ctx->pc != 0x273AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DA320_0x2da320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AB0u; }
        if (ctx->pc != 0x273AB0u) { return; }
    }
    ctx->pc = 0x273AB0u;
label_273ab0:
    // 0x273ab0: 0x8e832d74  lw          $v1, 0x2D74($s4)
    ctx->pc = 0x273ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11636)));
    // 0x273ab4: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x273AB4u;
    {
        const bool branch_taken_0x273ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273AB4u;
            // 0x273ab8: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ab4) {
            ctx->pc = 0x273D48u;
            goto label_273d48;
        }
    }
    ctx->pc = 0x273ABCu;
    // 0x273abc: 0x26302d78  addiu       $s0, $s1, 0x2D78
    ctx->pc = 0x273abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11640));
    // 0x273ac0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x273ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x273ac4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x273ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x273ac8: 0x8c4206f0  lw          $v0, 0x6F0($v0)
    ctx->pc = 0x273ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1776)));
    // 0x273acc: 0x5c40009f  bgtzl       $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x273ACCu;
    {
        const bool branch_taken_0x273acc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x273acc) {
            ctx->pc = 0x273AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273ACCu;
            // 0x273ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273D4Cu;
            goto label_273d4c;
        }
    }
    ctx->pc = 0x273AD4u;
    // 0x273ad4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273ad8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273adc: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x273ADCu;
    SET_GPR_U32(ctx, 31, 0x273AE4u);
    ctx->pc = 0x273AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273ADCu;
            // 0x273ae0: 0x8c8406d4  lw          $a0, 0x6D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AE4u; }
        if (ctx->pc != 0x273AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AE4u; }
        if (ctx->pc != 0x273AE4u) { return; }
    }
    ctx->pc = 0x273AE4u;
label_273ae4:
    // 0x273ae4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273ae8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273aec: 0xc043320  jal         func_10CC80
    ctx->pc = 0x273AECu;
    SET_GPR_U32(ctx, 31, 0x273AF4u);
    ctx->pc = 0x273AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273AECu;
            // 0x273af0: 0x8c8406d4  lw          $a0, 0x6D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AF4u; }
        if (ctx->pc != 0x273AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AF4u; }
        if (ctx->pc != 0x273AF4u) { return; }
    }
    ctx->pc = 0x273AF4u;
label_273af4:
    // 0x273af4: 0xc09c8a8  jal         func_2722A0
    ctx->pc = 0x273AF4u;
    SET_GPR_U32(ctx, 31, 0x273AFCu);
    ctx->pc = 0x2722A0u;
    if (runtime->hasFunction(0x2722A0u)) {
        auto targetFn = runtime->lookupFunction(0x2722A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AFCu; }
        if (ctx->pc != 0x273AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002722A0_0x2722a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273AFCu; }
        if (ctx->pc != 0x273AFCu) { return; }
    }
    ctx->pc = 0x273AFCu;
label_273afc:
    // 0x273afc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x273AFCu;
    {
        const bool branch_taken_0x273afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273afc) {
            ctx->pc = 0x273B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273AFCu;
            // 0x273b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273B10u;
            goto label_273b10;
        }
    }
    ctx->pc = 0x273B04u;
    // 0x273b04: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x273B04u;
    {
        const bool branch_taken_0x273b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B04u;
            // 0x273b08: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b04) {
            ctx->pc = 0x273D4Cu;
            goto label_273d4c;
        }
    }
    ctx->pc = 0x273B0Cu;
    // 0x273b0c: 0x0  nop
    ctx->pc = 0x273b0cu;
    // NOP
label_273b10:
    // 0x273b10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273b14: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x273b14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x273b18: 0xc09c8a8  jal         func_2722A0
    ctx->pc = 0x273B18u;
    SET_GPR_U32(ctx, 31, 0x273B20u);
    ctx->pc = 0x273B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273B18u;
            // 0x273b1c: 0xac2206f0  sw          $v0, 0x6F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2722A0u;
    if (runtime->hasFunction(0x2722A0u)) {
        auto targetFn = runtime->lookupFunction(0x2722A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B20u; }
        if (ctx->pc != 0x273B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002722A0_0x2722a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B20u; }
        if (ctx->pc != 0x273B20u) { return; }
    }
    ctx->pc = 0x273B20u;
label_273b20:
    // 0x273b20: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x273B20u;
    {
        const bool branch_taken_0x273b20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x273b20) {
            ctx->pc = 0x273B38u;
            goto label_273b38;
        }
    }
    ctx->pc = 0x273B28u;
    // 0x273b28: 0xc09c8b0  jal         func_2722C0
    ctx->pc = 0x273B28u;
    SET_GPR_U32(ctx, 31, 0x273B30u);
    ctx->pc = 0x273B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273B28u;
            // 0x273b2c: 0x26302d78  addiu       $s0, $s1, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2722C0u;
    if (runtime->hasFunction(0x2722C0u)) {
        auto targetFn = runtime->lookupFunction(0x2722C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B30u; }
        if (ctx->pc != 0x273B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002722C0_0x2722c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B30u; }
        if (ctx->pc != 0x273B30u) { return; }
    }
    ctx->pc = 0x273B30u;
label_273b30:
    // 0x273b30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x273B30u;
    {
        const bool branch_taken_0x273b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b30) {
            ctx->pc = 0x273B50u;
            goto label_273b50;
        }
    }
    ctx->pc = 0x273B38u;
label_273b38:
    // 0x273b38: 0xc09c8ac  jal         func_2722B0
    ctx->pc = 0x273B38u;
    SET_GPR_U32(ctx, 31, 0x273B40u);
    ctx->pc = 0x2722B0u;
    if (runtime->hasFunction(0x2722B0u)) {
        auto targetFn = runtime->lookupFunction(0x2722B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B40u; }
        if (ctx->pc != 0x273B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002722B0_0x2722b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B40u; }
        if (ctx->pc != 0x273B40u) { return; }
    }
    ctx->pc = 0x273B40u;
label_273b40:
    // 0x273b40: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273B40u;
    {
        const bool branch_taken_0x273b40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x273B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B40u;
            // 0x273b44: 0x26302d78  addiu       $s0, $s1, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b40) {
            ctx->pc = 0x273B50u;
            goto label_273b50;
        }
    }
    ctx->pc = 0x273B48u;
    // 0x273b48: 0xc09c8ba  jal         func_2722E8
    ctx->pc = 0x273B48u;
    SET_GPR_U32(ctx, 31, 0x273B50u);
    ctx->pc = 0x2722E8u;
    if (runtime->hasFunction(0x2722E8u)) {
        auto targetFn = runtime->lookupFunction(0x2722E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B50u; }
        if (ctx->pc != 0x273B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002722E8_0x2722e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B50u; }
        if (ctx->pc != 0x273B50u) { return; }
    }
    ctx->pc = 0x273B50u;
label_273b50:
    // 0x273b50: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273b54: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273b58: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x273B58u;
    SET_GPR_U32(ctx, 31, 0x273B60u);
    ctx->pc = 0x273B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273B58u;
            // 0x273b5c: 0x8c8406cc  lw          $a0, 0x6CC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B60u; }
        if (ctx->pc != 0x273B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B60u; }
        if (ctx->pc != 0x273B60u) { return; }
    }
    ctx->pc = 0x273B60u;
label_273b60:
    // 0x273b60: 0xde030410  ld          $v1, 0x410($s0)
    ctx->pc = 0x273b60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x273b64: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x273B64u;
    {
        const bool branch_taken_0x273b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b64) {
            ctx->pc = 0x273B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273B64u;
            // 0x273b68: 0x26302d78  addiu       $s0, $s1, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11640));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273BA0u;
            goto label_273ba0;
        }
    }
    ctx->pc = 0x273B6Cu;
    // 0x273b6c: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x273B6Cu;
    SET_GPR_U32(ctx, 31, 0x273B74u);
    ctx->pc = 0x273B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273B6Cu;
            // 0x273b70: 0x8e04041c  lw          $a0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (runtime->hasFunction(0x10CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B74u; }
        if (ctx->pc != 0x273B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CAB0_0x10cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B74u; }
        if (ctx->pc != 0x273B74u) { return; }
    }
    ctx->pc = 0x273B74u;
label_273b74:
    // 0x273b74: 0xc0bf148  jal         func_2FC520
    ctx->pc = 0x273B74u;
    SET_GPR_U32(ctx, 31, 0x273B7Cu);
    ctx->pc = 0x273B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273B74u;
            // 0x273b78: 0x8e04041c  lw          $a0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC520u;
    if (runtime->hasFunction(0x2FC520u)) {
        auto targetFn = runtime->lookupFunction(0x2FC520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B7Cu; }
        if (ctx->pc != 0x273B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC520_0x2fc520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B7Cu; }
        if (ctx->pc != 0x273B7Cu) { return; }
    }
    ctx->pc = 0x273B7Cu;
label_273b7c:
    // 0x273b7c: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x273B7Cu;
    SET_GPR_U32(ctx, 31, 0x273B84u);
    ctx->pc = 0x273B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273B7Cu;
            // 0x273b80: 0x8e04041c  lw          $a0, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B84u; }
        if (ctx->pc != 0x273B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273B84u; }
        if (ctx->pc != 0x273B84u) { return; }
    }
    ctx->pc = 0x273B84u;
label_273b84:
    // 0x273b84: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273b88: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273b8c: 0x8c8406d8  lw          $a0, 0x6D8($a0)
    ctx->pc = 0x273b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1752)));
    // 0x273b90: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273B90u;
    {
        const bool branch_taken_0x273b90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x273B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B90u;
            // 0x273b94: 0x26302d78  addiu       $s0, $s1, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b90) {
            ctx->pc = 0x273BA0u;
            goto label_273ba0;
        }
    }
    ctx->pc = 0x273B98u;
    // 0x273b98: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273B98u;
    SET_GPR_U32(ctx, 31, 0x273BA0u);
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BA0u; }
        if (ctx->pc != 0x273BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BA0u; }
        if (ctx->pc != 0x273BA0u) { return; }
    }
    ctx->pc = 0x273BA0u;
label_273ba0:
    // 0x273ba0: 0xc0432ac  jal         func_10CAB0
    ctx->pc = 0x273BA0u;
    SET_GPR_U32(ctx, 31, 0x273BA8u);
    ctx->pc = 0x273BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273BA0u;
            // 0x273ba4: 0x8e040418  lw          $a0, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAB0u;
    if (runtime->hasFunction(0x10CAB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BA8u; }
        if (ctx->pc != 0x273BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CAB0_0x10cab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BA8u; }
        if (ctx->pc != 0x273BA8u) { return; }
    }
    ctx->pc = 0x273BA8u;
label_273ba8:
    // 0x273ba8: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x273BA8u;
    SET_GPR_U32(ctx, 31, 0x273BB0u);
    ctx->pc = 0x273BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273BA8u;
            // 0x273bac: 0x8e040418  lw          $a0, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BB0u; }
        if (ctx->pc != 0x273BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BB0u; }
        if (ctx->pc != 0x273BB0u) { return; }
    }
    ctx->pc = 0x273BB0u;
label_273bb0:
    // 0x273bb0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273bb4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273bb8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273BB8u;
    SET_GPR_U32(ctx, 31, 0x273BC0u);
    ctx->pc = 0x273BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273BB8u;
            // 0x273bbc: 0x8c8406bc  lw          $a0, 0x6BC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BC0u; }
        if (ctx->pc != 0x273BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BC0u; }
        if (ctx->pc != 0x273BC0u) { return; }
    }
    ctx->pc = 0x273BC0u;
label_273bc0:
    // 0x273bc0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x273bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x273bc4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273bc8: 0x8c6306bc  lw          $v1, 0x6BC($v1)
    ctx->pc = 0x273bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1724)));
    // 0x273bcc: 0x54430060  bnel        $v0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x273BCCu;
    {
        const bool branch_taken_0x273bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x273bcc) {
            ctx->pc = 0x273BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273BCCu;
            // 0x273bd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273D50u;
            goto label_273d50;
        }
    }
    ctx->pc = 0x273BD4u;
    // 0x273bd4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273bd8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273bdc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273BDCu;
    SET_GPR_U32(ctx, 31, 0x273BE4u);
    ctx->pc = 0x273BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273BDCu;
            // 0x273be0: 0x8c8406c0  lw          $a0, 0x6C0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BE4u; }
        if (ctx->pc != 0x273BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273BE4u; }
        if (ctx->pc != 0x273BE4u) { return; }
    }
    ctx->pc = 0x273BE4u;
label_273be4:
    // 0x273be4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x273be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x273be8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273bec: 0x8c6306c0  lw          $v1, 0x6C0($v1)
    ctx->pc = 0x273becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1728)));
    // 0x273bf0: 0x54430057  bnel        $v0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x273BF0u;
    {
        const bool branch_taken_0x273bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x273bf0) {
            ctx->pc = 0x273BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273BF0u;
            // 0x273bf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273D50u;
            goto label_273d50;
        }
    }
    ctx->pc = 0x273BF8u;
    // 0x273bf8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273bfc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273c00: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273C00u;
    SET_GPR_U32(ctx, 31, 0x273C08u);
    ctx->pc = 0x273C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C00u;
            // 0x273c04: 0x8c8406c4  lw          $a0, 0x6C4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1732)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C08u; }
        if (ctx->pc != 0x273C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C08u; }
        if (ctx->pc != 0x273C08u) { return; }
    }
    ctx->pc = 0x273C08u;
label_273c08:
    // 0x273c08: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x273c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x273c0c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273c10: 0x8c6306c4  lw          $v1, 0x6C4($v1)
    ctx->pc = 0x273c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1732)));
    // 0x273c14: 0x5443004e  bnel        $v0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x273C14u;
    {
        const bool branch_taken_0x273c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x273c14) {
            ctx->pc = 0x273C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273C14u;
            // 0x273c18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273D50u;
            goto label_273d50;
        }
    }
    ctx->pc = 0x273C1Cu;
    // 0x273c1c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273c20: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273c24: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273C24u;
    SET_GPR_U32(ctx, 31, 0x273C2Cu);
    ctx->pc = 0x273C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C24u;
            // 0x273c28: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C2Cu; }
        if (ctx->pc != 0x273C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C2Cu; }
        if (ctx->pc != 0x273C2Cu) { return; }
    }
    ctx->pc = 0x273C2Cu;
label_273c2c:
    // 0x273c2c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x273c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x273c30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273c34: 0x8c6306c8  lw          $v1, 0x6C8($v1)
    ctx->pc = 0x273c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1736)));
    // 0x273c38: 0x54430045  bnel        $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x273C38u;
    {
        const bool branch_taken_0x273c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x273c38) {
            ctx->pc = 0x273C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273C38u;
            // 0x273c3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273D50u;
            goto label_273d50;
        }
    }
    ctx->pc = 0x273C40u;
    // 0x273c40: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273c44: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273c48: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273C48u;
    SET_GPR_U32(ctx, 31, 0x273C50u);
    ctx->pc = 0x273C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C48u;
            // 0x273c4c: 0x8c8406cc  lw          $a0, 0x6CC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C50u; }
        if (ctx->pc != 0x273C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C50u; }
        if (ctx->pc != 0x273C50u) { return; }
    }
    ctx->pc = 0x273C50u;
label_273c50:
    // 0x273c50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x273c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x273c54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273c58: 0x8c6306cc  lw          $v1, 0x6CC($v1)
    ctx->pc = 0x273c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1740)));
    // 0x273c5c: 0x5443003c  bnel        $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x273C5Cu;
    {
        const bool branch_taken_0x273c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x273c5c) {
            ctx->pc = 0x273C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273C5Cu;
            // 0x273c60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273D50u;
            goto label_273d50;
        }
    }
    ctx->pc = 0x273C64u;
    // 0x273c64: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273c68: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273c6c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273C6Cu;
    SET_GPR_U32(ctx, 31, 0x273C74u);
    ctx->pc = 0x273C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C6Cu;
            // 0x273c70: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C74u; }
        if (ctx->pc != 0x273C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C74u; }
        if (ctx->pc != 0x273C74u) { return; }
    }
    ctx->pc = 0x273C74u;
label_273c74:
    // 0x273c74: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x273c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x273c78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273c7c: 0x8c6306d0  lw          $v1, 0x6D0($v1)
    ctx->pc = 0x273c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1744)));
    // 0x273c80: 0x54430033  bnel        $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x273C80u;
    {
        const bool branch_taken_0x273c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x273c80) {
            ctx->pc = 0x273C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273C80u;
            // 0x273c84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273D50u;
            goto label_273d50;
        }
    }
    ctx->pc = 0x273C88u;
    // 0x273c88: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273c8c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273c90: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x273C90u;
    SET_GPR_U32(ctx, 31, 0x273C98u);
    ctx->pc = 0x273C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273C90u;
            // 0x273c94: 0x8c8406d4  lw          $a0, 0x6D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C98u; }
        if (ctx->pc != 0x273C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273C98u; }
        if (ctx->pc != 0x273C98u) { return; }
    }
    ctx->pc = 0x273C98u;
label_273c98:
    // 0x273c98: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x273c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x273c9c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273ca0: 0x8c6306d4  lw          $v1, 0x6D4($v1)
    ctx->pc = 0x273ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1748)));
    // 0x273ca4: 0x5443002a  bnel        $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x273CA4u;
    {
        const bool branch_taken_0x273ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x273ca4) {
            ctx->pc = 0x273CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x273CA4u;
            // 0x273ca8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x273D50u;
            goto label_273d50;
        }
    }
    ctx->pc = 0x273CACu;
    // 0x273cac: 0x8e040420  lw          $a0, 0x420($s0)
    ctx->pc = 0x273cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1056)));
    // 0x273cb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273CB0u;
    {
        const bool branch_taken_0x273cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273CB0u;
            // 0x273cb4: 0x3c120001  lui         $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cb0) {
            ctx->pc = 0x273CC0u;
            goto label_273cc0;
        }
    }
    ctx->pc = 0x273CB8u;
    // 0x273cb8: 0xc09edd6  jal         func_27B758
    ctx->pc = 0x273CB8u;
    SET_GPR_U32(ctx, 31, 0x273CC0u);
    ctx->pc = 0x27B758u;
    if (runtime->hasFunction(0x27B758u)) {
        auto targetFn = runtime->lookupFunction(0x27B758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273CC0u; }
        if (ctx->pc != 0x273CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B758_0x27b758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273CC0u; }
        if (ctx->pc != 0x273CC0u) { return; }
    }
    ctx->pc = 0x273CC0u;
label_273cc0:
    // 0x273cc0: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x273cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x273cc4: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x273cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x273cc8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x273cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x273ccc: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x273cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x273cd0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x273cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x273cd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x273cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273cd8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x273cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x273cdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x273cdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x273ce0: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x273ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x273ce4: 0x3652073f  ori         $s2, $s2, 0x73F
    ctx->pc = 0x273ce4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1855);
label_273ce8:
    // 0x273ce8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x273CE8u;
    SET_GPR_U32(ctx, 31, 0x273CF0u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273CF0u; }
        if (ctx->pc != 0x273CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273CF0u; }
        if (ctx->pc != 0x273CF0u) { return; }
    }
    ctx->pc = 0x273CF0u;
label_273cf0:
    // 0x273cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x273cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273cf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x273cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x273cf8: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x273cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x273cfc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x273cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x273d00: 0x0  nop
    ctx->pc = 0x273d00u;
    // NOP
    // 0x273d04: 0x0  nop
    ctx->pc = 0x273d04u;
    // NOP
    // 0x273d08: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x273d08u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x273d0c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x273d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x273d10: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x273d10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273d14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273d14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x273d18: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x273d18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x273d1c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x273D1Cu;
    {
        const bool branch_taken_0x273d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273D1Cu;
            // 0x273d20: 0x251182b  sltu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d1c) {
            ctx->pc = 0x273D34u;
            goto label_273d34;
        }
    }
    ctx->pc = 0x273D24u;
    // 0x273d24: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x273d24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x273d28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x273d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x273d2c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x273d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x273d30: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x273d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_273d34:
    // 0x273d34: 0x1060ffec  beqz        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x273D34u;
    {
        const bool branch_taken_0x273d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273D34u;
            // 0x273d38: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d34) {
            ctx->pc = 0x273CE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_273ce8;
        }
    }
    ctx->pc = 0x273D3Cu;
    // 0x273d3c: 0xc09ecdc  jal         func_27B370
    ctx->pc = 0x273D3Cu;
    SET_GPR_U32(ctx, 31, 0x273D44u);
    ctx->pc = 0x27B370u;
    if (runtime->hasFunction(0x27B370u)) {
        auto targetFn = runtime->lookupFunction(0x27B370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D44u; }
        if (ctx->pc != 0x273D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B370_0x27b370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273D44u; }
        if (ctx->pc != 0x273D44u) { return; }
    }
    ctx->pc = 0x273D44u;
label_273d44:
    // 0x273d44: 0xae802d74  sw          $zero, 0x2D74($s4)
    ctx->pc = 0x273d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 11636), GPR_U32(ctx, 0));
label_273d48:
    // 0x273d48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273d4c:
    // 0x273d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x273d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273d50:
    // 0x273d50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x273d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x273d54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x273d54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273d58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x273d58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x273d5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x273d5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273d60: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x273d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x273d64: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x273d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x273d68: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x273d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x273d6c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x273d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x273d70: 0x3e00008  jr          $ra
    ctx->pc = 0x273D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273D70u;
            // 0x273d74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273D78u;
    ctx->pc = 0x273d78u;
}
