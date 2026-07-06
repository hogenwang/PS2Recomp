#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00249698
// Address: 0x249698 - 0x249730
void sub_00249698_0x249698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249698_0x249698");
#endif

    switch (ctx->pc) {
        case 0x2496b0u: goto label_2496b0;
        case 0x2496f8u: goto label_2496f8;
        case 0x249720u: goto label_249720;
        default: break;
    }

    ctx->pc = 0x249698u;

    // 0x249698: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x249698u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24969c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x24969cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2496a0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2496A0u;
    {
        const bool branch_taken_0x2496a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2496A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2496A0u;
            // 0x2496a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496a0) {
            ctx->pc = 0x2496D0u;
            goto label_2496d0;
        }
    }
    ctx->pc = 0x2496A8u;
    // 0x2496a8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2496a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2496ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2496acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2496b0:
    // 0x2496b0: 0x2cc50004  sltiu       $a1, $a2, 0x4
    ctx->pc = 0x2496b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2496b4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2496B4u;
    {
        const bool branch_taken_0x2496b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2496B4u;
            // 0x2496b8: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496b4) {
            ctx->pc = 0x2496D4u;
            goto label_2496d4;
        }
    }
    ctx->pc = 0x2496BCu;
    // 0x2496bc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2496bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2496c0: 0x5067fffb  beql        $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2496C0u;
    {
        const bool branch_taken_0x2496c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2496c0) {
            ctx->pc = 0x2496C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2496C0u;
            // 0x2496c4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2496B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2496b0;
        }
    }
    ctx->pc = 0x2496C8u;
    // 0x2496c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2496C8u;
    {
        const bool branch_taken_0x2496c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2496C8u;
            // 0x2496cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496c8) {
            ctx->pc = 0x2496D8u;
            goto label_2496d8;
        }
    }
    ctx->pc = 0x2496D0u;
label_2496d0:
    // 0x2496d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2496d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2496d4:
    // 0x2496d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2496d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2496d8:
    // 0x2496d8: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2496D8u;
    {
        const bool branch_taken_0x2496d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2496D8u;
            // 0x2496dc: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496d8) {
            ctx->pc = 0x249720u;
            goto label_249720;
        }
    }
    ctx->pc = 0x2496E0u;
    // 0x2496e0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2496e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2496e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2496e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2496e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2496E8u;
    {
        const bool branch_taken_0x2496e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2496ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2496E8u;
            // 0x2496ec: 0x628c0  sll         $a1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496e8) {
            ctx->pc = 0x249720u;
            goto label_249720;
        }
    }
    ctx->pc = 0x2496F0u;
    // 0x2496f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2496f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2496f4: 0x0  nop
    ctx->pc = 0x2496f4u;
    // NOP
label_2496f8:
    // 0x2496f8: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x2496f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2496fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2496FCu;
    {
        const bool branch_taken_0x2496fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2496FCu;
            // 0x249700: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2496fc) {
            ctx->pc = 0x249724u;
            goto label_249724;
        }
    }
    ctx->pc = 0x249704u;
    // 0x249704: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x249704u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x249708: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x249708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x24970c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24970cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x249710: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x249710u;
    {
        const bool branch_taken_0x249710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x249710) {
            ctx->pc = 0x249714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x249710u;
            // 0x249714: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2496F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2496f8;
        }
    }
    ctx->pc = 0x249718u;
    // 0x249718: 0x3e00008  jr          $ra
    ctx->pc = 0x249718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24971Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249718u;
            // 0x24971c: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x249720u;
label_249720:
    // 0x249720: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x249720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_249724:
    // 0x249724: 0x3e00008  jr          $ra
    ctx->pc = 0x249724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249724u;
            // 0x249728: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24972Cu;
    // 0x24972c: 0x0  nop
    ctx->pc = 0x24972cu;
    // NOP
    ctx->pc = 0x249730u;
}
