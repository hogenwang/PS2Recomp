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

// Function: sub_002F6570
// Address: 0x2f6570 - 0x2f65f8
void sub_002F6570_0x2f6570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6570_0x2f6570");
#endif

    switch (ctx->pc) {
        case 0x2f6598u: goto label_2f6598;
        case 0x2f65a8u: goto label_2f65a8;
        case 0x2f65d0u: goto label_2f65d0;
        default: break;
    }

    ctx->pc = 0x2f6570u;

    // 0x2f6570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f6570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f6574: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f6574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f6578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f657c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f657cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6580: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f6580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f6584: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f6584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6588: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2F6588u;
    {
        const bool branch_taken_0x2f6588 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6588u;
        // 0x2f658c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6588) {
            ctx->pc = 0x2F65B4u;
            goto label_2f65b4;
        }
    }
    ctx->pc = 0x2F6590u;
    // 0x2f6590: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F6590u;
    SET_GPR_U32(ctx, 31, 0x2F6598u);
    ctx->pc = 0x2F6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6590u;
    // 0x2f6594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2F6590u, 0x2F6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6598u;
label_2f6598:
    // 0x2f6598: 0x50182b  sltu        $v1, $v0, $s0
    ctx->pc = 0x2f6598u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2f659c: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x2f659cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2f65a0: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F65A0u;
    SET_GPR_U32(ctx, 31, 0x2F65A8u);
    ctx->pc = 0x2F65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65A0u;
    // 0x2f65a4: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F65A0u, 0x2F65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65A8u;
label_2f65a8:
    // 0x2f65a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f65a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f65ac: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F65ACu;
    {
        const bool branch_taken_0x2f65ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f65ac) {
            ctx->pc = 0x2F65BCu;
            goto label_2f65bc;
        }
    }
    ctx->pc = 0x2F65B4u;
label_2f65b4:
    // 0x2f65b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F65B4u;
    {
        const bool branch_taken_0x2f65b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65B4u;
        // 0x2f65b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65b4) {
            ctx->pc = 0x2F65DCu;
            goto label_2f65dc;
        }
    }
    ctx->pc = 0x2F65BCu;
label_2f65bc:
    // 0x2f65bc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F65BCu;
    {
        const bool branch_taken_0x2f65bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65BCu;
        // 0x2f65c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65bc) {
            ctx->pc = 0x2F65D0u;
            goto label_2f65d0;
        }
    }
    ctx->pc = 0x2F65C4u;
    // 0x2f65c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f65c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f65c8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2F65C8u;
    SET_GPR_U32(ctx, 31, 0x2F65D0u);
    ctx->pc = 0x2F65CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65C8u;
    // 0x2f65cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2F65C8u, 0x2F65D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65D0u;
label_2f65d0:
    // 0x2f65d0: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x2f65d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2f65d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f65d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f65d8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2f65d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f65dc:
    // 0x2f65dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f65dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f65e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f65e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f65e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f65e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f65e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f65e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f65ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F65ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65ECu;
        // 0x2f65f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F65ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F65F4u;
    // 0x2f65f4: 0x0  nop
    ctx->pc = 0x2f65f4u;
    // NOP
    if (ctx->pc == 0x2f65f4u) { ctx->pc = 0x2f65f8u; }
}
