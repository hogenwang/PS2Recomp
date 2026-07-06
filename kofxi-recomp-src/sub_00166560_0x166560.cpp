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

// Function: sub_00166560
// Address: 0x166560 - 0x166670
void sub_00166560_0x166560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166560_0x166560");
#endif

    switch (ctx->pc) {
        case 0x1665a0u: goto label_1665a0;
        case 0x1665acu: goto label_1665ac;
        case 0x1665c0u: goto label_1665c0;
        case 0x1665e8u: goto label_1665e8;
        default: break;
    }

    ctx->pc = 0x166560u;

    // 0x166560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166564: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x166564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x166568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x166568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16656c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x16656cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x166570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x166574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16657c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16657cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166584: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x166584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x166588: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x166588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16658c: 0x944503ba  lhu         $a1, 0x3BA($v0)
    ctx->pc = 0x16658cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 954)));
    // 0x166590: 0x944603be  lhu         $a2, 0x3BE($v0)
    ctx->pc = 0x166590u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 958)));
    // 0x166594: 0x904703c2  lbu         $a3, 0x3C2($v0)
    ctx->pc = 0x166594u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 962)));
    // 0x166598: 0xc0599fc  jal         func_1667F0
    ctx->pc = 0x166598u;
    SET_GPR_U32(ctx, 31, 0x1665A0u);
    ctx->pc = 0x16659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166598u;
    // 0x16659c: 0x245203ba  addiu       $s2, $v0, 0x3BA (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 954));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1667F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667F0u, 0x166598u, 0x1665A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665A0u;
label_1665a0:
    // 0x1665a0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1665a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1665a4: 0xc059ae8  jal         func_166BA0
    ctx->pc = 0x1665A4u;
    SET_GPR_U32(ctx, 31, 0x1665ACu);
    ctx->pc = 0x1665A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665A4u;
    // 0x1665a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166BA0u, 0x1665A4u, 0x1665ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665ACu;
label_1665ac:
    // 0x1665ac: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x1665acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1665b0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1665b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1665b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1665b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1665b8: 0xc059318  jal         func_164C60
    ctx->pc = 0x1665B8u;
    SET_GPR_U32(ctx, 31, 0x1665C0u);
    ctx->pc = 0x1665BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665B8u;
    // 0x1665bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x1665B8u, 0x1665C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665C0u;
label_1665c0:
    // 0x1665c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1665C0u;
    {
        const bool branch_taken_0x1665c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1665c0) {
            ctx->pc = 0x1665C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1665C0u;
            // 0x1665c4: 0x862204fe  lh          $v0, 0x4FE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1278)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1665D0u;
            goto label_1665d0;
        }
    }
    ctx->pc = 0x1665C8u;
    // 0x1665c8: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x1665c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x1665cc: 0x862204fe  lh          $v0, 0x4FE($s1)
    ctx->pc = 0x1665ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1278)));
label_1665d0:
    // 0x1665d0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1665D0u;
    {
        const bool branch_taken_0x1665d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1665d0) {
            ctx->pc = 0x1665D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1665D0u;
            // 0x1665d4: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1665E0u;
            goto label_1665e0;
        }
    }
    ctx->pc = 0x1665D8u;
    // 0x1665d8: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x1665d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x1665dc: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x1665dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1665e0:
    // 0x1665e0: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x1665E0u;
    SET_GPR_U32(ctx, 31, 0x1665E8u);
    ctx->pc = 0x18ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADE0u, 0x1665E0u, 0x1665E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665E8u;
label_1665e8:
    // 0x1665e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1665e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1665ec: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1665ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1665f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1665F0u;
    {
        const bool branch_taken_0x1665f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1665f0) {
            ctx->pc = 0x1665F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1665F0u;
            // 0x1665f4: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16660Cu;
            goto label_16660c;
        }
    }
    ctx->pc = 0x1665F8u;
    // 0x1665f8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1665f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1665fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1665FCu;
    {
        const bool branch_taken_0x1665fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1665fc) {
            ctx->pc = 0x166608u;
            goto label_166608;
        }
    }
    ctx->pc = 0x166604u;
    // 0x166604: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x166604u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_166608:
    // 0x166608: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x166608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_16660c:
    // 0x16660c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16660Cu;
    {
        const bool branch_taken_0x16660c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16660c) {
            ctx->pc = 0x166610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16660Cu;
            // 0x166610: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166628u;
            goto label_166628;
        }
    }
    ctx->pc = 0x166614u;
    // 0x166614: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x166614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x166618: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x166618u;
    {
        const bool branch_taken_0x166618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166618) {
            ctx->pc = 0x166624u;
            goto label_166624;
        }
    }
    ctx->pc = 0x166620u;
    // 0x166620: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x166620u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_166624:
    // 0x166624: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x166624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_166628:
    // 0x166628: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x166628u;
    {
        const bool branch_taken_0x166628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166628) {
            ctx->pc = 0x16662Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166628u;
            // 0x16662c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16664Cu;
            goto label_16664c;
        }
    }
    ctx->pc = 0x166630u;
    // 0x166630: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x166630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x166634: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x166634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x166638: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x166638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x16663c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16663Cu;
    {
        const bool branch_taken_0x16663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16663c) {
            ctx->pc = 0x166648u;
            goto label_166648;
        }
    }
    ctx->pc = 0x166644u;
    // 0x166644: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x166644u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_166648:
    // 0x166648: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x166648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16664c:
    // 0x16664c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16664cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16665c: 0x3e00008  jr          $ra
    ctx->pc = 0x16665Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16665Cu;
        // 0x166660: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16665Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166664u;
    // 0x166664: 0x0  nop
    ctx->pc = 0x166664u;
    // NOP
    // 0x166668: 0x0  nop
    ctx->pc = 0x166668u;
    // NOP
    // 0x16666c: 0x0  nop
    ctx->pc = 0x16666cu;
    // NOP
}
