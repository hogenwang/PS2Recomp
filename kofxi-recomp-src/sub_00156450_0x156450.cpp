#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00156450
// Address: 0x156450 - 0x156520
void sub_00156450_0x156450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156450_0x156450");
#endif

    switch (ctx->pc) {
        case 0x156478u: goto label_156478;
        case 0x156480u: goto label_156480;
        case 0x1564d0u: goto label_1564d0;
        case 0x1564d8u: goto label_1564d8;
        default: break;
    }

    ctx->pc = 0x156450u;

    // 0x156450: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x156450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x156454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156458: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x156458u;
    {
        const bool branch_taken_0x156458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x156458) {
            ctx->pc = 0x156468u;
            goto label_156468;
        }
    }
    ctx->pc = 0x156460u;
    // 0x156460: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x156460u;
    {
        const bool branch_taken_0x156460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156460u;
            // 0x156464: 0x3c08009c  lui         $t0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156460) {
            ctx->pc = 0x1564C8u;
            goto label_1564c8;
        }
    }
    ctx->pc = 0x156468u;
label_156468:
    // 0x156468: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x156468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x15646c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15646cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156470: 0x24e7db50  addiu       $a3, $a3, -0x24B0
    ctx->pc = 0x156470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957904));
    // 0x156474: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x156474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_156478:
    // 0x156478: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x156478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15647c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15647cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_156480:
    // 0x156480: 0x8cc30078  lw          $v1, 0x78($a2)
    ctx->pc = 0x156480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x156484: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x156484u;
    {
        const bool branch_taken_0x156484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156484) {
            ctx->pc = 0x1564A0u;
            goto label_1564a0;
        }
    }
    ctx->pc = 0x15648Cu;
    // 0x15648c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x15648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x156490: 0x8ca30498  lw          $v1, 0x498($a1)
    ctx->pc = 0x156490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1176)));
    // 0x156494: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x156494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x156498: 0xaca30498  sw          $v1, 0x498($a1)
    ctx->pc = 0x156498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1176), GPR_U32(ctx, 3));
    // 0x15649c: 0x0  nop
    ctx->pc = 0x15649cu;
    // NOP
label_1564a0:
    // 0x1564a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1564a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1564a4: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x1564a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1564a8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1564A8u;
    {
        const bool branch_taken_0x1564a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1564A8u;
            // 0x1564ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564a8) {
            ctx->pc = 0x156480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156480;
        }
    }
    ctx->pc = 0x1564B0u;
    // 0x1564b0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1564b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1564b4: 0x29230002  slti        $v1, $t1, 0x2
    ctx->pc = 0x1564b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1564b8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1564B8u;
    {
        const bool branch_taken_0x1564b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1564B8u;
            // 0x1564bc: 0x24e70248  addiu       $a3, $a3, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564b8) {
            ctx->pc = 0x156478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156478;
        }
    }
    ctx->pc = 0x1564C0u;
    // 0x1564c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1564C0u;
    {
        const bool branch_taken_0x1564c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1564c0) {
            ctx->pc = 0x156518u;
            goto label_156518;
        }
    }
    ctx->pc = 0x1564C8u;
label_1564c8:
    // 0x1564c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1564c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564cc: 0x2508db50  addiu       $t0, $t0, -0x24B0
    ctx->pc = 0x1564ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957904));
label_1564d0:
    // 0x1564d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1564d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1564d4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1564d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1564d8:
    // 0x1564d8: 0x8ce30078  lw          $v1, 0x78($a3)
    ctx->pc = 0x1564d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x1564dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1564DCu;
    {
        const bool branch_taken_0x1564dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1564dc) {
            ctx->pc = 0x1564F8u;
            goto label_1564f8;
        }
    }
    ctx->pc = 0x1564E4u;
    // 0x1564e4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1564e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1564e8: 0x8c830498  lw          $v1, 0x498($a0)
    ctx->pc = 0x1564e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1176)));
    // 0x1564ec: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1564ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1564f0: 0xac830498  sw          $v1, 0x498($a0)
    ctx->pc = 0x1564f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
    // 0x1564f4: 0x0  nop
    ctx->pc = 0x1564f4u;
    // NOP
label_1564f8:
    // 0x1564f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1564f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1564fc: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x1564fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x156500: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x156500u;
    {
        const bool branch_taken_0x156500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156500u;
            // 0x156504: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156500) {
            ctx->pc = 0x1564D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1564d8;
        }
    }
    ctx->pc = 0x156508u;
    // 0x156508: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x156508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15650c: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x15650cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x156510: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x156510u;
    {
        const bool branch_taken_0x156510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156510u;
            // 0x156514: 0x25080248  addiu       $t0, $t0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156510) {
            ctx->pc = 0x1564D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1564d0;
        }
    }
    ctx->pc = 0x156518u;
label_156518:
    // 0x156518: 0x3e00008  jr          $ra
    ctx->pc = 0x156518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156520u;
    ctx->pc = 0x156520u;
}
