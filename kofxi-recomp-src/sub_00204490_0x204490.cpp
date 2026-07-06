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

// Function: sub_00204490
// Address: 0x204490 - 0x204510
void sub_00204490_0x204490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204490_0x204490");
#endif

    switch (ctx->pc) {
        case 0x2044a4u: goto label_2044a4;
        case 0x2044ecu: goto label_2044ec;
        default: break;
    }

    ctx->pc = 0x204490u;

    // 0x204490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x204498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20449c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20449cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2044a0: 0x2602001e  addiu       $v0, $s0, 0x1E
    ctx->pc = 0x2044a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
label_2044a4:
    // 0x2044a4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2044a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2044a8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2044a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2044ac: 0x2463a160  addiu       $v1, $v1, -0x5EA0
    ctx->pc = 0x2044acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943072));
    // 0x2044b0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2044b4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2044b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2044b8: 0x8c439bf8  lw          $v1, -0x6408($v0)
    ctx->pc = 0x2044b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2044bc: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x2044bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2044c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2044c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2044c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2044c8: 0x906304f1  lbu         $v1, 0x4F1($v1)
    ctx->pc = 0x2044c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1265)));
    // 0x2044cc: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x2044ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
    // 0x2044d0: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x2044d0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2044d4: 0x24660054  addiu       $a2, $v1, 0x54
    ctx->pc = 0x2044d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2044d8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2044d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2044dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2044dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2044e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2044e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2044e4: 0xc081120  jal         func_204480
    ctx->pc = 0x2044E4u;
    SET_GPR_U32(ctx, 31, 0x2044ECu);
    ctx->pc = 0x2044E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044E4u;
    // 0x2044e8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204480u, 0x2044E4u, 0x2044ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2044ECu;
label_2044ec:
    // 0x2044ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2044ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2044f0: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x2044f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2044f4: 0x5460ffeb  bnel        $v1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2044F4u;
    {
        const bool branch_taken_0x2044f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2044f4) {
            ctx->pc = 0x2044F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2044F4u;
            // 0x2044f8: 0x2602001e  addiu       $v0, $s0, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2044A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2044a4;
        }
    }
    ctx->pc = 0x2044FCu;
    // 0x2044fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2044fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204504: 0x3e00008  jr          $ra
    ctx->pc = 0x204504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204504u;
        // 0x204508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20450Cu;
    // 0x20450c: 0x0  nop
    ctx->pc = 0x20450cu;
    // NOP
}
