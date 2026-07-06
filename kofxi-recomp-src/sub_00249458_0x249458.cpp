#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00249458
// Address: 0x249458 - 0x2494f0
void sub_00249458_0x249458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249458_0x249458");
#endif

    switch (ctx->pc) {
        case 0x249488u: goto label_249488;
        case 0x2494c8u: goto label_2494c8;
        default: break;
    }

    ctx->pc = 0x249458u;

    // 0x249458: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x249458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24945c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24945cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249460: 0x8c620198  lw          $v0, 0x198($v1)
    ctx->pc = 0x249460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x249464: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x249464u;
    {
        const bool branch_taken_0x249464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249464u;
            // 0x249468: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249464) {
            ctx->pc = 0x2494ACu;
            goto label_2494ac;
        }
    }
    ctx->pc = 0x24946Cu;
    // 0x24946c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24946cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x249470: 0x8c4411a0  lw          $a0, 0x11A0($v0)
    ctx->pc = 0x249470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x249474: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x249474u;
    {
        const bool branch_taken_0x249474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249474u;
            // 0x249478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249474) {
            ctx->pc = 0x2494E8u;
            goto label_2494e8;
        }
    }
    ctx->pc = 0x24947Cu;
    // 0x24947c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x24947cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249480: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x249480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x249484: 0x0  nop
    ctx->pc = 0x249484u;
    // NOP
label_249488:
    // 0x249488: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x249488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x24948c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x24948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x249490: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x249490u;
    {
        const bool branch_taken_0x249490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x249494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249490u;
            // 0x249494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249490) {
            ctx->pc = 0x2494E8u;
            goto label_2494e8;
        }
    }
    ctx->pc = 0x249498u;
    // 0x249498: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x249498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x24949c: 0x5480fffa  bnel        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24949Cu;
    {
        const bool branch_taken_0x24949c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24949c) {
            ctx->pc = 0x2494A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24949Cu;
            // 0x2494a0: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x249488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249488;
        }
    }
    ctx->pc = 0x2494A4u;
    // 0x2494a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2494A4u;
    {
        const bool branch_taken_0x2494a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2494A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2494A4u;
            // 0x2494a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494a4) {
            ctx->pc = 0x2494E8u;
            goto label_2494e8;
        }
    }
    ctx->pc = 0x2494ACu;
label_2494ac:
    // 0x2494ac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2494acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2494b0: 0x8c4411a0  lw          $a0, 0x11A0($v0)
    ctx->pc = 0x2494b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x2494b4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2494B4u;
    {
        const bool branch_taken_0x2494b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2494B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2494B4u;
            // 0x2494b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494b4) {
            ctx->pc = 0x2494E8u;
            goto label_2494e8;
        }
    }
    ctx->pc = 0x2494BCu;
    // 0x2494bc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2494bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2494c0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x2494c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2494c4: 0x0  nop
    ctx->pc = 0x2494c4u;
    // NOP
label_2494c8:
    // 0x2494c8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2494c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2494cc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2494ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2494d0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2494D0u;
    {
        const bool branch_taken_0x2494d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2494D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2494D0u;
            // 0x2494d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494d0) {
            ctx->pc = 0x2494E8u;
            goto label_2494e8;
        }
    }
    ctx->pc = 0x2494D8u;
    // 0x2494d8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x2494d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2494dc: 0x5480fffa  bnel        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2494DCu;
    {
        const bool branch_taken_0x2494dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2494dc) {
            ctx->pc = 0x2494E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2494DCu;
            // 0x2494e0: 0x8c820044  lw          $v0, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2494C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2494c8;
        }
    }
    ctx->pc = 0x2494E4u;
    // 0x2494e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2494e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2494e8:
    // 0x2494e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2494E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2494ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2494E8u;
            // 0x2494ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2494F0u;
    ctx->pc = 0x2494f0u;
}
