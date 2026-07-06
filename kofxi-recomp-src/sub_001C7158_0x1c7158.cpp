#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7158
// Address: 0x1c7158 - 0x1c71d8
void sub_001C7158_0x1c7158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7158_0x1c7158");
#endif

    switch (ctx->pc) {
        case 0x1c7168u: goto label_1c7168;
        default: break;
    }

    ctx->pc = 0x1c7158u;

    // 0x1c7158: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1c7158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c715c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C715Cu;
    {
        const bool branch_taken_0x1c715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C715Cu;
            // 0x1c7160: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c715c) {
            ctx->pc = 0x1C7174u;
            goto label_1c7174;
        }
    }
    ctx->pc = 0x1C7164u;
    // 0x1c7164: 0x0  nop
    ctx->pc = 0x1c7164u;
    // NOP
label_1c7168:
    // 0x1c7168: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x1c7168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c716c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c716cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c7170: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x1c7170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c7174:
    // 0x1c7174: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x1c7174u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c7178: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x1c7178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1c717c: 0x24e3ffd0  addiu       $v1, $a3, -0x30
    ctx->pc = 0x1c717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1c7180: 0x24e4ff9f  addiu       $a0, $a3, -0x61
    ctx->pc = 0x1c7180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
    // 0x1c7184: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c7184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c7188: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x1c7188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c718c: 0x2c840006  sltiu       $a0, $a0, 0x6
    ctx->pc = 0x1c718cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c7190: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C7190u;
    {
        const bool branch_taken_0x1c7190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7190u;
            // 0x1c7194: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7190) {
            ctx->pc = 0x1C7168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C7198u;
    // 0x1c7198: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7198u;
    {
        const bool branch_taken_0x1c7198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7198) {
            ctx->pc = 0x1C719Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7198u;
            // 0x1c719c: 0x24e2ffbf  addiu       $v0, $a3, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967231));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C71B0u;
            goto label_1c71b0;
        }
    }
    ctx->pc = 0x1C71A0u;
    // 0x1c71a0: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x1c71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1c71a4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c71a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c71a8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C71A8u;
    {
        const bool branch_taken_0x1c71a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C71ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71A8u;
            // 0x1c71ac: 0x2442ffa9  addiu       $v0, $v0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71a8) {
            ctx->pc = 0x1C7168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C71B0u;
label_1c71b0:
    // 0x1c71b0: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x1c71b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c71b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C71B4u;
    {
        const bool branch_taken_0x1c71b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c71b4) {
            ctx->pc = 0x1C71B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71B4u;
            // 0x1c71b8: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C71D0u;
            goto label_1c71d0;
        }
    }
    ctx->pc = 0x1C71BCu;
    // 0x1c71bc: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x1c71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1c71c0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c71c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c71c4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1C71C4u;
    {
        const bool branch_taken_0x1c71c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C71C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71C4u;
            // 0x1c71c8: 0x2442ffc9  addiu       $v0, $v0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71c4) {
            ctx->pc = 0x1C7168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7168;
        }
    }
    ctx->pc = 0x1C71CCu;
    // 0x1c71cc: 0x0  nop
    ctx->pc = 0x1c71ccu;
    // NOP
label_1c71d0:
    // 0x1c71d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C71D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C71D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71D0u;
            // 0x1c71d4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C71D8u;
    ctx->pc = 0x1c71d8u;
}
