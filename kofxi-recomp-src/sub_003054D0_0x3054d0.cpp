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

// Function: sub_003054D0
// Address: 0x3054d0 - 0x3058e0
void sub_003054D0_0x3054d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003054D0_0x3054d0");
#endif

    switch (ctx->pc) {
        case 0x3054f4u: goto label_3054f4;
        case 0x3055b0u: goto label_3055b0;
        case 0x3055dcu: goto label_3055dc;
        case 0x3055e8u: goto label_3055e8;
        case 0x3055fcu: goto label_3055fc;
        case 0x305610u: goto label_305610;
        case 0x305624u: goto label_305624;
        case 0x305634u: goto label_305634;
        case 0x30564cu: goto label_30564c;
        case 0x30568cu: goto label_30568c;
        case 0x3056d4u: goto label_3056d4;
        case 0x3056ecu: goto label_3056ec;
        case 0x3056f8u: goto label_3056f8;
        case 0x305738u: goto label_305738;
        case 0x305754u: goto label_305754;
        case 0x3057c0u: goto label_3057c0;
        case 0x3057d8u: goto label_3057d8;
        case 0x3057f8u: goto label_3057f8;
        case 0x305824u: goto label_305824;
        case 0x305844u: goto label_305844;
        case 0x305854u: goto label_305854;
        case 0x305888u: goto label_305888;
        case 0x3058a4u: goto label_3058a4;
        default: break;
    }

    ctx->pc = 0x3054d0u;

    // 0x3054d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3054d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3054d4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x3054d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x3054d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3054d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3054dc: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x3054dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x3054e0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3054e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3054e4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3054E4u;
    {
        const bool branch_taken_0x3054e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3054e4) {
            ctx->pc = 0x3054F4u;
            goto label_3054f4;
        }
    }
    ctx->pc = 0x3054ECu;
    // 0x3054ec: 0xc053438  jal         func_14D0E0
    ctx->pc = 0x3054ECu;
    SET_GPR_U32(ctx, 31, 0x3054F4u);
    ctx->pc = 0x14D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D0E0u, 0x3054ECu, 0x3054F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054F4u;
label_3054f4:
    // 0x3054f4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3054f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3054f8: 0x8c63d590  lw          $v1, -0x2A70($v1)
    ctx->pc = 0x3054f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956432)));
    // 0x3054fc: 0x546000f4  bnel        $v1, $zero, . + 4 + (0xF4 << 2)
    ctx->pc = 0x3054FCu;
    {
        const bool branch_taken_0x3054fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3054fc) {
            ctx->pc = 0x305500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3054FCu;
            // 0x305500: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3058D0u;
            goto label_3058d0;
        }
    }
    ctx->pc = 0x305504u;
    // 0x305504: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x305504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x305508: 0x90639738  lbu         $v1, -0x68C8($v1)
    ctx->pc = 0x305508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
    // 0x30550c: 0x146000ef  bnez        $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x30550Cu;
    {
        const bool branch_taken_0x30550c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30550c) {
            ctx->pc = 0x3058CCu;
            goto label_3058cc;
        }
    }
    ctx->pc = 0x305514u;
    // 0x305514: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305518: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x305518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x30551c: 0xa0649738  sb          $a0, -0x68C8($v1)
    ctx->pc = 0x30551cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940472), (uint8_t)GPR_U32(ctx, 4));
    // 0x305520: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x305520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x305524: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x305524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x305528: 0x90679780  lbu         $a3, -0x6880($v1)
    ctx->pc = 0x305528u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x30552c: 0x14e60074  bne         $a3, $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x30552Cu;
    {
        const bool branch_taken_0x30552c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x30552c) {
            ctx->pc = 0x305700u;
            goto label_305700;
        }
    }
    ctx->pc = 0x305534u;
    // 0x305534: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305538: 0x904295c8  lbu         $v0, -0x6A38($v0)
    ctx->pc = 0x305538u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940104)));
    // 0x30553c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30553Cu;
    {
        const bool branch_taken_0x30553c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30553c) {
            ctx->pc = 0x30554Cu;
            goto label_30554c;
        }
    }
    ctx->pc = 0x305544u;
    // 0x305544: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305548: 0xa0409738  sb          $zero, -0x68C8($v0)
    ctx->pc = 0x305548u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
label_30554c:
    // 0x30554c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30554cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305550: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x305550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x305554: 0x904395c0  lbu         $v1, -0x6A40($v0)
    ctx->pc = 0x305554u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x305558: 0x50660050  beql        $v1, $a2, . + 4 + (0x50 << 2)
    ctx->pc = 0x305558u;
    {
        const bool branch_taken_0x305558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x305558) {
            ctx->pc = 0x30555Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305558u;
            // 0x30555c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30569Cu;
            goto label_30569c;
        }
    }
    ctx->pc = 0x305560u;
    // 0x305560: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x305560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x305564: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x305564u;
    {
        const bool branch_taken_0x305564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305564) {
            ctx->pc = 0x305654u;
            goto label_305654;
        }
    }
    ctx->pc = 0x30556Cu;
    // 0x30556c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x305570: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x305570u;
    {
        const bool branch_taken_0x305570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305570) {
            ctx->pc = 0x30562Cu;
            goto label_30562c;
        }
    }
    ctx->pc = 0x305578u;
    // 0x305578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30557c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30557Cu;
    {
        const bool branch_taken_0x30557c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30557c) {
            ctx->pc = 0x305608u;
            goto label_305608;
        }
    }
    ctx->pc = 0x305584u;
    // 0x305584: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x305584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x305588: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x305588u;
    {
        const bool branch_taken_0x305588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x305588) {
            ctx->pc = 0x3055F0u;
            goto label_3055f0;
        }
    }
    ctx->pc = 0x305590u;
    // 0x305590: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x305590u;
    {
        const bool branch_taken_0x305590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305590) {
            ctx->pc = 0x3055A0u;
            goto label_3055a0;
        }
    }
    ctx->pc = 0x305598u;
    // 0x305598: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x305598u;
    {
        const bool branch_taken_0x305598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305598u;
        // 0x30559c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305598) {
            ctx->pc = 0x3056E4u;
            goto label_3056e4;
        }
    }
    ctx->pc = 0x3055A0u;
label_3055a0:
    // 0x3055a0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3055a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3055a4: 0x90449748  lbu         $a0, -0x68B8($v0)
    ctx->pc = 0x3055a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x3055a8: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x3055A8u;
    SET_GPR_U32(ctx, 31, 0x3055B0u);
    ctx->pc = 0x3055ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3055A8u;
    // 0x3055ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x3055A8u, 0x3055B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3055B0u;
label_3055b0:
    // 0x3055b0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3055B0u;
    {
        const bool branch_taken_0x3055b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3055b0) {
            ctx->pc = 0x3055B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3055B0u;
            // 0x3055b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3055D4u;
            goto label_3055d4;
        }
    }
    ctx->pc = 0x3055B8u;
    // 0x3055b8: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3055b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x3055bc: 0x8c421d40  lw          $v0, 0x1D40($v0)
    ctx->pc = 0x3055bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7488)));
    // 0x3055c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3055C0u;
    {
        const bool branch_taken_0x3055c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3055c0) {
            ctx->pc = 0x3055D0u;
            goto label_3055d0;
        }
    }
    ctx->pc = 0x3055C8u;
    // 0x3055c8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3055c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3055cc: 0xa0409738  sb          $zero, -0x68C8($v0)
    ctx->pc = 0x3055ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
label_3055d0:
    // 0x3055d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3055d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3055d4:
    // 0x3055d4: 0xc0ce64c  jal         func_339930
    ctx->pc = 0x3055D4u;
    SET_GPR_U32(ctx, 31, 0x3055DCu);
    ctx->pc = 0x339930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339930u, 0x3055D4u, 0x3055DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3055DCu;
label_3055dc:
    // 0x3055dc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3055dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3055e0: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x3055E0u;
    SET_GPR_U32(ctx, 31, 0x3055E8u);
    ctx->pc = 0x3055E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3055E0u;
    // 0x3055e4: 0x24847e70  addiu       $a0, $a0, 0x7E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3055E0u, 0x3055E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3055E8u;
label_3055e8:
    // 0x3055e8: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x3055E8u;
    {
        const bool branch_taken_0x3055e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3055e8) {
            ctx->pc = 0x3058A4u;
            goto label_3058a4;
        }
    }
    ctx->pc = 0x3055F0u;
label_3055f0:
    // 0x3055f0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3055f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3055f4: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x3055F4u;
    SET_GPR_U32(ctx, 31, 0x3055FCu);
    ctx->pc = 0x3055F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3055F4u;
    // 0x3055f8: 0x2484c510  addiu       $a0, $a0, -0x3AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3055F4u, 0x3055FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3055FCu;
label_3055fc:
    // 0x3055fc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3055fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x305600: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x305600u;
    {
        const bool branch_taken_0x305600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305600u;
        // 0x305604: 0xa060e818  sb          $zero, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305600) {
            ctx->pc = 0x3058A4u;
            goto label_3058a4;
        }
    }
    ctx->pc = 0x305608u;
label_305608:
    // 0x305608: 0xc053438  jal         func_14D0E0
    ctx->pc = 0x305608u;
    SET_GPR_U32(ctx, 31, 0x305610u);
    ctx->pc = 0x14D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D0E0u, 0x305608u, 0x305610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305610u;
label_305610:
    // 0x305610: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305614: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x305614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x305618: 0x248470a0  addiu       $a0, $a0, 0x70A0
    ctx->pc = 0x305618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28832));
    // 0x30561c: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x30561Cu;
    SET_GPR_U32(ctx, 31, 0x305624u);
    ctx->pc = 0x305620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30561Cu;
    // 0x305620: 0xa0409730  sb          $zero, -0x68D0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x30561Cu, 0x305624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305624u;
label_305624:
    // 0x305624: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x305624u;
    {
        const bool branch_taken_0x305624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305624) {
            ctx->pc = 0x3058A4u;
            goto label_3058a4;
        }
    }
    ctx->pc = 0x30562Cu;
label_30562c:
    // 0x30562c: 0xc053438  jal         func_14D0E0
    ctx->pc = 0x30562Cu;
    SET_GPR_U32(ctx, 31, 0x305634u);
    ctx->pc = 0x14D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D0E0u, 0x30562Cu, 0x305634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305634u;
label_305634:
    // 0x305634: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x305634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x305638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30563c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30563cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305640: 0x248470a0  addiu       $a0, $a0, 0x70A0
    ctx->pc = 0x305640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28832));
    // 0x305644: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x305644u;
    SET_GPR_U32(ctx, 31, 0x30564Cu);
    ctx->pc = 0x305648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305644u;
    // 0x305648: 0xa0439730  sb          $v1, -0x68D0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x305644u, 0x30564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30564Cu;
label_30564c:
    // 0x30564c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x30564Cu;
    {
        const bool branch_taken_0x30564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30564c) {
            ctx->pc = 0x3058A4u;
            goto label_3058a4;
        }
    }
    ctx->pc = 0x305654u;
label_305654:
    // 0x305654: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305658: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x305658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x30565c: 0xa0409730  sb          $zero, -0x68D0($v0)
    ctx->pc = 0x30565cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 0));
    // 0x305660: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x305660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x305664: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305668: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x305668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30566c: 0xac60e8e8  sw          $zero, -0x1718($v1)
    ctx->pc = 0x30566cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961384), GPR_U32(ctx, 0));
    // 0x305670: 0x2484ba50  addiu       $a0, $a0, -0x45B0
    ctx->pc = 0x305670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949456));
    // 0x305674: 0xa0409738  sb          $zero, -0x68C8($v0)
    ctx->pc = 0x305674u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    // 0x305678: 0x24a53298  addiu       $a1, $a1, 0x3298
    ctx->pc = 0x305678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12952));
    // 0x30567c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30567cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x305680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305684: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x305684u;
    SET_GPR_U32(ctx, 31, 0x30568Cu);
    ctx->pc = 0x305688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305684u;
    // 0x305688: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x305684u, 0x30568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30568Cu;
label_30568c:
    // 0x30568c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305690: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x305690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x305694: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x305694u;
    {
        const bool branch_taken_0x305694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305694u;
        // 0x305698: 0xac64d590  sw          $a0, -0x2A70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956432), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305694) {
            ctx->pc = 0x3058A4u;
            goto label_3058a4;
        }
    }
    ctx->pc = 0x30569Cu;
label_30569c:
    // 0x30569c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30569cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3056a0: 0xa0439730  sb          $v1, -0x68D0($v0)
    ctx->pc = 0x3056a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 3));
    // 0x3056a4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3056a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3056a8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3056a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3056ac: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3056acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3056b0: 0xac40e8e8  sw          $zero, -0x1718($v0)
    ctx->pc = 0x3056b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 0));
    // 0x3056b4: 0x2484ba50  addiu       $a0, $a0, -0x45B0
    ctx->pc = 0x3056b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949456));
    // 0x3056b8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3056b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3056bc: 0x24a53298  addiu       $a1, $a1, 0x3298
    ctx->pc = 0x3056bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12952));
    // 0x3056c0: 0xa0409738  sb          $zero, -0x68C8($v0)
    ctx->pc = 0x3056c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
    // 0x3056c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3056c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3056c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3056cc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x3056CCu;
    SET_GPR_U32(ctx, 31, 0x3056D4u);
    ctx->pc = 0x3056D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056CCu;
    // 0x3056d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x3056CCu, 0x3056D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056D4u;
label_3056d4:
    // 0x3056d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3056d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3056d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3056d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3056dc: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3056DCu;
    {
        const bool branch_taken_0x3056dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3056E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3056DCu;
        // 0x3056e0: 0xac64d590  sw          $a0, -0x2A70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956432), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3056dc) {
            ctx->pc = 0x3058A4u;
            goto label_3058a4;
        }
    }
    ctx->pc = 0x3056E4u;
label_3056e4:
    // 0x3056e4: 0xc0ce64c  jal         func_339930
    ctx->pc = 0x3056E4u;
    SET_GPR_U32(ctx, 31, 0x3056ECu);
    ctx->pc = 0x339930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339930u, 0x3056E4u, 0x3056ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056ECu;
label_3056ec:
    // 0x3056ec: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3056ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3056f0: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x3056F0u;
    SET_GPR_U32(ctx, 31, 0x3056F8u);
    ctx->pc = 0x3056F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3056F0u;
    // 0x3056f4: 0x24847e70  addiu       $a0, $a0, 0x7E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3056F0u, 0x3056F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3056F8u;
label_3056f8:
    // 0x3056f8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3056F8u;
    {
        const bool branch_taken_0x3056f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3056f8) {
            ctx->pc = 0x3058A4u;
            goto label_3058a4;
        }
    }
    ctx->pc = 0x305700u;
label_305700:
    // 0x305700: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x305700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x305704: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x305704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x305708: 0x906395c0  lbu         $v1, -0x6A40($v1)
    ctx->pc = 0x305708u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940096)));
    // 0x30570c: 0x1065000c  beq         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x30570Cu;
    {
        const bool branch_taken_0x30570c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x30570c) {
            ctx->pc = 0x305740u;
            goto label_305740;
        }
    }
    ctx->pc = 0x305714u;
    // 0x305714: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305714u;
    {
        const bool branch_taken_0x305714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x305714) {
            ctx->pc = 0x305724u;
            goto label_305724;
        }
    }
    ctx->pc = 0x30571Cu;
    // 0x30571c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30571Cu;
    {
        const bool branch_taken_0x30571c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30571Cu;
        // 0x305720: 0x3c03009f  lui         $v1, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30571c) {
            ctx->pc = 0x30575Cu;
            goto label_30575c;
        }
    }
    ctx->pc = 0x305724u;
label_305724:
    // 0x305724: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305728: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x305728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x30572c: 0x248470a0  addiu       $a0, $a0, 0x70A0
    ctx->pc = 0x30572cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28832));
    // 0x305730: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x305730u;
    SET_GPR_U32(ctx, 31, 0x305738u);
    ctx->pc = 0x305734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305730u;
    // 0x305734: 0xa0409730  sb          $zero, -0x68D0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x305730u, 0x305738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305738u;
label_305738:
    // 0x305738: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x305738u;
    {
        const bool branch_taken_0x305738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305738) {
            ctx->pc = 0x3058CCu;
            goto label_3058cc;
        }
    }
    ctx->pc = 0x305740u;
label_305740:
    // 0x305740: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305744: 0xa0449730  sb          $a0, -0x68D0($v0)
    ctx->pc = 0x305744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 4));
    // 0x305748: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x305748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x30574c: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x30574Cu;
    SET_GPR_U32(ctx, 31, 0x305754u);
    ctx->pc = 0x305750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30574Cu;
    // 0x305750: 0x248470a0  addiu       $a0, $a0, 0x70A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x30574Cu, 0x305754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305754u;
label_305754:
    // 0x305754: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x305754u;
    {
        const bool branch_taken_0x305754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305754) {
            ctx->pc = 0x3058CCu;
            goto label_3058cc;
        }
    }
    ctx->pc = 0x30575Cu;
label_30575c:
    // 0x30575c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x30575cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x305760: 0x10e50027  beq         $a3, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x305760u;
    {
        const bool branch_taken_0x305760 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x305764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305760u;
        // 0x305764: 0xa0609730  sb          $zero, -0x68D0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294940464), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305760) {
            ctx->pc = 0x305800u;
            goto label_305800;
        }
    }
    ctx->pc = 0x305768u;
    // 0x305768: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x305768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30576c: 0x50e20017  beql        $a3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30576Cu;
    {
        const bool branch_taken_0x30576c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x30576c) {
            ctx->pc = 0x305770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30576Cu;
            // 0x305770: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3057CCu;
            goto label_3057cc;
        }
    }
    ctx->pc = 0x305774u;
    // 0x305774: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x305774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305778: 0x10e20013  beq         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x305778u;
    {
        const bool branch_taken_0x305778 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x305778) {
            ctx->pc = 0x3057C8u;
            goto label_3057c8;
        }
    }
    ctx->pc = 0x305780u;
    // 0x305780: 0x10e40011  beq         $a3, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x305780u;
    {
        const bool branch_taken_0x305780 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x305780) {
            ctx->pc = 0x3057C8u;
            goto label_3057c8;
        }
    }
    ctx->pc = 0x305788u;
    // 0x305788: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x305788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30578c: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30578Cu;
    {
        const bool branch_taken_0x30578c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x30578c) {
            ctx->pc = 0x30579Cu;
            goto label_30579c;
        }
    }
    ctx->pc = 0x305794u;
    // 0x305794: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x305794u;
    {
        const bool branch_taken_0x305794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305794u;
        // 0x305798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305794) {
            ctx->pc = 0x30584Cu;
            goto label_30584c;
        }
    }
    ctx->pc = 0x30579Cu;
label_30579c:
    // 0x30579c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3057a0: 0x9442ea2e  lhu         $v0, -0x15D2($v0)
    ctx->pc = 0x3057a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961710)));
    // 0x3057a4: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3057A4u;
    {
        const bool branch_taken_0x3057a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x3057a4) {
            ctx->pc = 0x3057B4u;
            goto label_3057b4;
        }
    }
    ctx->pc = 0x3057ACu;
    // 0x3057ac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3057acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3057b0: 0xa0449730  sb          $a0, -0x68D0($v0)
    ctx->pc = 0x3057b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 4));
label_3057b4:
    // 0x3057b4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3057b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3057b8: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x3057B8u;
    SET_GPR_U32(ctx, 31, 0x3057C0u);
    ctx->pc = 0x3057BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057B8u;
    // 0x3057bc: 0x24845a00  addiu       $a0, $a0, 0x5A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3057B8u, 0x3057C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057C0u;
label_3057c0:
    // 0x3057c0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3057C0u;
    {
        const bool branch_taken_0x3057c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3057c0) {
            ctx->pc = 0x305888u;
            goto label_305888;
        }
    }
    ctx->pc = 0x3057C8u;
label_3057c8:
    // 0x3057c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3057c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3057cc:
    // 0x3057cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3057ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3057d0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x3057D0u;
    SET_GPR_U32(ctx, 31, 0x3057D8u);
    ctx->pc = 0x3057D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057D0u;
    // 0x3057d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x3057D0u, 0x3057D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057D8u;
label_3057d8:
    // 0x3057d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3057D8u;
    {
        const bool branch_taken_0x3057d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3057d8) {
            ctx->pc = 0x3057ECu;
            goto label_3057ec;
        }
    }
    ctx->pc = 0x3057E0u;
    // 0x3057e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3057e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3057e4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3057e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3057e8: 0xa0439730  sb          $v1, -0x68D0($v0)
    ctx->pc = 0x3057e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 3));
label_3057ec:
    // 0x3057ec: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3057ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3057f0: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x3057F0u;
    SET_GPR_U32(ctx, 31, 0x3057F8u);
    ctx->pc = 0x3057F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057F0u;
    // 0x3057f4: 0x24846830  addiu       $a0, $a0, 0x6830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3057F0u, 0x3057F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057F8u;
label_3057f8:
    // 0x3057f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3057F8u;
    {
        const bool branch_taken_0x3057f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3057f8) {
            ctx->pc = 0x305888u;
            goto label_305888;
        }
    }
    ctx->pc = 0x305800u;
label_305800:
    // 0x305800: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x305800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x305804: 0x9063bedb  lbu         $v1, -0x4125($v1)
    ctx->pc = 0x305804u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950619)));
    // 0x305808: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x305808u;
    {
        const bool branch_taken_0x305808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305808) {
            ctx->pc = 0x30580Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305808u;
            // 0x30580c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30581Cu;
            goto label_30581c;
        }
    }
    ctx->pc = 0x305810u;
    // 0x305810: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x305810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x305814: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x305814u;
    {
        const bool branch_taken_0x305814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305814u;
        // 0x305818: 0xa0609738  sb          $zero, -0x68C8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294940472), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305814) {
            ctx->pc = 0x3058CCu;
            goto label_3058cc;
        }
    }
    ctx->pc = 0x30581Cu;
label_30581c:
    // 0x30581c: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x30581Cu;
    SET_GPR_U32(ctx, 31, 0x305824u);
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x30581Cu, 0x305824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305824u;
label_305824:
    // 0x305824: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x305824u;
    {
        const bool branch_taken_0x305824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305824) {
            ctx->pc = 0x305838u;
            goto label_305838;
        }
    }
    ctx->pc = 0x30582Cu;
    // 0x30582c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30582cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305830: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305834: 0xa0439730  sb          $v1, -0x68D0($v0)
    ctx->pc = 0x305834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 3));
label_305838:
    // 0x305838: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x305838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x30583c: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x30583Cu;
    SET_GPR_U32(ctx, 31, 0x305844u);
    ctx->pc = 0x305840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30583Cu;
    // 0x305840: 0x248461f0  addiu       $a0, $a0, 0x61F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x30583Cu, 0x305844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305844u;
label_305844:
    // 0x305844: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x305844u;
    {
        const bool branch_taken_0x305844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305844) {
            ctx->pc = 0x305888u;
            goto label_305888;
        }
    }
    ctx->pc = 0x30584Cu;
label_30584c:
    // 0x30584c: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x30584Cu;
    SET_GPR_U32(ctx, 31, 0x305854u);
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x30584Cu, 0x305854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305854u;
label_305854:
    // 0x305854: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x305854u;
    {
        const bool branch_taken_0x305854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305854) {
            ctx->pc = 0x30587Cu;
            goto label_30587c;
        }
    }
    ctx->pc = 0x30585Cu;
    // 0x30585c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30585cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x305860: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x305860u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x305864: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x305864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x305868: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x305868u;
    {
        const bool branch_taken_0x305868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305868) {
            ctx->pc = 0x30587Cu;
            goto label_30587c;
        }
    }
    ctx->pc = 0x305870u;
    // 0x305870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305874: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x305878: 0xa0439730  sb          $v1, -0x68D0($v0)
    ctx->pc = 0x305878u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940464), (uint8_t)GPR_U32(ctx, 3));
label_30587c:
    // 0x30587c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x30587cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x305880: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x305880u;
    SET_GPR_U32(ctx, 31, 0x305888u);
    ctx->pc = 0x305884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305880u;
    // 0x305884: 0x24845df0  addiu       $a0, $a0, 0x5DF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x305880u, 0x305888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305888u;
label_305888:
    // 0x305888: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x30588c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x30588cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x305890: 0xac40e8e8  sw          $zero, -0x1718($v0)
    ctx->pc = 0x305890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 0));
    // 0x305894: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x305898: 0xac60e8f0  sw          $zero, -0x1710($v1)
    ctx->pc = 0x305898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961392), GPR_U32(ctx, 0));
    // 0x30589c: 0xc0cc0cc  jal         func_330330
    ctx->pc = 0x30589Cu;
    SET_GPR_U32(ctx, 31, 0x3058A4u);
    ctx->pc = 0x3058A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30589Cu;
    // 0x3058a0: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330330u, 0x30589Cu, 0x3058A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3058A4u;
label_3058a4:
    // 0x3058a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3058a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3058a8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3058a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3058ac: 0x9466ea22  lhu         $a2, -0x15DE($v1)
    ctx->pc = 0x3058acu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x3058b0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3058b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3058b4: 0x30c6fff7  andi        $a2, $a2, 0xFFF7
    ctx->pc = 0x3058b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65527);
    // 0x3058b8: 0x9465ea2e  lhu         $a1, -0x15D2($v1)
    ctx->pc = 0x3058b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961710)));
    // 0x3058bc: 0xa486ea22  sh          $a2, -0x15DE($a0)
    ctx->pc = 0x3058bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294961698), (uint16_t)GPR_U32(ctx, 6));
    // 0x3058c0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3058c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3058c4: 0x30a4fff7  andi        $a0, $a1, 0xFFF7
    ctx->pc = 0x3058c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65527);
    // 0x3058c8: 0xa464ea2e  sh          $a0, -0x15D2($v1)
    ctx->pc = 0x3058c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961710), (uint16_t)GPR_U32(ctx, 4));
label_3058cc:
    // 0x3058cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3058ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3058d0:
    // 0x3058d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3058D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3058D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3058D0u;
        // 0x3058d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3058D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3058D8u;
    // 0x3058d8: 0x0  nop
    ctx->pc = 0x3058d8u;
    // NOP
    // 0x3058dc: 0x0  nop
    ctx->pc = 0x3058dcu;
    // NOP
    if (ctx->pc == 0x3058dcu) { ctx->pc = 0x3058e0u; }
}
