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

// Function: sub_00127448
// Address: 0x127448 - 0x1274f0
void sub_00127448_0x127448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127448_0x127448");
#endif

    switch (ctx->pc) {
        case 0x127474u: goto label_127474;
        case 0x1274a0u: goto label_1274a0;
        case 0x1274acu: goto label_1274ac;
        case 0x1274dcu: goto label_1274dc;
        default: break;
    }

    ctx->pc = 0x127448u;

    // 0x127448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12744c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12744cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x127454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x127458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12745c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12745cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127460: 0x8c8e004c  lw          $t6, 0x4C($a0)
    ctx->pc = 0x127460u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x127464: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x127464u;
    {
        const bool branch_taken_0x127464 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x127468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127464u;
        // 0x127468: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127464) {
            ctx->pc = 0x127484u;
            goto label_127484;
        }
    }
    ctx->pc = 0x12746Cu;
    // 0x12746c: 0xc048cae  jal         func_1232B8
    ctx->pc = 0x12746Cu;
    SET_GPR_U32(ctx, 31, 0x127474u);
    ctx->pc = 0x127470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12746Cu;
    // 0x127470: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1232B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1232B8u, 0x12746Cu, 0x127474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127474u;
label_127474:
    // 0x127474: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x127474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x127478: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x127478u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12747c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12747Cu;
    {
        const bool branch_taken_0x12747c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12747Cu;
        // 0x127480: 0x40702d  daddu       $t6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12747c) {
            ctx->pc = 0x1274ACu;
            goto label_1274ac;
        }
    }
    ctx->pc = 0x127484u;
label_127484:
    // 0x127484: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x127484u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x127488: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x127488u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12748c: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x12748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x127490: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x127490u;
    {
        const bool branch_taken_0x127490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127490u;
        // 0x127494: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127490) {
            ctx->pc = 0x1274C4u;
            goto label_1274c4;
        }
    }
    ctx->pc = 0x127498u;
    // 0x127498: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x127498u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12749c: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x12749cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
label_1274a0:
    // 0x1274a0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1274a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1274a4: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x1274a4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274a8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1274a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1274ac:
    // 0x1274ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1274acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1274b0: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1274b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1274b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1274b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1274b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1274bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1274BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1274C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274BCu;
        // 0x1274c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1274BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1274C4u;
label_1274c4:
    // 0x1274c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1274c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274c8: 0x22f8004  sllv        $s0, $t7, $s1
    ctx->pc = 0x1274c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 17) & 0x1F));
    // 0x1274cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1274ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1274d0: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1274d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1274d4: 0xc048cae  jal         func_1232B8
    ctx->pc = 0x1274D4u;
    SET_GPR_U32(ctx, 31, 0x1274DCu);
    ctx->pc = 0x1274D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1274D4u;
    // 0x1274d8: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1232B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1232B8u, 0x1274D4u, 0x1274DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274DCu;
label_1274dc:
    // 0x1274dc: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1274DCu;
    {
        const bool branch_taken_0x1274dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274DCu;
        // 0x1274e0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274dc) {
            ctx->pc = 0x1274ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1274ac;
        }
    }
    ctx->pc = 0x1274E4u;
    // 0x1274e4: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x1274e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x1274e8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1274E8u;
    {
        const bool branch_taken_0x1274e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274E8u;
        // 0x1274ec: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274e8) {
            ctx->pc = 0x1274A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1274a0;
        }
    }
    ctx->pc = 0x1274F0u;
}
