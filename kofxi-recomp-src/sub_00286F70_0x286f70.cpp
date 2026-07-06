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

// Function: sub_00286F70
// Address: 0x286f70 - 0x287010
void sub_00286F70_0x286f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286F70_0x286f70");
#endif

    switch (ctx->pc) {
        case 0x286f8cu: goto label_286f8c;
        case 0x286fb0u: goto label_286fb0;
        default: break;
    }

    ctx->pc = 0x286f70u;

    // 0x286f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x286f74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286f78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286f7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x286f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x286f84: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x286F84u;
    SET_GPR_U32(ctx, 31, 0x286F8Cu);
    ctx->pc = 0x286F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F84u;
    // 0x286f88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x286F84u, 0x286F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F8Cu;
label_286f8c:
    // 0x286f8c: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x286f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x286f90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x286f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x286f94: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x286f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x286f98: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x286f98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x286f9c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x286f9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x286fa0: 0x240c3  sra         $t0, $v0, 3
    ctx->pc = 0x286fa0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 3));
    // 0x286fa4: 0x19000014  blez        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x286FA4u;
    {
        const bool branch_taken_0x286fa4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x286FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FA4u;
        // 0x286fa8: 0x2507ffff  addiu       $a3, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fa4) {
            ctx->pc = 0x286FF8u;
            goto label_286ff8;
        }
    }
    ctx->pc = 0x286FACu;
    // 0x286fac: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x286facu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_286fb0:
    // 0x286fb0: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x286fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x286fb4: 0x24e30007  addiu       $v1, $a3, 0x7
    ctx->pc = 0x286fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x286fb8: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x286fb8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x286fbc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x286fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x286fc0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x286fc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x286fc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x286fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fc8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x286fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x286fcc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x286fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286fd0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x286fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x286fd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x286fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x286fd8: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x286fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x286fdc: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x286fdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286fe0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x286fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x286fe4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x286fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x286fe8: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x286fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x286fec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x286fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x286ff0: 0x1ca0ffef  bgtz        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x286FF0u;
    {
        const bool branch_taken_0x286ff0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x286FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286FF0u;
        // 0x286ff4: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ff0) {
            ctx->pc = 0x286FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286fb0;
        }
    }
    ctx->pc = 0x286FF8u;
label_286ff8:
    // 0x286ff8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x286ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286ffc: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x286ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287000: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x287000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287008: 0x3e00008  jr          $ra
    ctx->pc = 0x287008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287008u;
        // 0x28700c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287010u;
}
