#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00320EF0
// Address: 0x320ef0 - 0x3211f0
void sub_00320EF0_0x320ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320EF0_0x320ef0");
#endif

    switch (ctx->pc) {
        case 0x320f38u: goto label_320f38;
        case 0x320f40u: goto label_320f40;
        case 0x320f50u: goto label_320f50;
        case 0x320f68u: goto label_320f68;
        case 0x320f78u: goto label_320f78;
        case 0x320f98u: goto label_320f98;
        case 0x320fb4u: goto label_320fb4;
        case 0x320fc8u: goto label_320fc8;
        case 0x321000u: goto label_321000;
        case 0x321034u: goto label_321034;
        case 0x321068u: goto label_321068;
        case 0x32109cu: goto label_32109c;
        case 0x3210d0u: goto label_3210d0;
        case 0x321104u: goto label_321104;
        case 0x321130u: goto label_321130;
        case 0x32113cu: goto label_32113c;
        case 0x321158u: goto label_321158;
        case 0x321164u: goto label_321164;
        case 0x32117cu: goto label_32117c;
        case 0x3211a4u: goto label_3211a4;
        case 0x3211b8u: goto label_3211b8;
        default: break;
    }

    ctx->pc = 0x320ef0u;

    // 0x320ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x320ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x320ef4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x320ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x320ef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x320efc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320f00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x320f04: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x320f04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x320f08: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x320f08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x320f0c: 0x102000b1  beqz        $at, . + 4 + (0xB1 << 2)
    ctx->pc = 0x320F0Cu;
    {
        const bool branch_taken_0x320f0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x320F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320F0Cu;
            // 0x320f10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f0c) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x320F14u;
    // 0x320f14: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x320f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x320f18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x320f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x320f1c: 0x24633e70  addiu       $v1, $v1, 0x3E70
    ctx->pc = 0x320f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15984));
    // 0x320f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320f24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x320f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320f28: 0x400008  jr          $v0
    ctx->pc = 0x320F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x320F30u: goto label_320f30;
            case 0x320F70u: goto label_320f70;
            case 0x320F8Cu: goto label_320f8c;
            case 0x320FACu: goto label_320fac;
            case 0x320FECu: goto label_320fec;
            case 0x321020u: goto label_321020;
            case 0x321054u: goto label_321054;
            case 0x321088u: goto label_321088;
            case 0x3210BCu: goto label_3210bc;
            case 0x3210F0u: goto label_3210f0;
            case 0x321124u: goto label_321124;
            case 0x3211B0u: goto label_3211b0;
            case 0x3211CCu: goto label_3211cc;
            case 0x3211D4u: goto label_3211d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x320F30u;
label_320f30:
    // 0x320f30: 0xc067ce0  jal         func_19F380
    ctx->pc = 0x320F30u;
    SET_GPR_U32(ctx, 31, 0x320F38u);
    ctx->pc = 0x320F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F30u;
            // 0x320f34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F380u;
    if (runtime->hasFunction(0x19F380u)) {
        auto targetFn = runtime->lookupFunction(0x19F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F38u; }
        if (ctx->pc != 0x320F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F380_0x19f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F38u; }
        if (ctx->pc != 0x320F38u) { return; }
    }
    ctx->pc = 0x320F38u;
label_320f38:
    // 0x320f38: 0xc0c8524  jal         func_321490
    ctx->pc = 0x320F38u;
    SET_GPR_U32(ctx, 31, 0x320F40u);
    ctx->pc = 0x320F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F38u;
            // 0x320f3c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321490u;
    if (runtime->hasFunction(0x321490u)) {
        auto targetFn = runtime->lookupFunction(0x321490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F40u; }
        if (ctx->pc != 0x320F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321490_0x321490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F40u; }
        if (ctx->pc != 0x320F40u) { return; }
    }
    ctx->pc = 0x320F40u;
label_320f40:
    // 0x320f40: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x320F40u;
    {
        const bool branch_taken_0x320f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320f40) {
            ctx->pc = 0x320F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x320F40u;
            // 0x320f44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x320F60u;
            goto label_320f60;
        }
    }
    ctx->pc = 0x320F48u;
    // 0x320f48: 0xc052c04  jal         func_14B010
    ctx->pc = 0x320F48u;
    SET_GPR_U32(ctx, 31, 0x320F50u);
    ctx->pc = 0x14B010u;
    if (runtime->hasFunction(0x14B010u)) {
        auto targetFn = runtime->lookupFunction(0x14B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F50u; }
        if (ctx->pc != 0x320F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B010_0x14b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F50u; }
        if (ctx->pc != 0x320F50u) { return; }
    }
    ctx->pc = 0x320F50u;
label_320f50:
    // 0x320f50: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x320f50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x320f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x320f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x320f58: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x320f58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x320f5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x320f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320f60:
    // 0x320f60: 0xc067ce0  jal         func_19F380
    ctx->pc = 0x320F60u;
    SET_GPR_U32(ctx, 31, 0x320F68u);
    ctx->pc = 0x19F380u;
    if (runtime->hasFunction(0x19F380u)) {
        auto targetFn = runtime->lookupFunction(0x19F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F68u; }
        if (ctx->pc != 0x320F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F380_0x19f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F68u; }
        if (ctx->pc != 0x320F68u) { return; }
    }
    ctx->pc = 0x320F68u;
label_320f68:
    // 0x320f68: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x320F68u;
    {
        const bool branch_taken_0x320f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320F68u;
            // 0x320f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f68) {
            ctx->pc = 0x3211D8u;
            goto label_3211d8;
        }
    }
    ctx->pc = 0x320F70u;
label_320f70:
    // 0x320f70: 0xc052f54  jal         func_14BD50
    ctx->pc = 0x320F70u;
    SET_GPR_U32(ctx, 31, 0x320F78u);
    ctx->pc = 0x320F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F70u;
            // 0x320f74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14BD50u;
    if (runtime->hasFunction(0x14BD50u)) {
        auto targetFn = runtime->lookupFunction(0x14BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F78u; }
        if (ctx->pc != 0x320F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014BD50_0x14bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F78u; }
        if (ctx->pc != 0x320F78u) { return; }
    }
    ctx->pc = 0x320F78u;
label_320f78:
    // 0x320f78: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x320F78u;
    {
        const bool branch_taken_0x320f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320f78) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x320F80u;
    // 0x320f80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x320f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x320f84: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x320F84u;
    {
        const bool branch_taken_0x320f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320F84u;
            // 0x320f88: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f84) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x320F8Cu;
label_320f8c:
    // 0x320f8c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x320f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x320f90: 0xc052ea0  jal         func_14BA80
    ctx->pc = 0x320F90u;
    SET_GPR_U32(ctx, 31, 0x320F98u);
    ctx->pc = 0x320F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320F90u;
            // 0x320f94: 0x8044f340  lb          $a0, -0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14BA80u;
    if (runtime->hasFunction(0x14BA80u)) {
        auto targetFn = runtime->lookupFunction(0x14BA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F98u; }
        if (ctx->pc != 0x320F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014BA80_0x14ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320F98u; }
        if (ctx->pc != 0x320F98u) { return; }
    }
    ctx->pc = 0x320F98u;
label_320f98:
    // 0x320f98: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x320F98u;
    {
        const bool branch_taken_0x320f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320f98) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x320FA0u;
    // 0x320fa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x320fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x320fa4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x320FA4u;
    {
        const bool branch_taken_0x320fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320FA4u;
            // 0x320fa8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320fa4) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x320FACu;
label_320fac:
    // 0x320fac: 0xc063a04  jal         func_18E810
    ctx->pc = 0x320FACu;
    SET_GPR_U32(ctx, 31, 0x320FB4u);
    ctx->pc = 0x320FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320FACu;
            // 0x320fb0: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E810u;
    if (runtime->hasFunction(0x18E810u)) {
        auto targetFn = runtime->lookupFunction(0x18E810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FB4u; }
        if (ctx->pc != 0x320FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E810_0x18e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FB4u; }
        if (ctx->pc != 0x320FB4u) { return; }
    }
    ctx->pc = 0x320FB4u;
label_320fb4:
    // 0x320fb4: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x320FB4u;
    {
        const bool branch_taken_0x320fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320fb4) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x320FBCu;
    // 0x320fbc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x320fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x320fc0: 0xc069430  jal         func_1A50C0
    ctx->pc = 0x320FC0u;
    SET_GPR_U32(ctx, 31, 0x320FC8u);
    ctx->pc = 0x320FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320FC0u;
            // 0x320fc4: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A50C0u;
    if (runtime->hasFunction(0x1A50C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A50C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FC8u; }
        if (ctx->pc != 0x320FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A50C0_0x1a50c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320FC8u; }
        if (ctx->pc != 0x320FC8u) { return; }
    }
    ctx->pc = 0x320FC8u;
label_320fc8:
    // 0x320fc8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x320fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x320fcc: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320fd0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320fd4: 0xa04003d8  sb          $zero, 0x3D8($v0)
    ctx->pc = 0x320fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 0));
    // 0x320fd8: 0xac640390  sw          $a0, 0x390($v1)
    ctx->pc = 0x320fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 912), GPR_U32(ctx, 4));
    // 0x320fdc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x320fdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x320fe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x320fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x320fe4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x320FE4u;
    {
        const bool branch_taken_0x320fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320FE4u;
            // 0x320fe8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320fe4) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x320FECu;
label_320fec:
    // 0x320fec: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320ff0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320ff4: 0x8c4403c0  lw          $a0, 0x3C0($v0)
    ctx->pc = 0x320ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
    // 0x320ff8: 0xc0c84a8  jal         func_3212A0
    ctx->pc = 0x320FF8u;
    SET_GPR_U32(ctx, 31, 0x321000u);
    ctx->pc = 0x320FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320FF8u;
            // 0x320ffc: 0x906503a0  lbu         $a1, 0x3A0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 928)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3212A0u;
    if (runtime->hasFunction(0x3212A0u)) {
        auto targetFn = runtime->lookupFunction(0x3212A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321000u; }
        if (ctx->pc != 0x321000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003212A0_0x3212a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321000u; }
        if (ctx->pc != 0x321000u) { return; }
    }
    ctx->pc = 0x321000u;
label_321000:
    // 0x321000: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x321000u;
    {
        const bool branch_taken_0x321000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321000) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x321008u;
    // 0x321008: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x32100c: 0xa04003d8  sb          $zero, 0x3D8($v0)
    ctx->pc = 0x32100cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 0));
    // 0x321010: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x321010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x321018: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x321018u;
    {
        const bool branch_taken_0x321018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32101Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321018u;
            // 0x32101c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321018) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x321020u;
label_321020:
    // 0x321020: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x321024: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321028: 0x8c4403c4  lw          $a0, 0x3C4($v0)
    ctx->pc = 0x321028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
    // 0x32102c: 0xc0c84a8  jal         func_3212A0
    ctx->pc = 0x32102Cu;
    SET_GPR_U32(ctx, 31, 0x321034u);
    ctx->pc = 0x321030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32102Cu;
            // 0x321030: 0x906503a4  lbu         $a1, 0x3A4($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 932)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3212A0u;
    if (runtime->hasFunction(0x3212A0u)) {
        auto targetFn = runtime->lookupFunction(0x3212A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321034u; }
        if (ctx->pc != 0x321034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003212A0_0x3212a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321034u; }
        if (ctx->pc != 0x321034u) { return; }
    }
    ctx->pc = 0x321034u;
label_321034:
    // 0x321034: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x321034u;
    {
        const bool branch_taken_0x321034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321034) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x32103Cu;
    // 0x32103c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x32103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321040: 0xa04003d8  sb          $zero, 0x3D8($v0)
    ctx->pc = 0x321040u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 0));
    // 0x321044: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x321044u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321048: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32104c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x32104Cu;
    {
        const bool branch_taken_0x32104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32104Cu;
            // 0x321050: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32104c) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x321054u;
label_321054:
    // 0x321054: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x321058: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x32105c: 0x8c4403c8  lw          $a0, 0x3C8($v0)
    ctx->pc = 0x32105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 968)));
    // 0x321060: 0xc0c84a8  jal         func_3212A0
    ctx->pc = 0x321060u;
    SET_GPR_U32(ctx, 31, 0x321068u);
    ctx->pc = 0x321064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321060u;
            // 0x321064: 0x906503a8  lbu         $a1, 0x3A8($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 936)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3212A0u;
    if (runtime->hasFunction(0x3212A0u)) {
        auto targetFn = runtime->lookupFunction(0x3212A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321068u; }
        if (ctx->pc != 0x321068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003212A0_0x3212a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321068u; }
        if (ctx->pc != 0x321068u) { return; }
    }
    ctx->pc = 0x321068u;
label_321068:
    // 0x321068: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x321068u;
    {
        const bool branch_taken_0x321068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321068) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x321070u;
    // 0x321070: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321074: 0xa04003d8  sb          $zero, 0x3D8($v0)
    ctx->pc = 0x321074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 0));
    // 0x321078: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x321078u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32107c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x321080: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x321080u;
    {
        const bool branch_taken_0x321080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321080u;
            // 0x321084: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321080) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x321088u;
label_321088:
    // 0x321088: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x32108c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x32108cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321090: 0x8c4403cc  lw          $a0, 0x3CC($v0)
    ctx->pc = 0x321090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 972)));
    // 0x321094: 0xc0c84a8  jal         func_3212A0
    ctx->pc = 0x321094u;
    SET_GPR_U32(ctx, 31, 0x32109Cu);
    ctx->pc = 0x321098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321094u;
            // 0x321098: 0x906503ac  lbu         $a1, 0x3AC($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 940)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3212A0u;
    if (runtime->hasFunction(0x3212A0u)) {
        auto targetFn = runtime->lookupFunction(0x3212A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32109Cu; }
        if (ctx->pc != 0x32109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003212A0_0x3212a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32109Cu; }
        if (ctx->pc != 0x32109Cu) { return; }
    }
    ctx->pc = 0x32109Cu;
label_32109c:
    // 0x32109c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x32109Cu;
    {
        const bool branch_taken_0x32109c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32109c) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x3210A4u;
    // 0x3210a4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3210a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3210a8: 0xa04003d8  sb          $zero, 0x3D8($v0)
    ctx->pc = 0x3210a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 0));
    // 0x3210ac: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3210acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3210b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3210b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3210b4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x3210B4u;
    {
        const bool branch_taken_0x3210b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3210B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3210B4u;
            // 0x3210b8: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210b4) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x3210BCu;
label_3210bc:
    // 0x3210bc: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3210bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3210c0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3210c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3210c4: 0x8c4403d0  lw          $a0, 0x3D0($v0)
    ctx->pc = 0x3210c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 976)));
    // 0x3210c8: 0xc0c84a8  jal         func_3212A0
    ctx->pc = 0x3210C8u;
    SET_GPR_U32(ctx, 31, 0x3210D0u);
    ctx->pc = 0x3210CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210C8u;
            // 0x3210cc: 0x906503b0  lbu         $a1, 0x3B0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3212A0u;
    if (runtime->hasFunction(0x3212A0u)) {
        auto targetFn = runtime->lookupFunction(0x3212A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210D0u; }
        if (ctx->pc != 0x3210D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003212A0_0x3212a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3210D0u; }
        if (ctx->pc != 0x3210D0u) { return; }
    }
    ctx->pc = 0x3210D0u;
label_3210d0:
    // 0x3210d0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3210D0u;
    {
        const bool branch_taken_0x3210d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3210d0) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x3210D8u;
    // 0x3210d8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3210d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3210dc: 0xa04003d8  sb          $zero, 0x3D8($v0)
    ctx->pc = 0x3210dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 0));
    // 0x3210e0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3210e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3210e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3210e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3210e8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3210E8u;
    {
        const bool branch_taken_0x3210e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3210ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3210E8u;
            // 0x3210ec: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210e8) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x3210F0u;
label_3210f0:
    // 0x3210f0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3210f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3210f4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3210f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3210f8: 0x8c4403d4  lw          $a0, 0x3D4($v0)
    ctx->pc = 0x3210f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 980)));
    // 0x3210fc: 0xc0c84a8  jal         func_3212A0
    ctx->pc = 0x3210FCu;
    SET_GPR_U32(ctx, 31, 0x321104u);
    ctx->pc = 0x321100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3210FCu;
            // 0x321100: 0x906503b4  lbu         $a1, 0x3B4($v1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 948)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3212A0u;
    if (runtime->hasFunction(0x3212A0u)) {
        auto targetFn = runtime->lookupFunction(0x3212A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321104u; }
        if (ctx->pc != 0x321104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003212A0_0x3212a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321104u; }
        if (ctx->pc != 0x321104u) { return; }
    }
    ctx->pc = 0x321104u;
label_321104:
    // 0x321104: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x321104u;
    {
        const bool branch_taken_0x321104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321104) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x32110Cu;
    // 0x32110c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x32110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321110: 0xa04003d8  sb          $zero, 0x3D8($v0)
    ctx->pc = 0x321110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 0));
    // 0x321114: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x321114u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32111c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x32111Cu;
    {
        const bool branch_taken_0x32111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32111Cu;
            // 0x321120: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32111c) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x321124u;
label_321124:
    // 0x321124: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x321124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x321128: 0xc069430  jal         func_1A50C0
    ctx->pc = 0x321128u;
    SET_GPR_U32(ctx, 31, 0x321130u);
    ctx->pc = 0x32112Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321128u;
            // 0x32112c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A50C0u;
    if (runtime->hasFunction(0x1A50C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A50C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321130u; }
        if (ctx->pc != 0x321130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A50C0_0x1a50c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321130u; }
        if (ctx->pc != 0x321130u) { return; }
    }
    ctx->pc = 0x321130u;
label_321130:
    // 0x321130: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x321130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x321134: 0xc0636a4  jal         func_18DA90
    ctx->pc = 0x321134u;
    SET_GPR_U32(ctx, 31, 0x32113Cu);
    ctx->pc = 0x321138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321134u;
            // 0x321138: 0x9044dc9d  lbu         $a0, -0x2363($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958237)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA90u;
    if (runtime->hasFunction(0x18DA90u)) {
        auto targetFn = runtime->lookupFunction(0x18DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32113Cu; }
        if (ctx->pc != 0x32113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA90_0x18da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32113Cu; }
        if (ctx->pc != 0x32113Cu) { return; }
    }
    ctx->pc = 0x32113Cu;
label_32113c:
    // 0x32113c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x32113cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x321140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321144: 0x24849dd0  addiu       $a0, $a0, -0x6230
    ctx->pc = 0x321144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942160));
    // 0x321148: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x321148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x32114c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x32114cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x321150: 0xc067cd4  jal         func_19F350
    ctx->pc = 0x321150u;
    SET_GPR_U32(ctx, 31, 0x321158u);
    ctx->pc = 0x321154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321150u;
            // 0x321154: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F350u;
    if (runtime->hasFunction(0x19F350u)) {
        auto targetFn = runtime->lookupFunction(0x19F350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321158u; }
        if (ctx->pc != 0x321158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F350_0x19f350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x321158u; }
        if (ctx->pc != 0x321158u) { return; }
    }
    ctx->pc = 0x321158u;
label_321158:
    // 0x321158: 0x3c11009b  lui         $s1, 0x9B
    ctx->pc = 0x321158u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)155 << 16));
    // 0x32115c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32115cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321160: 0x26316dd0  addiu       $s1, $s1, 0x6DD0
    ctx->pc = 0x321160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28112));
label_321164:
    // 0x321164: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x321164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x321168: 0x26460100  addiu       $a2, $s2, 0x100
    ctx->pc = 0x321168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x32116c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32116cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321170: 0x24a59dd0  addiu       $a1, $a1, -0x6230
    ctx->pc = 0x321170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942160));
    // 0x321174: 0xc067cd8  jal         func_19F360
    ctx->pc = 0x321174u;
    SET_GPR_U32(ctx, 31, 0x32117Cu);
    ctx->pc = 0x321178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x321174u;
            // 0x321178: 0x3c070880  lui         $a3, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2176 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F360u;
    if (runtime->hasFunction(0x19F360u)) {
        auto targetFn = runtime->lookupFunction(0x19F360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32117Cu; }
        if (ctx->pc != 0x32117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F360_0x19f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32117Cu; }
        if (ctx->pc != 0x32117Cu) { return; }
    }
    ctx->pc = 0x32117Cu;
label_32117c:
    // 0x32117c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32117cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x321180: 0x2a420400  slti        $v0, $s2, 0x400
    ctx->pc = 0x321180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x321184: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x321184u;
    {
        const bool branch_taken_0x321184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x321184u;
            // 0x321188: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321184) {
            ctx->pc = 0x321164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_321164;
        }
    }
    ctx->pc = 0x32118Cu;
    // 0x32118c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x32118cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x321190: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x321190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x321194: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x321194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x321198: 0x248436e8  addiu       $a0, $a0, 0x36E8
    ctx->pc = 0x321198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14056));
    // 0x32119c: 0xc067dd8  jal         func_19F760
    ctx->pc = 0x32119Cu;
    SET_GPR_U32(ctx, 31, 0x3211A4u);
    ctx->pc = 0x3211A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32119Cu;
            // 0x3211a0: 0xac4336ec  sw          $v1, 0x36EC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 14060), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F760u;
    if (runtime->hasFunction(0x19F760u)) {
        auto targetFn = runtime->lookupFunction(0x19F760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211A4u; }
        if (ctx->pc != 0x3211A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F760_0x19f760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211A4u; }
        if (ctx->pc != 0x3211A4u) { return; }
    }
    ctx->pc = 0x3211A4u;
label_3211a4:
    // 0x3211a4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3211a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3211a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3211A8u;
    {
        const bool branch_taken_0x3211a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3211ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3211A8u;
            // 0x3211ac: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3211a8) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x3211B0u;
label_3211b0:
    // 0x3211b0: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x3211B0u;
    SET_GPR_U32(ctx, 31, 0x3211B8u);
    ctx->pc = 0x3036A0u;
    if (runtime->hasFunction(0x3036A0u)) {
        auto targetFn = runtime->lookupFunction(0x3036A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211B8u; }
        if (ctx->pc != 0x3211B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003036A0_0x3036a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3211B8u; }
        if (ctx->pc != 0x3211B8u) { return; }
    }
    ctx->pc = 0x3211B8u;
label_3211b8:
    // 0x3211b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3211B8u;
    {
        const bool branch_taken_0x3211b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3211b8) {
            ctx->pc = 0x3211D4u;
            goto label_3211d4;
        }
    }
    ctx->pc = 0x3211C0u;
    // 0x3211c0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3211c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3211c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3211c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3211c8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3211c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_3211cc:
    // 0x3211cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3211CCu;
    {
        const bool branch_taken_0x3211cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3211D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3211CCu;
            // 0x3211d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3211cc) {
            ctx->pc = 0x3211D8u;
            goto label_3211d8;
        }
    }
    ctx->pc = 0x3211D4u;
label_3211d4:
    // 0x3211d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3211d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3211d8:
    // 0x3211d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3211d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3211dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3211dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3211e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3211e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3211e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3211e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3211e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3211E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3211ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3211E8u;
            // 0x3211ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3211F0u;
    ctx->pc = 0x3211f0u;
}
