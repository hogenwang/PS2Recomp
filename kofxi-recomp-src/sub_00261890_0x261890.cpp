#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00261890
// Address: 0x261890 - 0x261900
void sub_00261890_0x261890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261890_0x261890");
#endif

    switch (ctx->pc) {
        case 0x2618b0u: goto label_2618b0;
        case 0x2618c0u: goto label_2618c0;
        case 0x2618f4u: goto label_2618f4;
        default: break;
    }

    ctx->pc = 0x261890u;

    // 0x261890: 0x53827  nor         $a3, $zero, $a1
    ctx->pc = 0x261890u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x261894: 0x852824  and         $a1, $a0, $a1
    ctx->pc = 0x261894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x261898: 0x871025  or          $v0, $a0, $a3
    ctx->pc = 0x261898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x26189c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x26189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2618a0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2618a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2618a4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2618A4u;
    {
        const bool branch_taken_0x2618a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2618A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2618A4u;
            // 0x2618a8: 0x3c0801c1  lui         $t0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618a4) {
            ctx->pc = 0x2618ECu;
            goto label_2618ec;
        }
    }
    ctx->pc = 0x2618ACu;
    // 0x2618ac: 0x8d02d770  lw          $v0, -0x2890($t0)
    ctx->pc = 0x2618acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294956912)));
label_2618b0:
    // 0x2618b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2618B0u;
    {
        const bool branch_taken_0x2618b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2618B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2618B0u;
            // 0x2618b4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618b0) {
            ctx->pc = 0x2618F4u;
            goto label_2618f4;
        }
    }
    ctx->pc = 0x2618B8u;
    // 0x2618b8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2618b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x2618bc: 0x0  nop
    ctx->pc = 0x2618bcu;
    // NOP
label_2618c0:
    // 0x2618c0: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2618C0u;
    {
        const bool branch_taken_0x2618c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2618c0) {
            ctx->pc = 0x2618C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2618C0u;
            // 0x2618c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2618DCu;
            goto label_2618dc;
        }
    }
    ctx->pc = 0x2618C8u;
    // 0x2618c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2618c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2618cc: 0x5460fffc  bnel        $v1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2618CCu;
    {
        const bool branch_taken_0x2618cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2618cc) {
            ctx->pc = 0x2618D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2618CCu;
            // 0x2618d0: 0x8c6200ac  lw          $v0, 0xAC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2618C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2618c0;
        }
    }
    ctx->pc = 0x2618D4u;
    // 0x2618d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2618D4u;
    {
        const bool branch_taken_0x2618d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2618D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2618D4u;
            // 0x2618d8: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618d4) {
            ctx->pc = 0x2618F8u;
            goto label_2618f8;
        }
    }
    ctx->pc = 0x2618DCu;
label_2618dc:
    // 0x2618dc: 0x871025  or          $v0, $a0, $a3
    ctx->pc = 0x2618dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x2618e0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2618e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2618e4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2618E4u;
    {
        const bool branch_taken_0x2618e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2618E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2618E4u;
            // 0x2618e8: 0x8d02d770  lw          $v0, -0x2890($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294956912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618e4) {
            ctx->pc = 0x2618B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2618b0;
        }
    }
    ctx->pc = 0x2618ECu;
label_2618ec:
    // 0x2618ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2618ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2618F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2618ECu;
            // 0x2618f0: 0x2402ffe5  addiu       $v0, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2618F4u;
label_2618f4:
    // 0x2618f4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2618f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_2618f8:
    // 0x2618f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2618F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2618FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2618F8u;
            // 0x2618fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261900u;
    ctx->pc = 0x261900u;
}
