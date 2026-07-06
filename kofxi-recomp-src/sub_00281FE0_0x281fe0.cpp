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

// Function: sub_00281FE0
// Address: 0x281fe0 - 0x282068
void sub_00281FE0_0x281fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281FE0_0x281fe0");
#endif

    switch (ctx->pc) {
        case 0x282018u: goto label_282018;
        case 0x282040u: goto label_282040;
        default: break;
    }

    ctx->pc = 0x281fe0u;

    // 0x281fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281fe4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x281fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x281fe8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x281fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x281fec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x281fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ff0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x281ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x281ff4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x281ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ff8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281ffc: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x281FFCu;
    {
        const bool branch_taken_0x281ffc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x282000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281FFCu;
        // 0x282000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ffc) {
            ctx->pc = 0x282050u;
            goto label_282050;
        }
    }
    ctx->pc = 0x282004u;
    // 0x282004: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x282004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x282008: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x282008u;
    {
        const bool branch_taken_0x282008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282008) {
            ctx->pc = 0x28200Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282008u;
            // 0x28200c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282028u;
            goto label_282028;
        }
    }
    ctx->pc = 0x282010u;
    // 0x282010: 0xc0a081a  jal         func_282068
    ctx->pc = 0x282010u;
    SET_GPR_U32(ctx, 31, 0x282018u);
    ctx->pc = 0x282014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282010u;
    // 0x282014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282068u, 0x282010u, 0x282018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282018u;
label_282018:
    // 0x282018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x282018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28201c: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x28201Cu;
    {
        const bool branch_taken_0x28201c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x282020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28201Cu;
        // 0x282020: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28201c) {
            ctx->pc = 0x282054u;
            goto label_282054;
        }
    }
    ctx->pc = 0x282024u;
    // 0x282024: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x282024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_282028:
    // 0x282028: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x282028u;
    {
        const bool branch_taken_0x282028 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282028u;
        // 0x28202c: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282028) {
            ctx->pc = 0x28204Cu;
            goto label_28204c;
        }
    }
    ctx->pc = 0x282030u;
    // 0x282030: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x282030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282034: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x282034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282038: 0xc049c48  jal         func_127120
    ctx->pc = 0x282038u;
    SET_GPR_U32(ctx, 31, 0x282040u);
    ctx->pc = 0x28203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282038u;
    // 0x28203c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x282038u, 0x282040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282040u;
label_282040:
    // 0x282040: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x282040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x282044: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x282044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x282048: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x282048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_28204c:
    // 0x28204c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28204cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_282050:
    // 0x282050: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x282050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_282054:
    // 0x282054: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x282054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282058: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x282058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28205c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28205cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282060: 0x3e00008  jr          $ra
    ctx->pc = 0x282060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282060u;
        // 0x282064: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282068u;
}
