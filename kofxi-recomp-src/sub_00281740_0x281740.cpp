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

// Function: sub_00281740
// Address: 0x281740 - 0x281848
void sub_00281740_0x281740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281740_0x281740");
#endif

    switch (ctx->pc) {
        case 0x2817b8u: goto label_2817b8;
        case 0x28182cu: goto label_28182c;
        default: break;
    }

    ctx->pc = 0x281740u;

    // 0x281740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281744: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x281744u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281748: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x281748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28174c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x28174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x281750: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x281750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x281754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281758: 0x310800c0  andi        $t0, $t0, 0xC0
    ctx->pc = 0x281758u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)192);
    // 0x28175c: 0xa180a  movz        $v1, $zero, $t2
    ctx->pc = 0x28175cu;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x281760: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x281760u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281764: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x281764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281768: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x281768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x28176c: 0x28e2001f  slti        $v0, $a3, 0x1F
    ctx->pc = 0x28176cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x281770: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x281770u;
    {
        const bool branch_taken_0x281770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281770u;
        // 0x281774: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281770) {
            ctx->pc = 0x281794u;
            goto label_281794;
        }
    }
    ctx->pc = 0x281778u;
    // 0x281778: 0x30e2001f  andi        $v0, $a3, 0x1F
    ctx->pc = 0x281778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x28177c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x28177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x281780: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x281780u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x281784: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x281784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x281788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28178c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28178Cu;
    {
        const bool branch_taken_0x28178c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28178Cu;
        // 0x281790: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28178c) {
            ctx->pc = 0x2817F8u;
            goto label_2817f8;
        }
    }
    ctx->pc = 0x281794u;
label_281794:
    // 0x281794: 0x3462001f  ori         $v0, $v1, 0x1F
    ctx->pc = 0x281794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x281798: 0x28e40080  slti        $a0, $a3, 0x80
    ctx->pc = 0x281798u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x28179c: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x28179cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2817a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2817a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2817a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2817a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2817a8: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2817A8u;
    {
        const bool branch_taken_0x2817a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2817ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817A8u;
        // 0x2817ac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2817a8) {
            ctx->pc = 0x2817E0u;
            goto label_2817e0;
        }
    }
    ctx->pc = 0x2817B0u;
    // 0x2817b0: 0x2408ff80  addiu       $t0, $zero, -0x80
    ctx->pc = 0x2817b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x2817b4: 0x0  nop
    ctx->pc = 0x2817b4u;
    // NOP
label_2817b8:
    // 0x2817b8: 0x30e2007f  andi        $v0, $a3, 0x7F
    ctx->pc = 0x2817b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x2817bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2817bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2817c0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2817c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2817c4: 0x739c3  sra         $a3, $a3, 7
    ctx->pc = 0x2817c4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 7));
    // 0x2817c8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2817c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2817cc: 0x28e40080  slti        $a0, $a3, 0x80
    ctx->pc = 0x2817ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2817d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2817d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2817d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2817d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2817d8: 0x1080fff7  beqz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2817D8u;
    {
        const bool branch_taken_0x2817d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2817DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2817D8u;
        // 0x2817dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2817d8) {
            ctx->pc = 0x2817B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2817b8;
        }
    }
    ctx->pc = 0x2817E0u;
label_2817e0:
    // 0x2817e0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2817e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2817e4: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x2817e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x2817e8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2817e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2817ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2817ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2817f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2817f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2817f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2817f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2817f8:
    // 0x2817f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2817f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2817fc: 0x15420009  bne         $t2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2817FCu;
    {
        const bool branch_taken_0x2817fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x2817fc) {
            ctx->pc = 0x281824u;
            goto label_281824;
        }
    }
    ctx->pc = 0x281804u;
    // 0x281804: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x281804u;
    {
        const bool branch_taken_0x281804 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x281808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281804u;
        // 0x281808: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281804) {
            ctx->pc = 0x281824u;
            goto label_281824;
        }
    }
    ctx->pc = 0x28180Cu;
    // 0x28180c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x28180cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x281810: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x281810u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x281814: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x281814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x281818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28181c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28181Cu;
    {
        const bool branch_taken_0x28181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28181Cu;
        // 0x281820: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28181c) {
            ctx->pc = 0x28182Cu;
            goto label_28182c;
        }
    }
    ctx->pc = 0x281824u;
label_281824:
    // 0x281824: 0xc0a0612  jal         func_281848
    ctx->pc = 0x281824u;
    SET_GPR_U32(ctx, 31, 0x28182Cu);
    ctx->pc = 0x281828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281824u;
    // 0x281828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281848u, 0x281824u, 0x28182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28182Cu;
label_28182c:
    // 0x28182c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281830: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281834: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x281834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x281838: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x281838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28183c: 0x3e00008  jr          $ra
    ctx->pc = 0x28183Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28183Cu;
        // 0x281840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28183Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281844u;
    // 0x281844: 0x0  nop
    ctx->pc = 0x281844u;
    // NOP
}
