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

// Function: sub_00184700
// Address: 0x184700 - 0x1847b0
void sub_00184700_0x184700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184700_0x184700");
#endif

    switch (ctx->pc) {
        case 0x18470cu: goto label_18470c;
        default: break;
    }

    ctx->pc = 0x184700u;

    // 0x184700: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x184700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x184704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184708: 0xa08000fc  sb          $zero, 0xFC($a0)
    ctx->pc = 0x184708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 252), (uint8_t)GPR_U32(ctx, 0));
label_18470c:
    // 0x18470c: 0xa4800104  sh          $zero, 0x104($a0)
    ctx->pc = 0x18470cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 260), (uint16_t)GPR_U32(ctx, 0));
    // 0x184710: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x184710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x184714: 0xa4800100  sh          $zero, 0x100($a0)
    ctx->pc = 0x184714u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 0));
    // 0x184718: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x184718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18471c: 0xa4800102  sh          $zero, 0x102($a0)
    ctx->pc = 0x18471cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 258), (uint16_t)GPR_U32(ctx, 0));
    // 0x184720: 0xa4800106  sh          $zero, 0x106($a0)
    ctx->pc = 0x184720u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 262), (uint16_t)GPR_U32(ctx, 0));
    // 0x184724: 0xa480010c  sh          $zero, 0x10C($a0)
    ctx->pc = 0x184724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 268), (uint16_t)GPR_U32(ctx, 0));
    // 0x184728: 0xa4800108  sh          $zero, 0x108($a0)
    ctx->pc = 0x184728u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 264), (uint16_t)GPR_U32(ctx, 0));
    // 0x18472c: 0xa480010a  sh          $zero, 0x10A($a0)
    ctx->pc = 0x18472cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 266), (uint16_t)GPR_U32(ctx, 0));
    // 0x184730: 0xa480010e  sh          $zero, 0x10E($a0)
    ctx->pc = 0x184730u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 270), (uint16_t)GPR_U32(ctx, 0));
    // 0x184734: 0xa4800114  sh          $zero, 0x114($a0)
    ctx->pc = 0x184734u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 276), (uint16_t)GPR_U32(ctx, 0));
    // 0x184738: 0xa4800110  sh          $zero, 0x110($a0)
    ctx->pc = 0x184738u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 272), (uint16_t)GPR_U32(ctx, 0));
    // 0x18473c: 0xa4800112  sh          $zero, 0x112($a0)
    ctx->pc = 0x18473cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x184740: 0xa4800116  sh          $zero, 0x116($a0)
    ctx->pc = 0x184740u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 278), (uint16_t)GPR_U32(ctx, 0));
    // 0x184744: 0xa480011c  sh          $zero, 0x11C($a0)
    ctx->pc = 0x184744u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x184748: 0xa4800118  sh          $zero, 0x118($a0)
    ctx->pc = 0x184748u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x18474c: 0xa480011a  sh          $zero, 0x11A($a0)
    ctx->pc = 0x18474cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 282), (uint16_t)GPR_U32(ctx, 0));
    // 0x184750: 0xa480011e  sh          $zero, 0x11E($a0)
    ctx->pc = 0x184750u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 286), (uint16_t)GPR_U32(ctx, 0));
    // 0x184754: 0xa4800124  sh          $zero, 0x124($a0)
    ctx->pc = 0x184754u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 292), (uint16_t)GPR_U32(ctx, 0));
    // 0x184758: 0xa4800120  sh          $zero, 0x120($a0)
    ctx->pc = 0x184758u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x18475c: 0xa4800122  sh          $zero, 0x122($a0)
    ctx->pc = 0x18475cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 290), (uint16_t)GPR_U32(ctx, 0));
    // 0x184760: 0xa4800126  sh          $zero, 0x126($a0)
    ctx->pc = 0x184760u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 294), (uint16_t)GPR_U32(ctx, 0));
    // 0x184764: 0xa480012c  sh          $zero, 0x12C($a0)
    ctx->pc = 0x184764u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 300), (uint16_t)GPR_U32(ctx, 0));
    // 0x184768: 0xa4800128  sh          $zero, 0x128($a0)
    ctx->pc = 0x184768u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 296), (uint16_t)GPR_U32(ctx, 0));
    // 0x18476c: 0xa480012a  sh          $zero, 0x12A($a0)
    ctx->pc = 0x18476cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 298), (uint16_t)GPR_U32(ctx, 0));
    // 0x184770: 0xa480012e  sh          $zero, 0x12E($a0)
    ctx->pc = 0x184770u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 302), (uint16_t)GPR_U32(ctx, 0));
    // 0x184774: 0xa4800134  sh          $zero, 0x134($a0)
    ctx->pc = 0x184774u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 308), (uint16_t)GPR_U32(ctx, 0));
    // 0x184778: 0xa4800130  sh          $zero, 0x130($a0)
    ctx->pc = 0x184778u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x18477c: 0xa4800132  sh          $zero, 0x132($a0)
    ctx->pc = 0x18477cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 306), (uint16_t)GPR_U32(ctx, 0));
    // 0x184780: 0xa4800136  sh          $zero, 0x136($a0)
    ctx->pc = 0x184780u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x184784: 0xa480013c  sh          $zero, 0x13C($a0)
    ctx->pc = 0x184784u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 316), (uint16_t)GPR_U32(ctx, 0));
    // 0x184788: 0xa4800138  sh          $zero, 0x138($a0)
    ctx->pc = 0x184788u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x18478c: 0xa480013a  sh          $zero, 0x13A($a0)
    ctx->pc = 0x18478cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 314), (uint16_t)GPR_U32(ctx, 0));
    // 0x184790: 0xa480013e  sh          $zero, 0x13E($a0)
    ctx->pc = 0x184790u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 318), (uint16_t)GPR_U32(ctx, 0));
    // 0x184794: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x184794u;
    {
        const bool branch_taken_0x184794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x184798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184794u;
        // 0x184798: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184794) {
            ctx->pc = 0x18470Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18470c;
        }
    }
    ctx->pc = 0x18479Cu;
    // 0x18479c: 0x3e00008  jr          $ra
    ctx->pc = 0x18479Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18479Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1847A4u;
    // 0x1847a4: 0x0  nop
    ctx->pc = 0x1847a4u;
    // NOP
    // 0x1847a8: 0x0  nop
    ctx->pc = 0x1847a8u;
    // NOP
    // 0x1847ac: 0x0  nop
    ctx->pc = 0x1847acu;
    // NOP
}
