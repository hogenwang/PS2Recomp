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

// Function: sub_001A3420
// Address: 0x1a3420 - 0x1a36f0
void sub_001A3420_0x1a3420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3420_0x1a3420");
#endif

    ctx->pc = 0x1a3420u;

    // 0x1a3420: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a3420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a3424: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x1a3424u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x1a3428: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1a3428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a342c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A342Cu;
    {
        const bool branch_taken_0x1a342c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a342c) {
            ctx->pc = 0x1A343Cu;
            goto label_1a343c;
        }
    }
    ctx->pc = 0x1A3434u;
    // 0x1a3434: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a3434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a3438: 0x90449480  lbu         $a0, -0x6B80($v0)
    ctx->pc = 0x1a3438u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
label_1a343c:
    // 0x1a343c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a3440: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1a3440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1a3444: 0x8c479478  lw          $a3, -0x6B88($v0)
    ctx->pc = 0x1a3444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x1a3448: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x1a3448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1a344c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A344Cu;
    {
        const bool branch_taken_0x1a344c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a344c) {
            ctx->pc = 0x1A3450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A344Cu;
            // 0x1a3450: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3460u;
            goto label_1a3460;
        }
    }
    ctx->pc = 0x1A3454u;
    // 0x1a3454: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a3454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a3458: 0x90449480  lbu         $a0, -0x6B80($v0)
    ctx->pc = 0x1a3458u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x1a345c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a345cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3460:
    // 0x1a3460: 0x54820014  bnel        $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A3460u;
    {
        const bool branch_taken_0x1a3460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3460) {
            ctx->pc = 0x1A3464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3460u;
            // 0x1a3464: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A34B4u;
            goto label_1a34b4;
        }
    }
    ctx->pc = 0x1A3468u;
    // 0x1a3468: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3468u;
    {
        const bool branch_taken_0x1a3468 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3468) {
            ctx->pc = 0x1A347Cu;
            goto label_1a347c;
        }
    }
    ctx->pc = 0x1A3470u;
    // 0x1a3470: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a3470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a3474: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A3474u;
    {
        const bool branch_taken_0x1a3474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3474u;
        // 0x1a3478: 0x90449480  lbu         $a0, -0x6B80($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3474) {
            ctx->pc = 0x1A3520u;
            goto label_1a3520;
        }
    }
    ctx->pc = 0x1A347Cu;
label_1a347c:
    // 0x1a347c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a3480: 0x9043db10  lbu         $v1, -0x24F0($v0)
    ctx->pc = 0x1a3480u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x1a3484: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1a3484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a3488: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3488u;
    {
        const bool branch_taken_0x1a3488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3488u;
        // 0x1a348c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3488) {
            ctx->pc = 0x1A3494u;
            goto label_1a3494;
        }
    }
    ctx->pc = 0x1A3490u;
    // 0x1a3490: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a3490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a3494:
    // 0x1a3494: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1a3494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a3498: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3498u;
    {
        const bool branch_taken_0x1a3498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3498) {
            ctx->pc = 0x1A34A4u;
            goto label_1a34a4;
        }
    }
    ctx->pc = 0x1A34A0u;
    // 0x1a34a0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1a34a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_1a34a4:
    // 0x1a34a4: 0x5480001e  bnel        $a0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A34A4u;
    {
        const bool branch_taken_0x1a34a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a34a4) {
            ctx->pc = 0x1A34A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A34A4u;
            // 0x1a34a8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3520u;
            goto label_1a3520;
        }
    }
    ctx->pc = 0x1A34ACu;
    // 0x1a34ac: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1A34ACu;
    {
        const bool branch_taken_0x1a34ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34ACu;
        // 0x1a34b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34ac) {
            ctx->pc = 0x1A36DCu;
            goto label_1a36dc;
        }
    }
    ctx->pc = 0x1A34B4u;
label_1a34b4:
    // 0x1a34b4: 0x54820016  bnel        $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A34B4u;
    {
        const bool branch_taken_0x1a34b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a34b4) {
            ctx->pc = 0x1A34B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A34B4u;
            // 0x1a34b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3510u;
            goto label_1a3510;
        }
    }
    ctx->pc = 0x1A34BCu;
    // 0x1a34bc: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A34BCu;
    {
        const bool branch_taken_0x1a34bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a34bc) {
            ctx->pc = 0x1A34D8u;
            goto label_1a34d8;
        }
    }
    ctx->pc = 0x1A34C4u;
    // 0x1a34c4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a34c8: 0x90429480  lbu         $v0, -0x6B80($v0)
    ctx->pc = 0x1a34c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x1a34cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a34ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a34d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A34D0u;
    {
        const bool branch_taken_0x1a34d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34D0u;
        // 0x1a34d4: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34d0) {
            ctx->pc = 0x1A3520u;
            goto label_1a3520;
        }
    }
    ctx->pc = 0x1A34D8u;
label_1a34d8:
    // 0x1a34d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a34d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a34dc: 0x9043db10  lbu         $v1, -0x24F0($v0)
    ctx->pc = 0x1a34dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x1a34e0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1a34e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a34e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A34E4u;
    {
        const bool branch_taken_0x1a34e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34E4u;
        // 0x1a34e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a34e4) {
            ctx->pc = 0x1A34F0u;
            goto label_1a34f0;
        }
    }
    ctx->pc = 0x1A34ECu;
    // 0x1a34ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a34f0:
    // 0x1a34f0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1a34f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a34f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A34F4u;
    {
        const bool branch_taken_0x1a34f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a34f4) {
            ctx->pc = 0x1A3500u;
            goto label_1a3500;
        }
    }
    ctx->pc = 0x1A34FCu;
    // 0x1a34fc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x1a34fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_1a3500:
    // 0x1a3500: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3500u;
    {
        const bool branch_taken_0x1a3500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3500) {
            ctx->pc = 0x1A3504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3500u;
            // 0x1a3504: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3520u;
            goto label_1a3520;
        }
    }
    ctx->pc = 0x1A3508u;
    // 0x1a3508: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1A3508u;
    {
        const bool branch_taken_0x1a3508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3508u;
        // 0x1a350c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3508) {
            ctx->pc = 0x1A36DCu;
            goto label_1a36dc;
        }
    }
    ctx->pc = 0x1A3510u;
label_1a3510:
    // 0x1a3510: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3510u;
    {
        const bool branch_taken_0x1a3510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3510) {
            ctx->pc = 0x1A3514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3510u;
            // 0x1a3514: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3524u;
            goto label_1a3524;
        }
    }
    ctx->pc = 0x1A3518u;
    // 0x1a3518: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a3518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a351c: 0x90449720  lbu         $a0, -0x68E0($v0)
    ctx->pc = 0x1a351cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
label_1a3520:
    // 0x1a3520: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a3520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a3524:
    // 0x1a3524: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1A3524u;
    {
        const bool branch_taken_0x1a3524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3524) {
            ctx->pc = 0x1A3604u;
            goto label_1a3604;
        }
    }
    ctx->pc = 0x1A352Cu;
    // 0x1a352c: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A352Cu;
    {
        const bool branch_taken_0x1a352c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a352c) {
            ctx->pc = 0x1A3530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A352Cu;
            // 0x1a3530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3550u;
            goto label_1a3550;
        }
    }
    ctx->pc = 0x1A3534u;
    // 0x1a3534: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a3534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a3538: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a3538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a353c: 0x9463ea22  lhu         $v1, -0x15DE($v1)
    ctx->pc = 0x1a353cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x1a3540: 0x9442ea2e  lhu         $v0, -0x15D2($v0)
    ctx->pc = 0x1a3540u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961710)));
    // 0x1a3544: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a3544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a3548: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1A3548u;
    {
        const bool branch_taken_0x1a3548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3548u;
        // 0x1a354c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3548) {
            ctx->pc = 0x1A36CCu;
            goto label_1a36cc;
        }
    }
    ctx->pc = 0x1A3550u;
label_1a3550:
    // 0x1a3550: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3550u;
    {
        const bool branch_taken_0x1a3550 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a3550) {
            ctx->pc = 0x1A3574u;
            goto label_1a3574;
        }
    }
    ctx->pc = 0x1A3558u;
    // 0x1a3558: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a3558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a355c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a3560: 0x9463ea20  lhu         $v1, -0x15E0($v1)
    ctx->pc = 0x1a3560u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961696)));
    // 0x1a3564: 0x9442ea2c  lhu         $v0, -0x15D4($v0)
    ctx->pc = 0x1a3564u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961708)));
    // 0x1a3568: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a3568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a356c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1A356Cu;
    {
        const bool branch_taken_0x1a356c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A356Cu;
        // 0x1a3570: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a356c) {
            ctx->pc = 0x1A36CCu;
            goto label_1a36cc;
        }
    }
    ctx->pc = 0x1A3574u;
label_1a3574:
    // 0x1a3574: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A3574u;
    {
        const bool branch_taken_0x1a3574 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3574) {
            ctx->pc = 0x1A35C8u;
            goto label_1a35c8;
        }
    }
    ctx->pc = 0x1A357Cu;
    // 0x1a357c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a357cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a3580: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a3580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a3584: 0x9444ea26  lhu         $a0, -0x15DA($v0)
    ctx->pc = 0x1a3584u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961702)));
    // 0x1a3588: 0x9465ea22  lhu         $a1, -0x15DE($v1)
    ctx->pc = 0x1a3588u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x1a358c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a3590: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x1a3590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x1a3594: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a3594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a3598: 0x9442ea32  lhu         $v0, -0x15CE($v0)
    ctx->pc = 0x1a3598u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961714)));
    // 0x1a359c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1a359cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a35a0: 0x9463ea2e  lhu         $v1, -0x15D2($v1)
    ctx->pc = 0x1a35a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961710)));
    // 0x1a35a4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1a35a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a35a8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1a35a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a35ac: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1a35acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1a35b0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a35b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a35b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a35b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a35b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a35b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a35bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a35bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a35c0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1A35C0u;
    {
        const bool branch_taken_0x1a35c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35C0u;
        // 0x1a35c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35c0) {
            ctx->pc = 0x1A36CCu;
            goto label_1a36cc;
        }
    }
    ctx->pc = 0x1A35C8u;
label_1a35c8:
    // 0x1a35c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a35c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a35cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a35d0: 0x9465ea22  lhu         $a1, -0x15DE($v1)
    ctx->pc = 0x1a35d0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x1a35d4: 0x9444ea26  lhu         $a0, -0x15DA($v0)
    ctx->pc = 0x1a35d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961702)));
    // 0x1a35d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a35dc: 0x9463ea2e  lhu         $v1, -0x15D2($v1)
    ctx->pc = 0x1a35dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961710)));
    // 0x1a35e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a35e4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1a35e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a35e8: 0x9442ea32  lhu         $v0, -0x15CE($v0)
    ctx->pc = 0x1a35e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961714)));
    // 0x1a35ec: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1a35ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a35f0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a35f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a35f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a35f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a35f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a35f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a35fc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1A35FCu;
    {
        const bool branch_taken_0x1a35fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35FCu;
        // 0x1a3600: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35fc) {
            ctx->pc = 0x1A36CCu;
            goto label_1a36cc;
        }
    }
    ctx->pc = 0x1A3604u;
label_1a3604:
    // 0x1a3604: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A3604u;
    {
        const bool branch_taken_0x1a3604 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3604) {
            ctx->pc = 0x1A3608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3604u;
            // 0x1a3608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A362Cu;
            goto label_1a362c;
        }
    }
    ctx->pc = 0x1A360Cu;
    // 0x1a360c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a360cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a3610: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a3610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a3614: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3618: 0x2442ea22  addiu       $v0, $v0, -0x15DE
    ctx->pc = 0x1a3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961698));
    // 0x1a361c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a361cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a3624: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A3624u;
    {
        const bool branch_taken_0x1a3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3624u;
        // 0x1a3628: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3624) {
            ctx->pc = 0x1A36CCu;
            goto label_1a36cc;
        }
    }
    ctx->pc = 0x1A362Cu;
label_1a362c:
    // 0x1a362c: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A362Cu;
    {
        const bool branch_taken_0x1a362c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a362c) {
            ctx->pc = 0x1A3654u;
            goto label_1a3654;
        }
    }
    ctx->pc = 0x1A3634u;
    // 0x1a3634: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a3634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a3638: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a3638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a363c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3640: 0x2442ea20  addiu       $v0, $v0, -0x15E0
    ctx->pc = 0x1a3640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x1a3644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a364c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A364Cu;
    {
        const bool branch_taken_0x1a364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A364Cu;
        // 0x1a3650: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a364c) {
            ctx->pc = 0x1A36CCu;
            goto label_1a36cc;
        }
    }
    ctx->pc = 0x1A3654u;
label_1a3654:
    // 0x1a3654: 0x54a30011  bnel        $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A3654u;
    {
        const bool branch_taken_0x1a3654 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3654) {
            ctx->pc = 0x1A3658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3654u;
            // 0x1a3658: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A369Cu;
            goto label_1a369c;
        }
    }
    ctx->pc = 0x1A365Cu;
    // 0x1a365c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1a365cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a3660: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a3660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a3664: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a3664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a3668: 0x2463ea22  addiu       $v1, $v1, -0x15DE
    ctx->pc = 0x1a3668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961698));
    // 0x1a366c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a366cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a3670: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a3670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3674: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x1a3674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x1a3678: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a367c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a3680: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a3680u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3684: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1a3684u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3688: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1a3688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1a368c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a3690: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a3690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a3694: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A3694u;
    {
        const bool branch_taken_0x1a3694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3694u;
        // 0x1a3698: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3694) {
            ctx->pc = 0x1A36CCu;
            goto label_1a36cc;
        }
    }
    ctx->pc = 0x1A369Cu;
label_1a369c:
    // 0x1a369c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a369cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a36a0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1a36a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a36a4: 0x2463ea22  addiu       $v1, $v1, -0x15DE
    ctx->pc = 0x1a36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961698));
    // 0x1a36a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a36ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a36acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a36b0: 0x2442ea26  addiu       $v0, $v0, -0x15DA
    ctx->pc = 0x1a36b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961702));
    // 0x1a36b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a36b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a36bc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a36bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a36c0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1a36c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a36c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a36c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a36c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a36c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a36cc:
    // 0x1a36cc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A36CCu;
    {
        const bool branch_taken_0x1a36cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a36cc) {
            ctx->pc = 0x1A36DCu;
            goto label_1a36dc;
        }
    }
    ctx->pc = 0x1A36D4u;
    // 0x1a36d4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1a36d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1a36d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a36d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a36dc:
    // 0x1a36dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A36DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A36DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A36E4u;
    // 0x1a36e4: 0x0  nop
    ctx->pc = 0x1a36e4u;
    // NOP
    // 0x1a36e8: 0x0  nop
    ctx->pc = 0x1a36e8u;
    // NOP
    // 0x1a36ec: 0x0  nop
    ctx->pc = 0x1a36ecu;
    // NOP
    if (ctx->pc == 0x1a36ecu) { ctx->pc = 0x1a36f0u; }
}
