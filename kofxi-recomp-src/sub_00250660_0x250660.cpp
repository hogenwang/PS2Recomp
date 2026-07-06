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

// Function: sub_00250660
// Address: 0x250660 - 0x250b28
void sub_00250660_0x250660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250660_0x250660");
#endif

    switch (ctx->pc) {
        case 0x2506a0u: goto label_2506a0;
        case 0x2506b4u: goto label_2506b4;
        case 0x2506dcu: goto label_2506dc;
        case 0x250734u: goto label_250734;
        case 0x2507ccu: goto label_2507cc;
        case 0x2507ecu: goto label_2507ec;
        case 0x25080cu: goto label_25080c;
        case 0x25082cu: goto label_25082c;
        case 0x25084cu: goto label_25084c;
        case 0x25086cu: goto label_25086c;
        case 0x25088cu: goto label_25088c;
        case 0x2508acu: goto label_2508ac;
        case 0x2508d4u: goto label_2508d4;
        case 0x2508f4u: goto label_2508f4;
        case 0x250918u: goto label_250918;
        case 0x250978u: goto label_250978;
        case 0x2509d4u: goto label_2509d4;
        case 0x2509ecu: goto label_2509ec;
        case 0x250a0cu: goto label_250a0c;
        case 0x250a30u: goto label_250a30;
        case 0x250a84u: goto label_250a84;
        case 0x250adcu: goto label_250adc;
        case 0x250b00u: goto label_250b00;
        default: break;
    }

    ctx->pc = 0x250660u;

    // 0x250660: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x250660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x250664: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x250664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x250668: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x250668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x25066c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25066cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250670: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x250670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x250674: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x250674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250678: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x250678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x25067c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25067cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250680: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x250680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x250684: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x250684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x250688: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x250688u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x25068c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x25068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x250690: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x250690u;
    {
        const bool branch_taken_0x250690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250690u;
        // 0x250694: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250690) {
            ctx->pc = 0x2506BCu;
            goto label_2506bc;
        }
    }
    ctx->pc = 0x250698u;
    // 0x250698: 0xc08c84a  jal         func_232128
    ctx->pc = 0x250698u;
    SET_GPR_U32(ctx, 31, 0x2506A0u);
    ctx->pc = 0x25069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250698u;
    // 0x25069c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232128u, 0x250698u, 0x2506A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2506A0u;
label_2506a0:
    // 0x2506a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2506a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2506a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2506a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2506a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2506a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2506ac: 0xc08c5fe  jal         func_2317F8
    ctx->pc = 0x2506ACu;
    SET_GPR_U32(ctx, 31, 0x2506B4u);
    ctx->pc = 0x2506B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2506ACu;
    // 0x2506b0: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317F8u, 0x2506ACu, 0x2506B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2506B4u;
label_2506b4:
    // 0x2506b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2506b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2506b8: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x2506b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2506bc:
    // 0x2506bc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2506bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2506c0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2506c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2506c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2506C4u;
    {
        const bool branch_taken_0x2506c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2506C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506C4u;
        // 0x2506c8: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506c4) {
            ctx->pc = 0x2506E8u;
            goto label_2506e8;
        }
    }
    ctx->pc = 0x2506CCu;
    // 0x2506cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2506ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2506d0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2506d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2506d4: 0xc08c5fe  jal         func_2317F8
    ctx->pc = 0x2506D4u;
    SET_GPR_U32(ctx, 31, 0x2506DCu);
    ctx->pc = 0x2506D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2506D4u;
    // 0x2506d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317F8u, 0x2506D4u, 0x2506DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2506DCu;
label_2506dc:
    // 0x2506dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2506dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2506e0: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x2506e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2506e4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2506e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2506e8:
    // 0x2506e8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2506e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2506ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2506ECu;
    {
        const bool branch_taken_0x2506ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2506F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506ECu;
        // 0x2506f0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506ec) {
            ctx->pc = 0x250738u;
            goto label_250738;
        }
    }
    ctx->pc = 0x2506F4u;
    // 0x2506f4: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x2506f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2506f8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2506f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2506fc: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x2506fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x250700: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x250700u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x250704: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x250704u;
    {
        const bool branch_taken_0x250704 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x250708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250704u;
        // 0x250708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250704) {
            ctx->pc = 0x250710u;
            goto label_250710;
        }
    }
    ctx->pc = 0x25070Cu;
    // 0x25070c: 0x94e2002c  lhu         $v0, 0x2C($a3)
    ctx->pc = 0x25070cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 44)));
label_250710:
    // 0x250710: 0xa7a20012  sh          $v0, 0x12($sp)
    ctx->pc = 0x250710u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x250714: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x250714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x250718: 0xa3a00017  sb          $zero, 0x17($sp)
    ctx->pc = 0x250718u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x25071c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x25071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x250720: 0xa3a00016  sb          $zero, 0x16($sp)
    ctx->pc = 0x250720u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x250724: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x250724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x250728: 0xa3a00015  sb          $zero, 0x15($sp)
    ctx->pc = 0x250728u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x25072c: 0xc08c5fe  jal         func_2317F8
    ctx->pc = 0x25072Cu;
    SET_GPR_U32(ctx, 31, 0x250734u);
    ctx->pc = 0x250730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25072Cu;
    // 0x250730: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317F8u, 0x25072Cu, 0x250734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250734u;
label_250734:
    // 0x250734: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x250734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_250738:
    // 0x250738: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x250738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25073c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x25073cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250740: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x250740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250744: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x250744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250748: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x250748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25074c: 0x3e00008  jr          $ra
    ctx->pc = 0x25074Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25074Cu;
        // 0x250750: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25074Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250754u;
    // 0x250754: 0x0  nop
    ctx->pc = 0x250754u;
    // NOP
    // 0x250758: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x250758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25075c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x25075cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250760: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x250760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x250764: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x250764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250768: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x250768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25076c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x25076cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250770: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x250770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x250774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250778: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250778u;
    {
        const bool branch_taken_0x250778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250778u;
        // 0x25077c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250778) {
            ctx->pc = 0x250788u;
            goto label_250788;
        }
    }
    ctx->pc = 0x250780u;
    // 0x250780: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x250780u;
    {
        const bool branch_taken_0x250780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250780u;
        // 0x250784: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250780) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x250788u;
label_250788:
    // 0x250788: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x250788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25078c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x25078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x250790: 0x2c830013  sltiu       $v1, $a0, 0x13
    ctx->pc = 0x250790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x250794: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x250794u;
    {
        const bool branch_taken_0x250794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250794u;
        // 0x250798: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250794) {
            ctx->pc = 0x250B08u;
            goto label_250b08;
        }
    }
    ctx->pc = 0x25079Cu;
    // 0x25079c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25079cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2507a0: 0x24426c90  addiu       $v0, $v0, 0x6C90
    ctx->pc = 0x2507a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27792));
    // 0x2507a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2507a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2507a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2507a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2507ac: 0x800008  jr          $a0
    ctx->pc = 0x2507ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2507B4u: goto label_2507b4;
            case 0x2507D4u: goto label_2507d4;
            case 0x2507F4u: goto label_2507f4;
            case 0x250814u: goto label_250814;
            case 0x250834u: goto label_250834;
            case 0x250854u: goto label_250854;
            case 0x250874u: goto label_250874;
            case 0x250894u: goto label_250894;
            case 0x2508FCu: goto label_2508fc;
            case 0x25095Cu: goto label_25095c;
            case 0x2509BCu: goto label_2509bc;
            case 0x2509F4u: goto label_2509f4;
            case 0x250A14u: goto label_250a14;
            case 0x250A68u: goto label_250a68;
            case 0x250AC4u: goto label_250ac4;
            case 0x250AE4u: goto label_250ae4;
            case 0x250B08u: goto label_250b08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2507ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2507B4u;
label_2507b4:
    // 0x2507b4: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x2507b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x2507b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2507b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507bc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2507bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507c0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2507c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507c4: 0xc08c724  jal         func_231C90
    ctx->pc = 0x2507C4u;
    SET_GPR_U32(ctx, 31, 0x2507CCu);
    ctx->pc = 0x2507C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2507C4u;
    // 0x2507c8: 0x25081008  addiu       $t0, $t0, 0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x2507C4u, 0x2507CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2507CCu;
label_2507cc:
    // 0x2507cc: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x2507CCu;
    {
        const bool branch_taken_0x2507cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2507D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507CCu;
        // 0x2507d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507cc) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x2507D4u;
label_2507d4:
    // 0x2507d4: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x2507d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x2507d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2507d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507dc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2507dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507e0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2507e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507e4: 0xc08c724  jal         func_231C90
    ctx->pc = 0x2507E4u;
    SET_GPR_U32(ctx, 31, 0x2507ECu);
    ctx->pc = 0x2507E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2507E4u;
    // 0x2507e8: 0x2508100c  addiu       $t0, $t0, 0x100C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x2507E4u, 0x2507ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2507ECu;
label_2507ec:
    // 0x2507ec: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x2507ECu;
    {
        const bool branch_taken_0x2507ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2507F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507ECu;
        // 0x2507f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507ec) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x2507F4u;
label_2507f4:
    // 0x2507f4: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x2507f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x2507f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2507f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507fc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2507fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250800: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250804: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250804u;
    SET_GPR_U32(ctx, 31, 0x25080Cu);
    ctx->pc = 0x250808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250804u;
    // 0x250808: 0x25081010  addiu       $t0, $t0, 0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250804u, 0x25080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25080Cu;
label_25080c:
    // 0x25080c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x25080Cu;
    {
        const bool branch_taken_0x25080c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25080Cu;
        // 0x250810: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25080c) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x250814u;
label_250814:
    // 0x250814: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x250814u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x250818: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25081c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x25081cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250820: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250824: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250824u;
    SET_GPR_U32(ctx, 31, 0x25082Cu);
    ctx->pc = 0x250828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250824u;
    // 0x250828: 0x25081014  addiu       $t0, $t0, 0x1014 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250824u, 0x25082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25082Cu;
label_25082c:
    // 0x25082c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x25082Cu;
    {
        const bool branch_taken_0x25082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25082Cu;
        // 0x250830: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25082c) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x250834u;
label_250834:
    // 0x250834: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x250834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x250838: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25083c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x25083cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250840: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250844: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250844u;
    SET_GPR_U32(ctx, 31, 0x25084Cu);
    ctx->pc = 0x250848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250844u;
    // 0x250848: 0x25081018  addiu       $t0, $t0, 0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250844u, 0x25084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25084Cu;
label_25084c:
    // 0x25084c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x25084Cu;
    {
        const bool branch_taken_0x25084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25084Cu;
        // 0x250850: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25084c) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x250854u;
label_250854:
    // 0x250854: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x250854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x250858: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25085c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x25085cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250860: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250864: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250864u;
    SET_GPR_U32(ctx, 31, 0x25086Cu);
    ctx->pc = 0x250868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250864u;
    // 0x250868: 0x2508101c  addiu       $t0, $t0, 0x101C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250864u, 0x25086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25086Cu;
label_25086c:
    // 0x25086c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x25086Cu;
    {
        const bool branch_taken_0x25086c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25086Cu;
        // 0x250870: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25086c) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x250874u;
label_250874:
    // 0x250874: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x250874u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x250878: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25087c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x25087cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250880: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250884: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250884u;
    SET_GPR_U32(ctx, 31, 0x25088Cu);
    ctx->pc = 0x250888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250884u;
    // 0x250888: 0x25080198  addiu       $t0, $t0, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250884u, 0x25088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25088Cu;
label_25088c:
    // 0x25088c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x25088Cu;
    {
        const bool branch_taken_0x25088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25088Cu;
        // 0x250890: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25088c) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x250894u;
label_250894:
    // 0x250894: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x250894u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x250898: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25089c: 0x26081020  addiu       $t0, $s0, 0x1020
    ctx->pc = 0x25089cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4128));
    // 0x2508a0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2508a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2508a4: 0xc08c724  jal         func_231C90
    ctx->pc = 0x2508A4u;
    SET_GPR_U32(ctx, 31, 0x2508ACu);
    ctx->pc = 0x2508A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2508A4u;
    // 0x2508a8: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x2508A4u, 0x2508ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2508ACu;
label_2508ac:
    // 0x2508ac: 0x8e031020  lw          $v1, 0x1020($s0)
    ctx->pc = 0x2508acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x2508b0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2508B0u;
    {
        const bool branch_taken_0x2508b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2508B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508B0u;
        // 0x2508b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2508b0) {
            ctx->pc = 0x2508DCu;
            goto label_2508dc;
        }
    }
    ctx->pc = 0x2508B8u;
    // 0x2508b8: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2508b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2508bc: 0x8e221028  lw          $v0, 0x1028($s1)
    ctx->pc = 0x2508bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4136)));
    // 0x2508c0: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2508C0u;
    {
        const bool branch_taken_0x2508c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2508C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508C0u;
        // 0x2508c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2508c0) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x2508C8u;
    // 0x2508c8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2508c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2508cc: 0xc09101c  jal         func_244070
    ctx->pc = 0x2508CCu;
    SET_GPR_U32(ctx, 31, 0x2508D4u);
    ctx->pc = 0x2508D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2508CCu;
    // 0x2508d0: 0x8c441024  lw          $a0, 0x1024($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244070u, 0x2508CCu, 0x2508D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2508D4u;
label_2508d4:
    // 0x2508d4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2508D4u;
    {
        const bool branch_taken_0x2508d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2508D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508D4u;
        // 0x2508d8: 0xae221028  sw          $v0, 0x1028($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2508d4) {
            ctx->pc = 0x250ABCu;
            goto label_250abc;
        }
    }
    ctx->pc = 0x2508DCu;
label_2508dc:
    // 0x2508dc: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2508dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2508e0: 0x8e241028  lw          $a0, 0x1028($s1)
    ctx->pc = 0x2508e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4136)));
    // 0x2508e4: 0x10800089  beqz        $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2508E4u;
    {
        const bool branch_taken_0x2508e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2508E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508E4u;
        // 0x2508e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2508e4) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x2508ECu;
    // 0x2508ec: 0xc091048  jal         func_244120
    ctx->pc = 0x2508ECu;
    SET_GPR_U32(ctx, 31, 0x2508F4u);
    ctx->pc = 0x2508F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2508ECu;
    // 0x2508f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244120u, 0x2508ECu, 0x2508F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2508F4u;
label_2508f4:
    // 0x2508f4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2508F4u;
    {
        const bool branch_taken_0x2508f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2508F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508F4u;
        // 0x2508f8: 0xae201028  sw          $zero, 0x1028($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2508f4) {
            ctx->pc = 0x250ABCu;
            goto label_250abc;
        }
    }
    ctx->pc = 0x2508FCu;
label_2508fc:
    // 0x2508fc: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2508fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x250900: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250904: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x250904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250908: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25090c: 0x8e5101c0  lw          $s1, 0x1C0($s2)
    ctx->pc = 0x25090cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x250910: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250910u;
    SET_GPR_U32(ctx, 31, 0x250918u);
    ctx->pc = 0x250914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250910u;
    // 0x250914: 0x264801c0  addiu       $t0, $s2, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250910u, 0x250918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250918u;
label_250918:
    // 0x250918: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x250918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25091c: 0x8e4501c0  lw          $a1, 0x1C0($s2)
    ctx->pc = 0x25091cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x250920: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x250920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x250924: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x250924u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x250928: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x250928u;
    {
        const bool branch_taken_0x250928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250928u;
        // 0x25092c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250928) {
            ctx->pc = 0x250950u;
            goto label_250950;
        }
    }
    ctx->pc = 0x250930u;
    // 0x250930: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x250930u;
    {
        const bool branch_taken_0x250930 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x250934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250930u;
        // 0x250934: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250930) {
            ctx->pc = 0x250950u;
            goto label_250950;
        }
    }
    ctx->pc = 0x250938u;
    // 0x250938: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x250938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25093c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25093Cu;
    {
        const bool branch_taken_0x25093c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25093c) {
            ctx->pc = 0x250940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25093Cu;
            // 0x250940: 0xae5101c0  sw          $s1, 0x1C0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250954u;
            goto label_250954;
        }
    }
    ctx->pc = 0x250944u;
    // 0x250944: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x250944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x250948: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x250948u;
    {
        const bool branch_taken_0x250948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250948u;
        // 0x25094c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250948) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x250950u;
label_250950:
    // 0x250950: 0xae5101c0  sw          $s1, 0x1C0($s2)
    ctx->pc = 0x250950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 17));
label_250954:
    // 0x250954: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x250954u;
    {
        const bool branch_taken_0x250954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250954u;
        // 0x250958: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250954) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x25095Cu;
label_25095c:
    // 0x25095c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x25095cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x250960: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250964: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x250964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250968: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25096c: 0x8e5101c4  lw          $s1, 0x1C4($s2)
    ctx->pc = 0x25096cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x250970: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250970u;
    SET_GPR_U32(ctx, 31, 0x250978u);
    ctx->pc = 0x250974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250970u;
    // 0x250974: 0x264801c4  addiu       $t0, $s2, 0x1C4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250970u, 0x250978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250978u;
label_250978:
    // 0x250978: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x250978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25097c: 0x8e4501c4  lw          $a1, 0x1C4($s2)
    ctx->pc = 0x25097cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x250980: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x250980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x250984: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x250984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x250988: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x250988u;
    {
        const bool branch_taken_0x250988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250988u;
        // 0x25098c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250988) {
            ctx->pc = 0x2509B0u;
            goto label_2509b0;
        }
    }
    ctx->pc = 0x250990u;
    // 0x250990: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x250990u;
    {
        const bool branch_taken_0x250990 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x250994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250990u;
        // 0x250994: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250990) {
            ctx->pc = 0x2509B0u;
            goto label_2509b0;
        }
    }
    ctx->pc = 0x250998u;
    // 0x250998: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x250998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25099c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25099Cu;
    {
        const bool branch_taken_0x25099c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25099c) {
            ctx->pc = 0x2509A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25099Cu;
            // 0x2509a0: 0xae5101c4  sw          $s1, 0x1C4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2509B4u;
            goto label_2509b4;
        }
    }
    ctx->pc = 0x2509A4u;
    // 0x2509a4: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x2509a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2509a8: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2509A8u;
    {
        const bool branch_taken_0x2509a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2509ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509A8u;
        // 0x2509ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509a8) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x2509B0u;
label_2509b0:
    // 0x2509b0: 0xae5101c4  sw          $s1, 0x1C4($s2)
    ctx->pc = 0x2509b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 17));
label_2509b4:
    // 0x2509b4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2509B4u;
    {
        const bool branch_taken_0x2509b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2509B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509B4u;
        // 0x2509b8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509b4) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x2509BCu;
label_2509bc:
    // 0x2509bc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2509bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509c0: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x2509c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x2509c4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2509c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509c8: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2509c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509cc: 0xc08c724  jal         func_231C90
    ctx->pc = 0x2509CCu;
    SET_GPR_U32(ctx, 31, 0x2509D4u);
    ctx->pc = 0x2509D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2509CCu;
    // 0x2509d0: 0x26281024  addiu       $t0, $s1, 0x1024 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x2509CCu, 0x2509D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2509D4u;
label_2509d4:
    // 0x2509d4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2509d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2509d8: 0x8c641028  lw          $a0, 0x1028($v1)
    ctx->pc = 0x2509d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4136)));
    // 0x2509dc: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2509DCu;
    {
        const bool branch_taken_0x2509dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2509E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509DCu;
        // 0x2509e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509dc) {
            ctx->pc = 0x250ABCu;
            goto label_250abc;
        }
    }
    ctx->pc = 0x2509E4u;
    // 0x2509e4: 0xc091046  jal         func_244118
    ctx->pc = 0x2509E4u;
    SET_GPR_U32(ctx, 31, 0x2509ECu);
    ctx->pc = 0x2509E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2509E4u;
    // 0x2509e8: 0x9e251024  lwu         $a1, 0x1024($s1) (Delay Slot)
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244118u, 0x2509E4u, 0x2509ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2509ECu;
label_2509ec:
    // 0x2509ec: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2509ECu;
    {
        const bool branch_taken_0x2509ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2509F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509ECu;
        // 0x2509f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509ec) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x2509F4u;
label_2509f4:
    // 0x2509f4: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x2509f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x2509f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2509f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2509fc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x2509fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a00: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a04: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250A04u;
    SET_GPR_U32(ctx, 31, 0x250A0Cu);
    ctx->pc = 0x250A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250A04u;
    // 0x250a08: 0x2508019c  addiu       $t0, $t0, 0x19C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250A04u, 0x250A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250A0Cu;
label_250a0c:
    // 0x250a0c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x250A0Cu;
    {
        const bool branch_taken_0x250a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A0Cu;
        // 0x250a10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a0c) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x250A14u;
label_250a14:
    // 0x250a14: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x250a14u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x250a18: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a1c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x250a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a20: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a24: 0x8e5101c8  lw          $s1, 0x1C8($s2)
    ctx->pc = 0x250a24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
    // 0x250a28: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250A28u;
    SET_GPR_U32(ctx, 31, 0x250A30u);
    ctx->pc = 0x250A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250A28u;
    // 0x250a2c: 0x264801c8  addiu       $t0, $s2, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250A28u, 0x250A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250A30u;
label_250a30:
    // 0x250a30: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x250a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x250a34: 0x8e4501c8  lw          $a1, 0x1C8($s2)
    ctx->pc = 0x250a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 456)));
    // 0x250a38: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x250a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x250a3c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x250a3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x250a40: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x250A40u;
    {
        const bool branch_taken_0x250a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A40u;
        // 0x250a44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a40) {
            ctx->pc = 0x250A5Cu;
            goto label_250a5c;
        }
    }
    ctx->pc = 0x250A48u;
    // 0x250a48: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x250a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x250a4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250A4Cu;
    {
        const bool branch_taken_0x250a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A4Cu;
        // 0x250a50: 0x28a20258  slti        $v0, $a1, 0x258 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)600) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a4c) {
            ctx->pc = 0x250A5Cu;
            goto label_250a5c;
        }
    }
    ctx->pc = 0x250A54u;
    // 0x250a54: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x250A54u;
    {
        const bool branch_taken_0x250a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A54u;
        // 0x250a58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a54) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x250A5Cu;
label_250a5c:
    // 0x250a5c: 0xae5101c8  sw          $s1, 0x1C8($s2)
    ctx->pc = 0x250a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 17));
    // 0x250a60: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x250A60u;
    {
        const bool branch_taken_0x250a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A60u;
        // 0x250a64: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a60) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x250A68u;
label_250a68:
    // 0x250a68: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x250a68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x250a6c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a70: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x250a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a74: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a78: 0x8e5101cc  lw          $s1, 0x1CC($s2)
    ctx->pc = 0x250a78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 460)));
    // 0x250a7c: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250A7Cu;
    SET_GPR_U32(ctx, 31, 0x250A84u);
    ctx->pc = 0x250A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250A7Cu;
    // 0x250a80: 0x264801cc  addiu       $t0, $s2, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250A7Cu, 0x250A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250A84u;
label_250a84:
    // 0x250a84: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x250a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x250a88: 0x8e4501cc  lw          $a1, 0x1CC($s2)
    ctx->pc = 0x250a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 460)));
    // 0x250a8c: 0x8c8301c8  lw          $v1, 0x1C8($a0)
    ctx->pc = 0x250a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x250a90: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x250a90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x250a94: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x250A94u;
    {
        const bool branch_taken_0x250a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A94u;
        // 0x250a98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a94) {
            ctx->pc = 0x250AB0u;
            goto label_250ab0;
        }
    }
    ctx->pc = 0x250A9Cu;
    // 0x250a9c: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x250a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x250aa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250AA0u;
    {
        const bool branch_taken_0x250aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AA0u;
        // 0x250aa4: 0x28a20258  slti        $v0, $a1, 0x258 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)600) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250aa0) {
            ctx->pc = 0x250AB0u;
            goto label_250ab0;
        }
    }
    ctx->pc = 0x250AA8u;
    // 0x250aa8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x250AA8u;
    {
        const bool branch_taken_0x250aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AA8u;
        // 0x250aac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250aa8) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x250AB0u;
label_250ab0:
    // 0x250ab0: 0xae5101cc  sw          $s1, 0x1CC($s2)
    ctx->pc = 0x250ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 17));
    // 0x250ab4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x250AB4u;
    {
        const bool branch_taken_0x250ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AB4u;
        // 0x250ab8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ab4) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x250ABCu;
label_250abc:
    // 0x250abc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x250ABCu;
    {
        const bool branch_taken_0x250abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250ABCu;
        // 0x250ac0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250abc) {
            ctx->pc = 0x250B0Cu;
            goto label_250b0c;
        }
    }
    ctx->pc = 0x250AC4u;
label_250ac4:
    // 0x250ac4: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x250ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x250ac8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250acc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x250accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ad0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ad4: 0xc08c724  jal         func_231C90
    ctx->pc = 0x250AD4u;
    SET_GPR_U32(ctx, 31, 0x250ADCu);
    ctx->pc = 0x250AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250AD4u;
    // 0x250ad8: 0x25081034  addiu       $t0, $t0, 0x1034 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C90u, 0x250AD4u, 0x250ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250ADCu;
label_250adc:
    // 0x250adc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x250ADCu;
    {
        const bool branch_taken_0x250adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250ADCu;
        // 0x250ae0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250adc) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x250AE4u;
label_250ae4:
    // 0x250ae4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x250ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x250ae8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x250ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250aec: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x250aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250af0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x250af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250af4: 0x24e710a8  addiu       $a3, $a3, 0x10A8
    ctx->pc = 0x250af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4264));
    // 0x250af8: 0xc08c832  jal         func_2320C8
    ctx->pc = 0x250AF8u;
    SET_GPR_U32(ctx, 31, 0x250B00u);
    ctx->pc = 0x250AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250AF8u;
    // 0x250afc: 0x240800e8  addiu       $t0, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2320C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2320C8u, 0x250AF8u, 0x250B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B00u;
label_250b00:
    // 0x250b00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250B00u;
    {
        const bool branch_taken_0x250b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B00u;
        // 0x250b04: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b00) {
            ctx->pc = 0x250B10u;
            goto label_250b10;
        }
    }
    ctx->pc = 0x250B08u;
label_250b08:
    // 0x250b08: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x250b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_250b0c:
    // 0x250b0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x250b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_250b10:
    // 0x250b10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x250b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250b14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x250b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x250B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B1Cu;
        // 0x250b20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250B24u;
    // 0x250b24: 0x0  nop
    ctx->pc = 0x250b24u;
    // NOP
}
