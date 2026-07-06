#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FE30
// Address: 0x17fe30 - 0x17fed0
void sub_0017FE30_0x17fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FE30_0x17fe30");
#endif

    switch (ctx->pc) {
        case 0x17fe58u: goto label_17fe58;
        case 0x17fe80u: goto label_17fe80;
        case 0x17fe9cu: goto label_17fe9c;
        default: break;
    }

    ctx->pc = 0x17fe30u;

    // 0x17fe30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17fe34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17fe38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17fe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17fe3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fe40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17fe40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17fe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17fe48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17fe48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe4c: 0x948400ea  lhu         $a0, 0xEA($a0)
    ctx->pc = 0x17fe4cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 234)));
    // 0x17fe50: 0xc063600  jal         func_18D800
    ctx->pc = 0x17FE50u;
    SET_GPR_U32(ctx, 31, 0x17FE58u);
    ctx->pc = 0x17FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE50u;
    // 0x17fe54: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D800u, 0x17FE50u, 0x17FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE58u;
label_17fe58:
    // 0x17fe58: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x17fe58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x17fe5c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x17fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x17fe60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fe64: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x17fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17fe68: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x17fe68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fe6c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x17fe6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17fe70: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x17fe70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17fe74: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x17fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x17fe78: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x17FE78u;
    SET_GPR_U32(ctx, 31, 0x17FE80u);
    ctx->pc = 0x17FE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE78u;
    // 0x17fe7c: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADE0u, 0x17FE78u, 0x17FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE80u;
label_17fe80:
    // 0x17fe80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17fe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17fe84: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x17fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x17fe88: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17fe88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17fe8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17fe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17fe90: 0x3042dfdf  andi        $v0, $v0, 0xDFDF
    ctx->pc = 0x17fe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57311);
    // 0x17fe94: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x17FE94u;
    SET_GPR_U32(ctx, 31, 0x17FE9Cu);
    ctx->pc = 0x17FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE94u;
    // 0x17fe98: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE10u, 0x17FE94u, 0x17FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE9Cu;
label_17fe9c:
    // 0x17fe9c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x17fe9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17fea0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x17fea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x17fea4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FEA4u;
    {
        const bool branch_taken_0x17fea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fea4) {
            ctx->pc = 0x17FEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FEA4u;
            // 0x17fea8: 0x86220002  lh          $v0, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FEB0u;
            goto label_17feb0;
        }
    }
    ctx->pc = 0x17FEACu;
    // 0x17feac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17feb0:
    // 0x17feb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17feb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17feb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17feb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17feb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17feb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17febc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17febcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fec0: 0x3e00008  jr          $ra
    ctx->pc = 0x17FEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FEC0u;
        // 0x17fec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FEC8u;
    // 0x17fec8: 0x0  nop
    ctx->pc = 0x17fec8u;
    // NOP
    // 0x17fecc: 0x0  nop
    ctx->pc = 0x17feccu;
    // NOP
    if (ctx->pc == 0x17feccu) { ctx->pc = 0x17fed0u; }
}
