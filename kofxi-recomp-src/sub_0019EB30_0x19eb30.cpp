#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EB30
// Address: 0x19eb30 - 0x19ec00
void sub_0019EB30_0x19eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EB30_0x19eb30");
#endif

    switch (ctx->pc) {
        case 0x19ebacu: goto label_19ebac;
        case 0x19ebb4u: goto label_19ebb4;
        case 0x19ebd0u: goto label_19ebd0;
        default: break;
    }

    ctx->pc = 0x19eb30u;

    // 0x19eb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19eb34: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19eb38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19eb3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eb40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19eb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19eb44: 0x2463db5a  addiu       $v1, $v1, -0x24A6
    ctx->pc = 0x19eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957914));
    // 0x19eb48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19eb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19eb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19eb50: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x19eb50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x19eb54: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x19eb54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19eb58: 0xc28004  sllv        $s0, $v0, $a2
    ctx->pc = 0x19eb58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x19eb5c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x19eb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19eb60: 0x2001027  not         $v0, $s0
    ctx->pc = 0x19eb60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x19eb64: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x19eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19eb68: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x19eb68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19eb6c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x19eb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19eb70: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19eb74: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x19eb74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19eb78: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x19eb78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19eb7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19eb80: 0x9045db10  lbu         $a1, -0x24F0($v0)
    ctx->pc = 0x19eb80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x19eb84: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19eb84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19eb88: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19eb8c: 0xa73824  and         $a3, $a1, $a3
    ctx->pc = 0x19eb8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x19eb90: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19eb94: 0x9045db00  lbu         $a1, -0x2500($v0)
    ctx->pc = 0x19eb94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957824)));
    // 0x19eb98: 0xa067db10  sb          $a3, -0x24F0($v1)
    ctx->pc = 0x19eb98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957840), (uint8_t)GPR_U32(ctx, 7));
    // 0x19eb9c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19eba0: 0xa61825  or          $v1, $a1, $a2
    ctx->pc = 0x19eba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x19eba4: 0xc067b68  jal         func_19EDA0
    ctx->pc = 0x19EBA4u;
    SET_GPR_U32(ctx, 31, 0x19EBACu);
    ctx->pc = 0x19EBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBA4u;
            // 0x19eba8: 0xa043db00  sb          $v1, -0x2500($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957824), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EDA0u;
    if (runtime->hasFunction(0x19EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x19EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBACu; }
        if (ctx->pc != 0x19EBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EDA0_0x19eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBACu; }
        if (ctx->pc != 0x19EBACu) { return; }
    }
    ctx->pc = 0x19EBACu;
label_19ebac:
    // 0x19ebac: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x19EBACu;
    SET_GPR_U32(ctx, 31, 0x19EBB4u);
    ctx->pc = 0x19EBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBACu;
            // 0x19ebb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (runtime->hasFunction(0x19EE70u)) {
        auto targetFn = runtime->lookupFunction(0x19EE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBB4u; }
        if (ctx->pc != 0x19EBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EE70_0x19ee70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBB4u; }
        if (ctx->pc != 0x19EBB4u) { return; }
    }
    ctx->pc = 0x19EBB4u;
label_19ebb4:
    // 0x19ebb4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ebb8: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x19ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x19ebbc: 0xa440da78  sh          $zero, -0x2588($v0)
    ctx->pc = 0x19ebbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957688), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ebc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ebc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebc4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19ebc8: 0xc0682f8  jal         func_1A0BE0
    ctx->pc = 0x19EBC8u;
    SET_GPR_U32(ctx, 31, 0x19EBD0u);
    ctx->pc = 0x19EBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBC8u;
            // 0x19ebcc: 0xa443da7a  sh          $v1, -0x2586($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957690), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BE0u;
    if (runtime->hasFunction(0x1A0BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBD0u; }
        if (ctx->pc != 0x19EBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0BE0_0x1a0be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBD0u; }
        if (ctx->pc != 0x19EBD0u) { return; }
    }
    ctx->pc = 0x19EBD0u;
label_19ebd0:
    // 0x19ebd0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x19ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19ebd4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ebd8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x19ebd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19ebdc: 0x9064daf0  lbu         $a0, -0x2510($v1)
    ctx->pc = 0x19ebdcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957808)));
    // 0x19ebe0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19ebe4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x19ebe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x19ebe8: 0xa064daf0  sb          $a0, -0x2510($v1)
    ctx->pc = 0x19ebe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957808), (uint8_t)GPR_U32(ctx, 4));
    // 0x19ebec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ebecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ebf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ebf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ebf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ebf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ebf8: 0x3e00008  jr          $ra
    ctx->pc = 0x19EBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EBF8u;
            // 0x19ebfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EC00u;
    ctx->pc = 0x19ec00u;
}
