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

// Function: sub_001FB190
// Address: 0x1fb190 - 0x1fb230
void sub_001FB190_0x1fb190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB190_0x1fb190");
#endif

    switch (ctx->pc) {
        case 0x1fb1acu: goto label_1fb1ac;
        case 0x1fb1dcu: goto label_1fb1dc;
        default: break;
    }

    ctx->pc = 0x1fb190u;

    // 0x1fb190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb19c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb1a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fb1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fb1a4: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FB1A4u;
    SET_GPR_U32(ctx, 31, 0x1FB1ACu);
    ctx->pc = 0x1FB1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB1A4u;
    // 0x1fb1a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FB1A4u, 0x1FB1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB1ACu;
label_1fb1ac:
    // 0x1fb1ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB1ACu;
    {
        const bool branch_taken_0x1fb1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1ACu;
        // 0x1fb1b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb1ac) {
            ctx->pc = 0x1FB1D0u;
            goto label_1fb1d0;
        }
    }
    ctx->pc = 0x1FB1B4u;
    // 0x1fb1b4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fb1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fb1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb1c4: 0x34a50119  ori         $a1, $a1, 0x119
    ctx->pc = 0x1fb1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)281);
    // 0x1fb1c8: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FB1C8u;
    ctx->pc = 0x1FB1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB1C8u;
    // 0x1fb1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FB1D0u;
label_1fb1d0:
    // 0x1fb1d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fb1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1d4: 0x260209f0  addiu       $v0, $s0, 0x9F0
    ctx->pc = 0x1fb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2544));
    // 0x1fb1d8: 0x26040950  addiu       $a0, $s0, 0x950
    ctx->pc = 0x1fb1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
label_1fb1dc:
    // 0x1fb1dc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1fb1dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb1e0: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1fb1e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fb1e4: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1fb1e4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1fb1e8: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1fb1e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1fb1ec: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1fb1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1fb1f0: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x1fb1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x1fb1f4: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1fb1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x1fb1f8: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x1fb1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x1fb1fc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1fb1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1fb200: 0x0  nop
    ctx->pc = 0x1fb200u;
    // NOP
    // 0x1fb204: 0x0  nop
    ctx->pc = 0x1fb204u;
    // NOP
    // 0x1fb208: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FB208u;
    {
        const bool branch_taken_0x1fb208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB208u;
        // 0x1fb20c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb208) {
            ctx->pc = 0x1FB1DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fb1dc;
        }
    }
    ctx->pc = 0x1FB210u;
    // 0x1fb210: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1fb210u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb218: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1fb218u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1fb21c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb21cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb228: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB228u;
        // 0x1fb22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB230u;
}
