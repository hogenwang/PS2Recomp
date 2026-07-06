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

// Function: sub_002D6358
// Address: 0x2d6358 - 0x2d63f0
void sub_002D6358_0x2d6358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6358_0x2d6358");
#endif

    switch (ctx->pc) {
        case 0x2d6378u: goto label_2d6378;
        case 0x2d63c0u: goto label_2d63c0;
        default: break;
    }

    ctx->pc = 0x2d6358u;

    // 0x2d6358: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2d6358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d635c: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x2D635Cu;
    {
        const bool branch_taken_0x2d635c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D635Cu;
        // 0x2d6360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d635c) {
            ctx->pc = 0x2D639Cu;
            goto label_2d639c;
        }
    }
    ctx->pc = 0x2D6364u;
    // 0x2d6364: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2d6364u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6368: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D6368u;
    {
        const bool branch_taken_0x2d6368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6368) {
            ctx->pc = 0x2D639Cu;
            goto label_2d639c;
        }
    }
    ctx->pc = 0x2D6370u;
    // 0x2d6370: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d6370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d6374: 0x0  nop
    ctx->pc = 0x2d6374u;
    // NOP
label_2d6378:
    // 0x2d6378: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2d6378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2d637c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D637Cu;
    {
        const bool branch_taken_0x2d637c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D637Cu;
        // 0x2d6380: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d637c) {
            ctx->pc = 0x2D639Cu;
            goto label_2d639c;
        }
    }
    ctx->pc = 0x2D6384u;
    // 0x2d6384: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2d6384u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6388: 0x0  nop
    ctx->pc = 0x2d6388u;
    // NOP
    // 0x2d638c: 0x0  nop
    ctx->pc = 0x2d638cu;
    // NOP
    // 0x2d6390: 0x0  nop
    ctx->pc = 0x2d6390u;
    // NOP
    // 0x2d6394: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D6394u;
    {
        const bool branch_taken_0x2d6394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6394) {
            ctx->pc = 0x2D6398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6394u;
            // 0x2d6398: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d6378;
        }
    }
    ctx->pc = 0x2D639Cu;
label_2d639c:
    // 0x2d639c: 0x10a70012  beq         $a1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D639Cu;
    {
        const bool branch_taken_0x2d639c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x2D63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D639Cu;
        // 0x2d63a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d639c) {
            ctx->pc = 0x2D63E8u;
            goto label_2d63e8;
        }
    }
    ctx->pc = 0x2D63A4u;
    // 0x2d63a4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2d63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d63a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d63a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d63ac: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2d63acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d63b0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2d63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d63b4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2d63b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d63b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D63B8u;
    {
        const bool branch_taken_0x2d63b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63B8u;
        // 0x2d63bc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63b8) {
            ctx->pc = 0x2D63DCu;
            goto label_2d63dc;
        }
    }
    ctx->pc = 0x2D63C0u;
label_2d63c0:
    // 0x2d63c0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2d63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2d63c4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2d63c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d63c8: 0x0  nop
    ctx->pc = 0x2d63c8u;
    // NOP
    // 0x2d63cc: 0x0  nop
    ctx->pc = 0x2d63ccu;
    // NOP
    // 0x2d63d0: 0x0  nop
    ctx->pc = 0x2d63d0u;
    // NOP
    // 0x2d63d4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D63D4u;
    {
        const bool branch_taken_0x2d63d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63D4u;
        // 0x2d63d8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63d4) {
            ctx->pc = 0x2D63C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d63c0;
        }
    }
    ctx->pc = 0x2D63DCu;
label_2d63dc:
    // 0x2d63dc: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2d63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2d63e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d63e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2d63e8:
    // 0x2d63e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D63E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D63E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D63F0u;
}
