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

// Function: sub_00155780
// Address: 0x155780 - 0x1558c0
void sub_00155780_0x155780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155780_0x155780");
#endif

    switch (ctx->pc) {
        case 0x1557a0u: goto label_1557a0;
        case 0x15589cu: goto label_15589c;
        case 0x1558a8u: goto label_1558a8;
        default: break;
    }

    ctx->pc = 0x155780u;

    // 0x155780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x155784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x155784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x155788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15578c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x155790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155794: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x155794u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x155798: 0xc067dd0  jal         func_19F740
    ctx->pc = 0x155798u;
    SET_GPR_U32(ctx, 31, 0x1557A0u);
    ctx->pc = 0x15579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155798u;
    // 0x15579c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F740u, 0x155798u, 0x1557A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557A0u;
label_1557a0:
    // 0x1557a0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1557a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1557a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1557a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1557a8: 0x9086db10  lbu         $a2, -0x24F0($a0)
    ctx->pc = 0x1557a8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294957840)));
    // 0x1557ac: 0x2035004  sllv        $t2, $v1, $s0
    ctx->pc = 0x1557acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1557b0: 0x314900ff  andi        $t1, $t2, 0xFF
    ctx->pc = 0x1557b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x1557b4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1557b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1557b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1557b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557bc: 0xc94025  or          $t0, $a2, $t1
    ctx->pc = 0x1557bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x1557c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1557c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1557c4: 0x9087db08  lbu         $a3, -0x24F8($a0)
    ctx->pc = 0x1557c4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294957832)));
    // 0x1557c8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1557c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1557cc: 0x24c6dab8  addiu       $a2, $a2, -0x2548
    ctx->pc = 0x1557ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957752));
    // 0x1557d0: 0xa0a8db10  sb          $t0, -0x24F0($a1)
    ctx->pc = 0x1557d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294957840), (uint8_t)GPR_U32(ctx, 8));
    // 0x1557d4: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x1557d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1557d8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1557d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1557dc: 0xe93025  or          $a2, $a3, $t1
    ctx->pc = 0x1557dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x1557e0: 0xa086db08  sb          $a2, -0x24F8($a0)
    ctx->pc = 0x1557e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294957832), (uint8_t)GPR_U32(ctx, 6));
    // 0x1557e4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1557e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1557e8: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x1557e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1557ec: 0x1442827  nor         $a1, $t2, $a0
    ctx->pc = 0x1557ecu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 10) | GPR_U64(ctx, 4)));
    // 0x1557f0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1557f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1557f4: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x1557f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1557f8: 0x9087daf0  lbu         $a3, -0x2510($a0)
    ctx->pc = 0x1557f8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294957808)));
    // 0x1557fc: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1557fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x155800: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x155800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x155804: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x155804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x155808: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x155808u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15580c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x15580cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x155810: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x155810u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x155814: 0xa087daf0  sb          $a3, -0x2510($a0)
    ctx->pc = 0x155814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294957808), (uint8_t)GPR_U32(ctx, 7));
    // 0x155818: 0x24a5db5a  addiu       $a1, $a1, -0x24A6
    ctx->pc = 0x155818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957914));
    // 0x15581c: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x15581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x155820: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x155820u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x155824: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x155824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x155828: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x155828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x15582c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x15582cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x155830: 0x2484db94  addiu       $a0, $a0, -0x246C
    ctx->pc = 0x155830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957972));
    // 0x155834: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x155834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x155838: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x155838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15583c: 0x2463db98  addiu       $v1, $v1, -0x2468
    ctx->pc = 0x15583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957976));
    // 0x155840: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x155840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x155844: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x155844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x155848: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x155848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15584c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15584cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x155850: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x155850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x155854: 0x2463db9c  addiu       $v1, $v1, -0x2464
    ctx->pc = 0x155854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957980));
    // 0x155858: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x155858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15585c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15585cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x155860: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x155860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x155864: 0x2463db64  addiu       $v1, $v1, -0x249C
    ctx->pc = 0x155864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957924));
    // 0x155868: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x15586c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x155870: 0x2484b828  addiu       $a0, $a0, -0x47D8
    ctx->pc = 0x155870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948904));
    // 0x155874: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x155874u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x155878: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x155878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15587c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15587cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x155880: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x155880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x155884: 0x2463b820  addiu       $v1, $v1, -0x47E0
    ctx->pc = 0x155884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948896));
    // 0x155888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15588c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155890: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x155890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x155894: 0xc04c1f8  jal         func_1307E0
    ctx->pc = 0x155894u;
    SET_GPR_U32(ctx, 31, 0x15589Cu);
    ctx->pc = 0x155898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155894u;
    // 0x155898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307E0u, 0x155894u, 0x15589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15589Cu;
label_15589c:
    // 0x15589c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1558a0: 0xc053838  jal         func_14E0E0
    ctx->pc = 0x1558A0u;
    SET_GPR_U32(ctx, 31, 0x1558A8u);
    ctx->pc = 0x1558A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558A0u;
    // 0x1558a4: 0xa040d9d8  sb          $zero, -0x2628($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957528), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E0E0u, 0x1558A0u, 0x1558A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558A8u;
label_1558a8:
    // 0x1558a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1558a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1558ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1558acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1558b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1558b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1558b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1558B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1558B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558B4u;
        // 0x1558b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1558B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1558BCu;
    // 0x1558bc: 0x0  nop
    ctx->pc = 0x1558bcu;
    // NOP
}
