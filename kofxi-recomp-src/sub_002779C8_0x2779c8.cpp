#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002779C8
// Address: 0x2779c8 - 0x277a20
void sub_002779C8_0x2779c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002779C8_0x2779c8");
#endif

    switch (ctx->pc) {
        case 0x2779e0u: goto label_2779e0;
        default: break;
    }

    ctx->pc = 0x2779c8u;

    // 0x2779c8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2779c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779cc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2779ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2779d0: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2779D0u;
    {
        const bool branch_taken_0x2779d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2779D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2779D0u;
            // 0x2779d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779d0) {
            ctx->pc = 0x277A14u;
            goto label_277a14;
        }
    }
    ctx->pc = 0x2779D8u;
    // 0x2779d8: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x2779d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2779dc: 0x0  nop
    ctx->pc = 0x2779dcu;
    // NOP
label_2779e0:
    // 0x2779e0: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x2779e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2779e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2779e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2779e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2779e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2779ec: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2779ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2779f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2779f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2779f4: 0x83282b  sltu        $a1, $a0, $v1
    ctx->pc = 0x2779f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2779f8: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2779f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2779fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2779FCu;
    {
        const bool branch_taken_0x2779fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2779FCu;
            // 0x277a00: 0xe6402b  sltu        $t0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2779fc) {
            ctx->pc = 0x277A18u;
            goto label_277a18;
        }
    }
    ctx->pc = 0x277A04u;
    // 0x277a04: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x277A04u;
    {
        const bool branch_taken_0x277a04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x277A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277A04u;
            // 0x277a08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a04) {
            ctx->pc = 0x277A18u;
            goto label_277a18;
        }
    }
    ctx->pc = 0x277A0Cu;
    // 0x277a0c: 0x5500fff4  bnel        $t0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x277A0Cu;
    {
        const bool branch_taken_0x277a0c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x277a0c) {
            ctx->pc = 0x277A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x277A0Cu;
            // 0x277a10: 0x1471021  addu        $v0, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2779E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2779e0;
        }
    }
    ctx->pc = 0x277A14u;
label_277a14:
    // 0x277a14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277a18:
    // 0x277a18: 0x3e00008  jr          $ra
    ctx->pc = 0x277A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277A20u;
    ctx->pc = 0x277a20u;
}
