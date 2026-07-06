#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD560
// Address: 0x2ad560 - 0x2ad5d0
void sub_002AD560_0x2ad560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD560_0x2ad560");
#endif

    switch (ctx->pc) {
        case 0x2ad560u: goto label_2ad560;
        case 0x2ad564u: goto label_2ad564;
        case 0x2ad568u: goto label_2ad568;
        case 0x2ad56cu: goto label_2ad56c;
        case 0x2ad570u: goto label_2ad570;
        case 0x2ad574u: goto label_2ad574;
        case 0x2ad578u: goto label_2ad578;
        case 0x2ad57cu: goto label_2ad57c;
        case 0x2ad580u: goto label_2ad580;
        case 0x2ad584u: goto label_2ad584;
        case 0x2ad588u: goto label_2ad588;
        case 0x2ad58cu: goto label_2ad58c;
        case 0x2ad590u: goto label_2ad590;
        case 0x2ad594u: goto label_2ad594;
        case 0x2ad598u: goto label_2ad598;
        case 0x2ad59cu: goto label_2ad59c;
        case 0x2ad5a0u: goto label_2ad5a0;
        case 0x2ad5a4u: goto label_2ad5a4;
        case 0x2ad5a8u: goto label_2ad5a8;
        case 0x2ad5acu: goto label_2ad5ac;
        case 0x2ad5b0u: goto label_2ad5b0;
        case 0x2ad5b4u: goto label_2ad5b4;
        case 0x2ad5b8u: goto label_2ad5b8;
        case 0x2ad5bcu: goto label_2ad5bc;
        case 0x2ad5c0u: goto label_2ad5c0;
        case 0x2ad5c4u: goto label_2ad5c4;
        case 0x2ad5c8u: goto label_2ad5c8;
        case 0x2ad5ccu: goto label_2ad5cc;
        default: break;
    }

    ctx->pc = 0x2ad560u;

label_2ad560:
    // 0x2ad560: 0x6484fffe  daddiu      $a0, $a0, -0x2
    ctx->pc = 0x2ad560u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967294);
label_2ad564:
    // 0x2ad564: 0x2c820031  sltiu       $v0, $a0, 0x31
    ctx->pc = 0x2ad564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
label_2ad568:
    // 0x2ad568: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2ad56c:
    if (ctx->pc == 0x2AD56Cu) {
        ctx->pc = 0x2AD56Cu;
            // 0x2ad56c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x2AD570u;
        goto label_2ad570;
    }
    ctx->pc = 0x2AD568u;
    {
        const bool branch_taken_0x2ad568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD568u;
            // 0x2ad56c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad568) {
            ctx->pc = 0x2AD5C8u;
            goto label_2ad5c8;
        }
    }
    ctx->pc = 0x2AD570u;
label_2ad570:
    // 0x2ad570: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ad570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_2ad574:
    // 0x2ad574: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ad574u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ad578:
    // 0x2ad578: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x2ad578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
label_2ad57c:
    // 0x2ad57c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ad57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ad580:
    // 0x2ad580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ad580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ad584:
    // 0x2ad584: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ad584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ad588:
    // 0x2ad588: 0x800008  jr          $a0
label_2ad58c:
    if (ctx->pc == 0x2AD58Cu) {
        ctx->pc = 0x2AD590u;
        goto label_2ad590;
    }
    ctx->pc = 0x2AD588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD590u;
label_2ad590:
    // 0x2ad590: 0x3e00008  jr          $ra
label_2ad594:
    if (ctx->pc == 0x2AD594u) {
        ctx->pc = 0x2AD594u;
            // 0x2ad594: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2AD598u;
        goto label_2ad598;
    }
    ctx->pc = 0x2AD590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD590u;
            // 0x2ad594: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD598u;
label_2ad598:
    // 0x2ad598: 0x3e00008  jr          $ra
label_2ad59c:
    if (ctx->pc == 0x2AD59Cu) {
        ctx->pc = 0x2AD59Cu;
            // 0x2ad59c: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x2AD5A0u;
        goto label_2ad5a0;
    }
    ctx->pc = 0x2AD598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD598u;
            // 0x2ad59c: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD5A0u;
label_2ad5a0:
    // 0x2ad5a0: 0x3e00008  jr          $ra
label_2ad5a4:
    if (ctx->pc == 0x2AD5A4u) {
        ctx->pc = 0x2AD5A4u;
            // 0x2ad5a4: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->pc = 0x2AD5A8u;
        goto label_2ad5a8;
    }
    ctx->pc = 0x2AD5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5A0u;
            // 0x2ad5a4: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD5A8u;
label_2ad5a8:
    // 0x2ad5a8: 0x3e00008  jr          $ra
label_2ad5ac:
    if (ctx->pc == 0x2AD5ACu) {
        ctx->pc = 0x2AD5ACu;
            // 0x2ad5ac: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x2AD5B0u;
        goto label_2ad5b0;
    }
    ctx->pc = 0x2AD5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5A8u;
            // 0x2ad5ac: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD5B0u;
label_2ad5b0:
    // 0x2ad5b0: 0x3e00008  jr          $ra
label_2ad5b4:
    if (ctx->pc == 0x2AD5B4u) {
        ctx->pc = 0x2AD5B4u;
            // 0x2ad5b4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x2AD5B8u;
        goto label_2ad5b8;
    }
    ctx->pc = 0x2AD5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5B0u;
            // 0x2ad5b4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD5B8u;
label_2ad5b8:
    // 0x2ad5b8: 0x3e00008  jr          $ra
label_2ad5bc:
    if (ctx->pc == 0x2AD5BCu) {
        ctx->pc = 0x2AD5BCu;
            // 0x2ad5bc: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2AD5C0u;
        goto label_2ad5c0;
    }
    ctx->pc = 0x2AD5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5B8u;
            // 0x2ad5bc: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD5C0u;
label_2ad5c0:
    // 0x2ad5c0: 0x3e00008  jr          $ra
label_2ad5c4:
    if (ctx->pc == 0x2AD5C4u) {
        ctx->pc = 0x2AD5C4u;
            // 0x2ad5c4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2AD5C8u;
        goto label_2ad5c8;
    }
    ctx->pc = 0x2AD5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5C0u;
            // 0x2ad5c4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD5C8u;
label_2ad5c8:
    // 0x2ad5c8: 0x3e00008  jr          $ra
label_2ad5cc:
    if (ctx->pc == 0x2AD5CCu) {
        ctx->pc = 0x2AD5CCu;
            // 0x2ad5cc: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x2AD5D0u;
        goto label_fallthrough_0x2ad5c8;
    }
    ctx->pc = 0x2AD5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD5C8u;
            // 0x2ad5cc: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ad5c8:
    ctx->pc = 0x2AD5D0u;
    ctx->pc = 0x2ad5d0u;
}
