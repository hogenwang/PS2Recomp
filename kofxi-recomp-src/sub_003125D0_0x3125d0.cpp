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

// Function: sub_003125D0
// Address: 0x3125d0 - 0x3128d0
void sub_003125D0_0x3125d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003125D0_0x3125d0");
#endif

    switch (ctx->pc) {
        case 0x3125f0u: goto label_3125f0;
        case 0x312614u: goto label_312614;
        case 0x312640u: goto label_312640;
        case 0x31264cu: goto label_31264c;
        case 0x31266cu: goto label_31266c;
        case 0x312684u: goto label_312684;
        case 0x31268cu: goto label_31268c;
        case 0x3126a0u: goto label_3126a0;
        case 0x3126acu: goto label_3126ac;
        case 0x3126ccu: goto label_3126cc;
        case 0x3126fcu: goto label_3126fc;
        case 0x312718u: goto label_312718;
        case 0x312730u: goto label_312730;
        case 0x312778u: goto label_312778;
        case 0x3127a8u: goto label_3127a8;
        case 0x3127bcu: goto label_3127bc;
        case 0x3127c4u: goto label_3127c4;
        case 0x3127d8u: goto label_3127d8;
        case 0x3127e8u: goto label_3127e8;
        case 0x312800u: goto label_312800;
        case 0x31280cu: goto label_31280c;
        case 0x312838u: goto label_312838;
        case 0x312858u: goto label_312858;
        case 0x312888u: goto label_312888;
        case 0x3128a4u: goto label_3128a4;
        case 0x3128b8u: goto label_3128b8;
        default: break;
    }

    ctx->pc = 0x3125d0u;

    // 0x3125d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3125d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3125d4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3125d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3125d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3125d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3125dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3125dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3125e0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3125E0u;
    {
        const bool branch_taken_0x3125e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3125E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125E0u;
        // 0x3125e4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125e0) {
            ctx->pc = 0x312600u;
            goto label_312600;
        }
    }
    ctx->pc = 0x3125E8u;
    // 0x3125e8: 0xc083ae0  jal         func_20EB80
    ctx->pc = 0x3125E8u;
    SET_GPR_U32(ctx, 31, 0x3125F0u);
    ctx->pc = 0x3125ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3125E8u;
    // 0x3125ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EB80u, 0x3125E8u, 0x3125F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125F0u;
label_3125f0:
    // 0x3125f0: 0x101823  negu        $v1, $s0
    ctx->pc = 0x3125f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x3125f4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3125f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3125f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3125F8u;
    {
        const bool branch_taken_0x3125f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3125FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125F8u;
        // 0x3125fc: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125f8) {
            ctx->pc = 0x312608u;
            goto label_312608;
        }
    }
    ctx->pc = 0x312600u;
label_312600:
    // 0x312600: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x312600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x312604: 0xa440be90  sh          $zero, -0x4170($v0)
    ctx->pc = 0x312604u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 0));
label_312608:
    // 0x312608: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x312608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x31260c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x31260Cu;
    SET_GPR_U32(ctx, 31, 0x312614u);
    ctx->pc = 0x312610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31260Cu;
    // 0x312610: 0x24842630  addiu       $a0, $a0, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x31260Cu, 0x312614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312614u;
label_312614:
    // 0x312614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x312614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31261c: 0x3e00008  jr          $ra
    ctx->pc = 0x31261Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31261Cu;
        // 0x312620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31261Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312624u;
    // 0x312624: 0x0  nop
    ctx->pc = 0x312624u;
    // NOP
    // 0x312628: 0x0  nop
    ctx->pc = 0x312628u;
    // NOP
    // 0x31262c: 0x0  nop
    ctx->pc = 0x31262cu;
    // NOP
    // 0x312630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312638: 0xc0d0c74  jal         func_3431D0
    ctx->pc = 0x312638u;
    SET_GPR_U32(ctx, 31, 0x312640u);
    ctx->pc = 0x3431D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3431D0u, 0x312638u, 0x312640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312640u;
label_312640:
    // 0x312640: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x312640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x312644: 0xc069204  jal         func_1A4810
    ctx->pc = 0x312644u;
    SET_GPR_U32(ctx, 31, 0x31264Cu);
    ctx->pc = 0x312648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312644u;
    // 0x312648: 0x9444be90  lhu         $a0, -0x4170($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4810u, 0x312644u, 0x31264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31264Cu;
label_31264c:
    // 0x31264c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x31264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x312650: 0x9442be90  lhu         $v0, -0x4170($v0)
    ctx->pc = 0x312650u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x312654: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x312654u;
    {
        const bool branch_taken_0x312654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312654) {
            ctx->pc = 0x312674u;
            goto label_312674;
        }
    }
    ctx->pc = 0x31265Cu;
    // 0x31265c: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x31265cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x312660: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x312660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312664: 0xc082678  jal         func_2099E0
    ctx->pc = 0x312664u;
    SET_GPR_U32(ctx, 31, 0x31266Cu);
    ctx->pc = 0x312668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312664u;
    // 0x312668: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x312664u, 0x31266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31266Cu;
label_31266c:
    // 0x31266c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31266Cu;
    {
        const bool branch_taken_0x31266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31266c) {
            ctx->pc = 0x312684u;
            goto label_312684;
        }
    }
    ctx->pc = 0x312674u;
label_312674:
    // 0x312674: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x312674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x312678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x312678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31267c: 0xc082678  jal         func_2099E0
    ctx->pc = 0x31267Cu;
    SET_GPR_U32(ctx, 31, 0x312684u);
    ctx->pc = 0x312680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31267Cu;
    // 0x312680: 0x24842360  addiu       $a0, $a0, 0x2360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x31267Cu, 0x312684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312684u;
label_312684:
    // 0x312684: 0xc09cea0  jal         func_273A80
    ctx->pc = 0x312684u;
    SET_GPR_U32(ctx, 31, 0x31268Cu);
    ctx->pc = 0x273A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273A80u, 0x312684u, 0x31268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31268Cu;
label_31268c:
    // 0x31268c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x31268cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x312690: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x312690u;
    {
        const bool branch_taken_0x312690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x312690) {
            ctx->pc = 0x3126B4u;
            goto label_3126b4;
        }
    }
    ctx->pc = 0x312698u;
    // 0x312698: 0xc09cf5e  jal         func_273D78
    ctx->pc = 0x312698u;
    SET_GPR_U32(ctx, 31, 0x3126A0u);
    ctx->pc = 0x273D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D78u, 0x312698u, 0x3126A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126A0u;
label_3126a0:
    // 0x3126a0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x3126a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x3126a4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3126A4u;
    SET_GPR_U32(ctx, 31, 0x3126ACu);
    ctx->pc = 0x3126A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126A4u;
    // 0x3126a8: 0x248426e0  addiu       $a0, $a0, 0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3126A4u, 0x3126ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126ACu;
label_3126ac:
    // 0x3126ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3126ACu;
    {
        const bool branch_taken_0x3126ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3126B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126ACu;
        // 0x3126b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126ac) {
            ctx->pc = 0x3126D0u;
            goto label_3126d0;
        }
    }
    ctx->pc = 0x3126B4u;
label_3126b4:
    // 0x3126b4: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x3126b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x3126b8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x3126b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3126bc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3126bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3126c0: 0x24842740  addiu       $a0, $a0, 0x2740
    ctx->pc = 0x3126c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
    // 0x3126c4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3126C4u;
    SET_GPR_U32(ctx, 31, 0x3126CCu);
    ctx->pc = 0x3126C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126C4u;
    // 0x3126c8: 0xa443be92  sh          $v1, -0x416E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3126C4u, 0x3126CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126CCu;
label_3126cc:
    // 0x3126cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3126ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3126d0:
    // 0x3126d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3126D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3126D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126D0u;
        // 0x3126d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3126D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3126D8u;
    // 0x3126d8: 0x0  nop
    ctx->pc = 0x3126d8u;
    // NOP
    // 0x3126dc: 0x0  nop
    ctx->pc = 0x3126dcu;
    // NOP
    // 0x3126e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3126e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3126e4: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x3126e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x3126e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3126e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3126ec: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x3126ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x3126f0: 0xac4029dc  sw          $zero, 0x29DC($v0)
    ctx->pc = 0x3126f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10716), GPR_U32(ctx, 0));
    // 0x3126f4: 0xc09cfa4  jal         func_273E90
    ctx->pc = 0x3126F4u;
    SET_GPR_U32(ctx, 31, 0x3126FCu);
    ctx->pc = 0x3126F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3126F4u;
    // 0x3126f8: 0x248429d0  addiu       $a0, $a0, 0x29D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273E90u, 0x3126F4u, 0x3126FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126FCu;
label_3126fc:
    // 0x3126fc: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x3126fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x312700: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x312700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x312704: 0x8c6329d0  lw          $v1, 0x29D0($v1)
    ctx->pc = 0x312704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10704)));
    // 0x312708: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x312708u;
    {
        const bool branch_taken_0x312708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x312708) {
            ctx->pc = 0x31270Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312708u;
            // 0x31270c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312734u;
            goto label_312734;
        }
    }
    ctx->pc = 0x312710u;
    // 0x312710: 0xc09cea0  jal         func_273A80
    ctx->pc = 0x312710u;
    SET_GPR_U32(ctx, 31, 0x312718u);
    ctx->pc = 0x273A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273A80u, 0x312710u, 0x312718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312718u;
label_312718:
    // 0x312718: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x312718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x31271c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x31271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x312720: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x312720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x312724: 0x24842740  addiu       $a0, $a0, 0x2740
    ctx->pc = 0x312724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
    // 0x312728: 0xc082674  jal         func_2099D0
    ctx->pc = 0x312728u;
    SET_GPR_U32(ctx, 31, 0x312730u);
    ctx->pc = 0x31272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312728u;
    // 0x31272c: 0xa443be92  sh          $v1, -0x416E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x312728u, 0x312730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312730u;
label_312730:
    // 0x312730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_312734:
    // 0x312734: 0x3e00008  jr          $ra
    ctx->pc = 0x312734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312734u;
        // 0x312738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31273Cu;
    // 0x31273c: 0x0  nop
    ctx->pc = 0x31273cu;
    // NOP
    // 0x312740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312744: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x312744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x312748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31274c: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x31274cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x312750: 0x9465be92  lhu         $a1, -0x416E($v1)
    ctx->pc = 0x312750u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950546)));
    // 0x312754: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x312754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x312758: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x312758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x31275c: 0xa485be92  sh          $a1, -0x416E($a0)
    ctx->pc = 0x31275cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294950546), (uint16_t)GPR_U32(ctx, 5));
    // 0x312760: 0x9463be92  lhu         $v1, -0x416E($v1)
    ctx->pc = 0x312760u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950546)));
    // 0x312764: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x312764u;
    {
        const bool branch_taken_0x312764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312764) {
            ctx->pc = 0x312768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312764u;
            // 0x312768: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31277Cu;
            goto label_31277c;
        }
    }
    ctx->pc = 0x31276Cu;
    // 0x31276c: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x31276cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x312770: 0xc082674  jal         func_2099D0
    ctx->pc = 0x312770u;
    SET_GPR_U32(ctx, 31, 0x312778u);
    ctx->pc = 0x312774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312770u;
    // 0x312774: 0x24842790  addiu       $a0, $a0, 0x2790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x312770u, 0x312778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312778u;
label_312778:
    // 0x312778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31277c:
    // 0x31277c: 0x3e00008  jr          $ra
    ctx->pc = 0x31277Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31277Cu;
        // 0x312780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31277Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312784u;
    // 0x312784: 0x0  nop
    ctx->pc = 0x312784u;
    // NOP
    // 0x312788: 0x0  nop
    ctx->pc = 0x312788u;
    // NOP
    // 0x31278c: 0x0  nop
    ctx->pc = 0x31278cu;
    // NOP
    // 0x312790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x312794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x312798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31279c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31279cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3127a0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x3127A0u;
    SET_GPR_U32(ctx, 31, 0x3127A8u);
    ctx->pc = 0x3127A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3127A0u;
    // 0x3127a4: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x3127A0u, 0x3127A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3127A8u;
label_3127a8:
    // 0x3127a8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3127A8u;
    {
        const bool branch_taken_0x3127a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3127a8) {
            ctx->pc = 0x3127ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3127A8u;
            // 0x3127ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312810u;
            goto label_312810;
        }
    }
    ctx->pc = 0x3127B0u;
    // 0x3127b0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3127b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3127b4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3127B4u;
    SET_GPR_U32(ctx, 31, 0x3127BCu);
    ctx->pc = 0x3127B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3127B4u;
    // 0x3127b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3127B4u, 0x3127BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3127BCu;
label_3127bc:
    // 0x3127bc: 0xc0d0c60  jal         func_343180
    ctx->pc = 0x3127BCu;
    SET_GPR_U32(ctx, 31, 0x3127C4u);
    ctx->pc = 0x343180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343180u, 0x3127BCu, 0x3127C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3127C4u;
label_3127c4:
    // 0x3127c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3127C4u;
    {
        const bool branch_taken_0x3127c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3127c4) {
            ctx->pc = 0x3127C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3127C4u;
            // 0x3127c8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3127E0u;
            goto label_3127e0;
        }
    }
    ctx->pc = 0x3127CCu;
    // 0x3127cc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3127ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3127d0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3127D0u;
    SET_GPR_U32(ctx, 31, 0x3127D8u);
    ctx->pc = 0x3127D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3127D0u;
    // 0x3127d4: 0x24846930  addiu       $a0, $a0, 0x6930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3127D0u, 0x3127D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3127D8u;
label_3127d8:
    // 0x3127d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3127D8u;
    {
        const bool branch_taken_0x3127d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3127d8) {
            ctx->pc = 0x31280Cu;
            goto label_31280c;
        }
    }
    ctx->pc = 0x3127E0u;
label_3127e0:
    // 0x3127e0: 0xc069204  jal         func_1A4810
    ctx->pc = 0x3127E0u;
    SET_GPR_U32(ctx, 31, 0x3127E8u);
    ctx->pc = 0x1A4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4810u, 0x3127E0u, 0x3127E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3127E8u;
label_3127e8:
    // 0x3127e8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x3127e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x3127ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3127ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3127f0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3127f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3127f4: 0x24842370  addiu       $a0, $a0, 0x2370
    ctx->pc = 0x3127f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9072));
    // 0x3127f8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3127F8u;
    SET_GPR_U32(ctx, 31, 0x312800u);
    ctx->pc = 0x3127FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3127F8u;
    // 0x3127fc: 0xac454378  sw          $a1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3127F8u, 0x312800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312800u;
label_312800:
    // 0x312800: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x312800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x312804: 0xc082674  jal         func_2099D0
    ctx->pc = 0x312804u;
    SET_GPR_U32(ctx, 31, 0x31280Cu);
    ctx->pc = 0x312808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312804u;
    // 0x312808: 0x24842820  addiu       $a0, $a0, 0x2820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x312804u, 0x31280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31280Cu;
label_31280c:
    // 0x31280c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31280cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_312810:
    // 0x312810: 0x3e00008  jr          $ra
    ctx->pc = 0x312810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312810u;
        // 0x312814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312818u;
    // 0x312818: 0x0  nop
    ctx->pc = 0x312818u;
    // NOP
    // 0x31281c: 0x0  nop
    ctx->pc = 0x31281cu;
    // NOP
    // 0x312820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312824: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x312824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x312828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31282c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31282cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312830: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x312830u;
    SET_GPR_U32(ctx, 31, 0x312838u);
    ctx->pc = 0x312834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312830u;
    // 0x312834: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x312830u, 0x312838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312838u;
label_312838:
    // 0x312838: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x312838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31283c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31283cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x312840: 0x308300a0  andi        $v1, $a0, 0xA0
    ctx->pc = 0x312840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)160);
    // 0x312844: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x312844u;
    {
        const bool branch_taken_0x312844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x312844) {
            ctx->pc = 0x312848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312844u;
            // 0x312848: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x312874u;
            goto label_312874;
        }
    }
    ctx->pc = 0x31284Cu;
    // 0x31284c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x31284cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x312850: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x312850u;
    SET_GPR_U32(ctx, 31, 0x312858u);
    ctx->pc = 0x312854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312850u;
    // 0x312854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x312850u, 0x312858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312858u;
label_312858:
    // 0x312858: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x312858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x31285c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x31285cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x312860: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x312860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x312864: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x312864u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x312868: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x312868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x31286c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31286Cu;
    {
        const bool branch_taken_0x31286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31286Cu;
        // 0x312870: 0xac644378  sw          $a0, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31286c) {
            ctx->pc = 0x3128B8u;
            goto label_3128b8;
        }
    }
    ctx->pc = 0x312874u;
label_312874:
    // 0x312874: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x312874u;
    {
        const bool branch_taken_0x312874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x312874) {
            ctx->pc = 0x312878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312874u;
            // 0x312878: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3128BCu;
            goto label_3128bc;
        }
    }
    ctx->pc = 0x31287Cu;
    // 0x31287c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x31287cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x312880: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x312880u;
    SET_GPR_U32(ctx, 31, 0x312888u);
    ctx->pc = 0x312884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312880u;
    // 0x312884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x312880u, 0x312888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312888u;
label_312888:
    // 0x312888: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x312888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x31288c: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x31288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x312890: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x312890u;
    {
        const bool branch_taken_0x312890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312890) {
            ctx->pc = 0x3128ACu;
            goto label_3128ac;
        }
    }
    ctx->pc = 0x312898u;
    // 0x312898: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x312898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x31289c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x31289Cu;
    SET_GPR_U32(ctx, 31, 0x3128A4u);
    ctx->pc = 0x3128A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31289Cu;
    // 0x3128a0: 0x248464b0  addiu       $a0, $a0, 0x64B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x31289Cu, 0x3128A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128A4u;
label_3128a4:
    // 0x3128a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3128A4u;
    {
        const bool branch_taken_0x3128a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3128a4) {
            ctx->pc = 0x3128B8u;
            goto label_3128b8;
        }
    }
    ctx->pc = 0x3128ACu;
label_3128ac:
    // 0x3128ac: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x3128acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x3128b0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3128B0u;
    SET_GPR_U32(ctx, 31, 0x3128B8u);
    ctx->pc = 0x3128B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128B0u;
    // 0x3128b4: 0x248423d0  addiu       $a0, $a0, 0x23D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3128B0u, 0x3128B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128B8u;
label_3128b8:
    // 0x3128b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3128b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3128bc:
    // 0x3128bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3128BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3128C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128BCu;
        // 0x3128c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3128BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3128C4u;
    // 0x3128c4: 0x0  nop
    ctx->pc = 0x3128c4u;
    // NOP
    // 0x3128c8: 0x0  nop
    ctx->pc = 0x3128c8u;
    // NOP
    // 0x3128cc: 0x0  nop
    ctx->pc = 0x3128ccu;
    // NOP
    if (ctx->pc == 0x3128ccu) { ctx->pc = 0x3128d0u; }
}
