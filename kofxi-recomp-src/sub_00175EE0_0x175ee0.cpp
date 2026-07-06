#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175EE0
// Address: 0x175ee0 - 0x1761c0
void sub_00175EE0_0x175ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175EE0_0x175ee0");
#endif

    switch (ctx->pc) {
        case 0x175efcu: goto label_175efc;
        case 0x175f10u: goto label_175f10;
        case 0x175f1cu: goto label_175f1c;
        case 0x175fdcu: goto label_175fdc;
        case 0x175ff8u: goto label_175ff8;
        case 0x176014u: goto label_176014;
        case 0x176030u: goto label_176030;
        case 0x17604cu: goto label_17604c;
        case 0x176068u: goto label_176068;
        case 0x176084u: goto label_176084;
        case 0x1760a0u: goto label_1760a0;
        case 0x1760bcu: goto label_1760bc;
        case 0x1760d0u: goto label_1760d0;
        case 0x1760dcu: goto label_1760dc;
        case 0x1760f0u: goto label_1760f0;
        default: break;
    }

    ctx->pc = 0x175ee0u;

    // 0x175ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175ee4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x175ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x175ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175eec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x175eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ef4: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x175EF4u;
    SET_GPR_U32(ctx, 31, 0x175EFCu);
    ctx->pc = 0x175EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175EF4u;
            // 0x175ef8: 0x3445ff00  ori         $a1, $v0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EFCu; }
        if (ctx->pc != 0x175EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175EFCu; }
        if (ctx->pc != 0x175EFCu) { return; }
    }
    ctx->pc = 0x175EFCu;
label_175efc:
    // 0x175efc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x175efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x175f00: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x175f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x175f04: 0x24a5d600  addiu       $a1, $a1, -0x2A00
    ctx->pc = 0x175f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
    // 0x175f08: 0xc067d44  jal         func_19F510
    ctx->pc = 0x175F08u;
    SET_GPR_U32(ctx, 31, 0x175F10u);
    ctx->pc = 0x175F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F08u;
            // 0x175f0c: 0x34440002  ori         $a0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (runtime->hasFunction(0x19F510u)) {
        auto targetFn = runtime->lookupFunction(0x19F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F10u; }
        if (ctx->pc != 0x175F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F510_0x19f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F10u; }
        if (ctx->pc != 0x175F10u) { return; }
    }
    ctx->pc = 0x175F10u;
label_175f10:
    // 0x175f10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x175f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f14: 0xc05c72c  jal         func_171CB0
    ctx->pc = 0x175F14u;
    SET_GPR_U32(ctx, 31, 0x175F1Cu);
    ctx->pc = 0x175F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175F14u;
            // 0x175f18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171CB0u;
    if (runtime->hasFunction(0x171CB0u)) {
        auto targetFn = runtime->lookupFunction(0x171CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F1Cu; }
        if (ctx->pc != 0x175F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171CB0_0x171cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175F1Cu; }
        if (ctx->pc != 0x175F1Cu) { return; }
    }
    ctx->pc = 0x175F1Cu;
label_175f1c:
    // 0x175f1c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x175f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175f20: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x175f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x175f24: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x175F24u;
    {
        const bool branch_taken_0x175f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175f24) {
            ctx->pc = 0x175F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175F24u;
            // 0x175f28: 0x30a30008  andi        $v1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x175F60u;
            goto label_175f60;
        }
    }
    ctx->pc = 0x175F2Cu;
    // 0x175f2c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x175f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x175f30: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x175f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x175f34: 0x8084f338  lb          $a0, -0xCC8($a0)
    ctx->pc = 0x175f34u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964024)));
    // 0x175f38: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x175f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x175f3c: 0xa064f338  sb          $a0, -0xCC8($v1)
    ctx->pc = 0x175f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964024), (uint8_t)GPR_U32(ctx, 4));
    // 0x175f40: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x175f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x175f44: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x175f44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x175f48: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175F48u;
    {
        const bool branch_taken_0x175f48 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x175f48) {
            ctx->pc = 0x175F5Cu;
            goto label_175f5c;
        }
    }
    ctx->pc = 0x175F50u;
    // 0x175f50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x175f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x175f54: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x175f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x175f58: 0xa064f338  sb          $a0, -0xCC8($v1)
    ctx->pc = 0x175f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964024), (uint8_t)GPR_U32(ctx, 4));
label_175f5c:
    // 0x175f5c: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x175f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_175f60:
    // 0x175f60: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x175F60u;
    {
        const bool branch_taken_0x175f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175f60) {
            ctx->pc = 0x175F98u;
            goto label_175f98;
        }
    }
    ctx->pc = 0x175F68u;
    // 0x175f68: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x175f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x175f6c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x175f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x175f70: 0x8084f338  lb          $a0, -0xCC8($a0)
    ctx->pc = 0x175f70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964024)));
    // 0x175f74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x175f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x175f78: 0xa064f338  sb          $a0, -0xCC8($v1)
    ctx->pc = 0x175f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964024), (uint8_t)GPR_U32(ctx, 4));
    // 0x175f7c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x175f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x175f80: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x175f80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x175f84: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x175f84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x175f88: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x175F88u;
    {
        const bool branch_taken_0x175f88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x175f88) {
            ctx->pc = 0x175F98u;
            goto label_175f98;
        }
    }
    ctx->pc = 0x175F90u;
    // 0x175f90: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x175f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x175f94: 0xa060f338  sb          $zero, -0xCC8($v1)
    ctx->pc = 0x175f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964024), (uint8_t)GPR_U32(ctx, 0));
label_175f98:
    // 0x175f98: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x175f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x175f9c: 0x8063f338  lb          $v1, -0xCC8($v1)
    ctx->pc = 0x175f9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964024)));
    // 0x175fa0: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x175fa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x175fa4: 0x50200046  beql        $at, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x175FA4u;
    {
        const bool branch_taken_0x175fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175fa4) {
            ctx->pc = 0x175FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x175FA4u;
            // 0x175fa8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1760C0u;
            goto label_1760c0;
        }
    }
    ctx->pc = 0x175FACu;
    // 0x175fac: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x175facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x175fb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175fb4: 0x2484d6a0  addiu       $a0, $a0, -0x2960
    ctx->pc = 0x175fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956704));
    // 0x175fb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x175fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175fbc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x175fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175fc0: 0x600008  jr          $v1
    ctx->pc = 0x175FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175FC8u: goto label_175fc8;
            case 0x175FE4u: goto label_175fe4;
            case 0x176000u: goto label_176000;
            case 0x17601Cu: goto label_17601c;
            case 0x176038u: goto label_176038;
            case 0x176054u: goto label_176054;
            case 0x176070u: goto label_176070;
            case 0x17608Cu: goto label_17608c;
            case 0x1760A8u: goto label_1760a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175FC8u;
label_175fc8:
    // 0x175fc8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x175fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x175fcc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x175fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x175fd0: 0x24a5d610  addiu       $a1, $a1, -0x29F0
    ctx->pc = 0x175fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956560));
    // 0x175fd4: 0xc067d44  jal         func_19F510
    ctx->pc = 0x175FD4u;
    SET_GPR_U32(ctx, 31, 0x175FDCu);
    ctx->pc = 0x175FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FD4u;
            // 0x175fd8: 0x34440004  ori         $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (runtime->hasFunction(0x19F510u)) {
        auto targetFn = runtime->lookupFunction(0x19F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FDCu; }
        if (ctx->pc != 0x175FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F510_0x19f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FDCu; }
        if (ctx->pc != 0x175FDCu) { return; }
    }
    ctx->pc = 0x175FDCu;
label_175fdc:
    // 0x175fdc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x175FDCu;
    {
        const bool branch_taken_0x175fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175fdc) {
            ctx->pc = 0x1760BCu;
            goto label_1760bc;
        }
    }
    ctx->pc = 0x175FE4u;
label_175fe4:
    // 0x175fe4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x175fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x175fe8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x175fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x175fec: 0x24a5d620  addiu       $a1, $a1, -0x29E0
    ctx->pc = 0x175fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956576));
    // 0x175ff0: 0xc067d44  jal         func_19F510
    ctx->pc = 0x175FF0u;
    SET_GPR_U32(ctx, 31, 0x175FF8u);
    ctx->pc = 0x175FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175FF0u;
            // 0x175ff4: 0x34440004  ori         $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (runtime->hasFunction(0x19F510u)) {
        auto targetFn = runtime->lookupFunction(0x19F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FF8u; }
        if (ctx->pc != 0x175FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F510_0x19f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175FF8u; }
        if (ctx->pc != 0x175FF8u) { return; }
    }
    ctx->pc = 0x175FF8u;
label_175ff8:
    // 0x175ff8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x175FF8u;
    {
        const bool branch_taken_0x175ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175ff8) {
            ctx->pc = 0x1760BCu;
            goto label_1760bc;
        }
    }
    ctx->pc = 0x176000u;
label_176000:
    // 0x176000: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x176000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x176004: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x176004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x176008: 0x24a5d630  addiu       $a1, $a1, -0x29D0
    ctx->pc = 0x176008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956592));
    // 0x17600c: 0xc067d44  jal         func_19F510
    ctx->pc = 0x17600Cu;
    SET_GPR_U32(ctx, 31, 0x176014u);
    ctx->pc = 0x176010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17600Cu;
            // 0x176010: 0x34440004  ori         $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (runtime->hasFunction(0x19F510u)) {
        auto targetFn = runtime->lookupFunction(0x19F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176014u; }
        if (ctx->pc != 0x176014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F510_0x19f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176014u; }
        if (ctx->pc != 0x176014u) { return; }
    }
    ctx->pc = 0x176014u;
label_176014:
    // 0x176014: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x176014u;
    {
        const bool branch_taken_0x176014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176014) {
            ctx->pc = 0x1760BCu;
            goto label_1760bc;
        }
    }
    ctx->pc = 0x17601Cu;
label_17601c:
    // 0x17601c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x17601cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x176020: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x176020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x176024: 0x24a5d640  addiu       $a1, $a1, -0x29C0
    ctx->pc = 0x176024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956608));
    // 0x176028: 0xc067d44  jal         func_19F510
    ctx->pc = 0x176028u;
    SET_GPR_U32(ctx, 31, 0x176030u);
    ctx->pc = 0x17602Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176028u;
            // 0x17602c: 0x34440004  ori         $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (runtime->hasFunction(0x19F510u)) {
        auto targetFn = runtime->lookupFunction(0x19F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176030u; }
        if (ctx->pc != 0x176030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F510_0x19f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176030u; }
        if (ctx->pc != 0x176030u) { return; }
    }
    ctx->pc = 0x176030u;
label_176030:
    // 0x176030: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x176030u;
    {
        const bool branch_taken_0x176030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176030) {
            ctx->pc = 0x1760BCu;
            goto label_1760bc;
        }
    }
    ctx->pc = 0x176038u;
label_176038:
    // 0x176038: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x176038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x17603c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x17603cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x176040: 0x24a5d650  addiu       $a1, $a1, -0x29B0
    ctx->pc = 0x176040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956624));
    // 0x176044: 0xc067d44  jal         func_19F510
    ctx->pc = 0x176044u;
    SET_GPR_U32(ctx, 31, 0x17604Cu);
    ctx->pc = 0x176048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176044u;
            // 0x176048: 0x34440004  ori         $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (runtime->hasFunction(0x19F510u)) {
        auto targetFn = runtime->lookupFunction(0x19F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17604Cu; }
        if (ctx->pc != 0x17604Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F510_0x19f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17604Cu; }
        if (ctx->pc != 0x17604Cu) { return; }
    }
    ctx->pc = 0x17604Cu;
label_17604c:
    // 0x17604c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17604Cu;
    {
        const bool branch_taken_0x17604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17604c) {
            ctx->pc = 0x1760BCu;
            goto label_1760bc;
        }
    }
    ctx->pc = 0x176054u;
label_176054:
    // 0x176054: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x176054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x176058: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x176058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x17605c: 0x24a5d660  addiu       $a1, $a1, -0x29A0
    ctx->pc = 0x17605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956640));
    // 0x176060: 0xc067d44  jal         func_19F510
    ctx->pc = 0x176060u;
    SET_GPR_U32(ctx, 31, 0x176068u);
    ctx->pc = 0x176064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176060u;
            // 0x176064: 0x34440004  ori         $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (runtime->hasFunction(0x19F510u)) {
        auto targetFn = runtime->lookupFunction(0x19F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176068u; }
        if (ctx->pc != 0x176068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F510_0x19f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176068u; }
        if (ctx->pc != 0x176068u) { return; }
    }
    ctx->pc = 0x176068u;
label_176068:
    // 0x176068: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x176068u;
    {
        const bool branch_taken_0x176068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176068) {
            ctx->pc = 0x1760BCu;
            goto label_1760bc;
        }
    }
    ctx->pc = 0x176070u;
label_176070:
    // 0x176070: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x176070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x176074: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x176074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x176078: 0x24a5d670  addiu       $a1, $a1, -0x2990
    ctx->pc = 0x176078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956656));
    // 0x17607c: 0xc067d44  jal         func_19F510
    ctx->pc = 0x17607Cu;
    SET_GPR_U32(ctx, 31, 0x176084u);
    ctx->pc = 0x176080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17607Cu;
            // 0x176080: 0x34440004  ori         $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (runtime->hasFunction(0x19F510u)) {
        auto targetFn = runtime->lookupFunction(0x19F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176084u; }
        if (ctx->pc != 0x176084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F510_0x19f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176084u; }
        if (ctx->pc != 0x176084u) { return; }
    }
    ctx->pc = 0x176084u;
label_176084:
    // 0x176084: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x176084u;
    {
        const bool branch_taken_0x176084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176084) {
            ctx->pc = 0x1760BCu;
            goto label_1760bc;
        }
    }
    ctx->pc = 0x17608Cu;
label_17608c:
    // 0x17608c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x17608cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x176090: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x176090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x176094: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x176094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x176098: 0xc067d44  jal         func_19F510
    ctx->pc = 0x176098u;
    SET_GPR_U32(ctx, 31, 0x1760A0u);
    ctx->pc = 0x17609Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176098u;
            // 0x17609c: 0x34440004  ori         $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (runtime->hasFunction(0x19F510u)) {
        auto targetFn = runtime->lookupFunction(0x19F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760A0u; }
        if (ctx->pc != 0x1760A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F510_0x19f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760A0u; }
        if (ctx->pc != 0x1760A0u) { return; }
    }
    ctx->pc = 0x1760A0u;
label_1760a0:
    // 0x1760a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1760A0u;
    {
        const bool branch_taken_0x1760a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1760a0) {
            ctx->pc = 0x1760BCu;
            goto label_1760bc;
        }
    }
    ctx->pc = 0x1760A8u;
label_1760a8:
    // 0x1760a8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1760a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1760ac: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1760acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1760b0: 0x24a5d690  addiu       $a1, $a1, -0x2970
    ctx->pc = 0x1760b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956688));
    // 0x1760b4: 0xc067d44  jal         func_19F510
    ctx->pc = 0x1760B4u;
    SET_GPR_U32(ctx, 31, 0x1760BCu);
    ctx->pc = 0x1760B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1760B4u;
            // 0x1760b8: 0x34440004  ori         $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F510u;
    if (runtime->hasFunction(0x19F510u)) {
        auto targetFn = runtime->lookupFunction(0x19F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760BCu; }
        if (ctx->pc != 0x1760BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F510_0x19f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760BCu; }
        if (ctx->pc != 0x1760BCu) { return; }
    }
    ctx->pc = 0x1760BCu;
label_1760bc:
    // 0x1760bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1760bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1760c0:
    // 0x1760c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1760C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1760C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1760C0u;
            // 0x1760c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1760C8u;
    // 0x1760c8: 0x0  nop
    ctx->pc = 0x1760c8u;
    // NOP
    // 0x1760cc: 0x0  nop
    ctx->pc = 0x1760ccu;
    // NOP
label_1760d0:
    // 0x1760d0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1760d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1760d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1760d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760d8: 0x24a59e60  addiu       $a1, $a1, -0x61A0
    ctx->pc = 0x1760d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942304));
label_1760dc:
    // 0x1760dc: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x1760dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1760e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1760e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760e4: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x1760e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1760e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1760e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760ec: 0xa4a00004  sh          $zero, 0x4($a1)
    ctx->pc = 0x1760ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
label_1760f0:
    // 0x1760f0: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x1760f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1760f4: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x1760f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1760f8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1760f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1760fc: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x1760fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x176100: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x176100u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x176104: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x176104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x176108: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x176108u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x17610c: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x17610cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x176110: 0xa4800016  sh          $zero, 0x16($a0)
    ctx->pc = 0x176110u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x176114: 0xa080001a  sb          $zero, 0x1A($a0)
    ctx->pc = 0x176114u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x176118: 0xa080001b  sb          $zero, 0x1B($a0)
    ctx->pc = 0x176118u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x17611c: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x17611cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x176120: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x176120u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x176124: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x176124u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x176128: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x176128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x17612c: 0xa0800029  sb          $zero, 0x29($a0)
    ctx->pc = 0x17612cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x176130: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x176130u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x176134: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x176134u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x176138: 0xa4800032  sh          $zero, 0x32($a0)
    ctx->pc = 0x176138u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x17613c: 0xa0800036  sb          $zero, 0x36($a0)
    ctx->pc = 0x17613cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x176140: 0xa0800037  sb          $zero, 0x37($a0)
    ctx->pc = 0x176140u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x176144: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x176144u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x176148: 0xa480003e  sh          $zero, 0x3E($a0)
    ctx->pc = 0x176148u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x17614c: 0xa4800040  sh          $zero, 0x40($a0)
    ctx->pc = 0x17614cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x176150: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x176150u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x176154: 0xa0800045  sb          $zero, 0x45($a0)
    ctx->pc = 0x176154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x176158: 0xa4800042  sh          $zero, 0x42($a0)
    ctx->pc = 0x176158u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x17615c: 0xa480004c  sh          $zero, 0x4C($a0)
    ctx->pc = 0x17615cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x176160: 0xa480004e  sh          $zero, 0x4E($a0)
    ctx->pc = 0x176160u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 78), (uint16_t)GPR_U32(ctx, 0));
    // 0x176164: 0xa0800052  sb          $zero, 0x52($a0)
    ctx->pc = 0x176164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x176168: 0xa0800053  sb          $zero, 0x53($a0)
    ctx->pc = 0x176168u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x17616c: 0xa4800050  sh          $zero, 0x50($a0)
    ctx->pc = 0x17616cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x176170: 0xa480005a  sh          $zero, 0x5A($a0)
    ctx->pc = 0x176170u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x176174: 0xa480005c  sh          $zero, 0x5C($a0)
    ctx->pc = 0x176174u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x176178: 0xa0800060  sb          $zero, 0x60($a0)
    ctx->pc = 0x176178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x17617c: 0xa0800061  sb          $zero, 0x61($a0)
    ctx->pc = 0x17617cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x176180: 0xa480005e  sh          $zero, 0x5E($a0)
    ctx->pc = 0x176180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x176184: 0xa4800068  sh          $zero, 0x68($a0)
    ctx->pc = 0x176184u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x176188: 0xa480006a  sh          $zero, 0x6A($a0)
    ctx->pc = 0x176188u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x17618c: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x17618cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x176190: 0xa080006f  sb          $zero, 0x6F($a0)
    ctx->pc = 0x176190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x176194: 0xa480006c  sh          $zero, 0x6C($a0)
    ctx->pc = 0x176194u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x176198: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x176198u;
    {
        const bool branch_taken_0x176198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17619Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176198u;
            // 0x17619c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176198) {
            ctx->pc = 0x1760F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1760f0;
        }
    }
    ctx->pc = 0x1761A0u;
    // 0x1761a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1761a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1761a4: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x1761a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1761a8: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1761A8u;
    {
        const bool branch_taken_0x1761a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1761ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1761A8u;
            // 0x1761ac: 0x24a500e6  addiu       $a1, $a1, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761a8) {
            ctx->pc = 0x1760DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1760dc;
        }
    }
    ctx->pc = 0x1761B0u;
    // 0x1761b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1761B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1761B8u;
    // 0x1761b8: 0x0  nop
    ctx->pc = 0x1761b8u;
    // NOP
    // 0x1761bc: 0x0  nop
    ctx->pc = 0x1761bcu;
    // NOP
    ctx->pc = 0x1761c0u;
}
