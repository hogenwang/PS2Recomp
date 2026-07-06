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

// Function: sub_001890A0
// Address: 0x1890a0 - 0x1892e0
void sub_001890A0_0x1890a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001890A0_0x1890a0");
#endif

    switch (ctx->pc) {
        case 0x1890a0u: goto label_1890a0;
        case 0x1890a4u: goto label_1890a4;
        case 0x1890a8u: goto label_1890a8;
        case 0x1890acu: goto label_1890ac;
        case 0x1890b0u: goto label_1890b0;
        case 0x1890b4u: goto label_1890b4;
        case 0x1890b8u: goto label_1890b8;
        case 0x1890bcu: goto label_1890bc;
        case 0x1890c0u: goto label_1890c0;
        case 0x1890c4u: goto label_1890c4;
        case 0x1890c8u: goto label_1890c8;
        case 0x1890ccu: goto label_1890cc;
        case 0x1890d0u: goto label_1890d0;
        case 0x1890d4u: goto label_1890d4;
        case 0x1890d8u: goto label_1890d8;
        case 0x1890dcu: goto label_1890dc;
        case 0x1890e0u: goto label_1890e0;
        case 0x1890e4u: goto label_1890e4;
        case 0x1890e8u: goto label_1890e8;
        case 0x1890ecu: goto label_1890ec;
        case 0x1890f0u: goto label_1890f0;
        case 0x1890f4u: goto label_1890f4;
        case 0x1890f8u: goto label_1890f8;
        case 0x1890fcu: goto label_1890fc;
        case 0x189100u: goto label_189100;
        case 0x189104u: goto label_189104;
        case 0x189108u: goto label_189108;
        case 0x18910cu: goto label_18910c;
        case 0x189110u: goto label_189110;
        case 0x189114u: goto label_189114;
        case 0x189118u: goto label_189118;
        case 0x18911cu: goto label_18911c;
        case 0x189120u: goto label_189120;
        case 0x189124u: goto label_189124;
        case 0x189128u: goto label_189128;
        case 0x18912cu: goto label_18912c;
        case 0x189130u: goto label_189130;
        case 0x189134u: goto label_189134;
        case 0x189138u: goto label_189138;
        case 0x18913cu: goto label_18913c;
        case 0x189140u: goto label_189140;
        case 0x189144u: goto label_189144;
        case 0x189148u: goto label_189148;
        case 0x18914cu: goto label_18914c;
        case 0x189150u: goto label_189150;
        case 0x189154u: goto label_189154;
        case 0x189158u: goto label_189158;
        case 0x18915cu: goto label_18915c;
        case 0x189160u: goto label_189160;
        case 0x189164u: goto label_189164;
        case 0x189168u: goto label_189168;
        case 0x18916cu: goto label_18916c;
        case 0x189170u: goto label_189170;
        case 0x189174u: goto label_189174;
        case 0x189178u: goto label_189178;
        case 0x18917cu: goto label_18917c;
        case 0x189180u: goto label_189180;
        case 0x189184u: goto label_189184;
        case 0x189188u: goto label_189188;
        case 0x18918cu: goto label_18918c;
        case 0x189190u: goto label_189190;
        case 0x189194u: goto label_189194;
        case 0x189198u: goto label_189198;
        case 0x18919cu: goto label_18919c;
        case 0x1891a0u: goto label_1891a0;
        case 0x1891a4u: goto label_1891a4;
        case 0x1891a8u: goto label_1891a8;
        case 0x1891acu: goto label_1891ac;
        case 0x1891b0u: goto label_1891b0;
        case 0x1891b4u: goto label_1891b4;
        case 0x1891b8u: goto label_1891b8;
        case 0x1891bcu: goto label_1891bc;
        case 0x1891c0u: goto label_1891c0;
        case 0x1891c4u: goto label_1891c4;
        case 0x1891c8u: goto label_1891c8;
        case 0x1891ccu: goto label_1891cc;
        case 0x1891d0u: goto label_1891d0;
        case 0x1891d4u: goto label_1891d4;
        case 0x1891d8u: goto label_1891d8;
        case 0x1891dcu: goto label_1891dc;
        case 0x1891e0u: goto label_1891e0;
        case 0x1891e4u: goto label_1891e4;
        case 0x1891e8u: goto label_1891e8;
        case 0x1891ecu: goto label_1891ec;
        case 0x1891f0u: goto label_1891f0;
        case 0x1891f4u: goto label_1891f4;
        case 0x1891f8u: goto label_1891f8;
        case 0x1891fcu: goto label_1891fc;
        case 0x189200u: goto label_189200;
        case 0x189204u: goto label_189204;
        case 0x189208u: goto label_189208;
        case 0x18920cu: goto label_18920c;
        case 0x189210u: goto label_189210;
        case 0x189214u: goto label_189214;
        case 0x189218u: goto label_189218;
        case 0x18921cu: goto label_18921c;
        case 0x189220u: goto label_189220;
        case 0x189224u: goto label_189224;
        case 0x189228u: goto label_189228;
        case 0x18922cu: goto label_18922c;
        case 0x189230u: goto label_189230;
        case 0x189234u: goto label_189234;
        case 0x189238u: goto label_189238;
        case 0x18923cu: goto label_18923c;
        case 0x189240u: goto label_189240;
        case 0x189244u: goto label_189244;
        case 0x189248u: goto label_189248;
        case 0x18924cu: goto label_18924c;
        case 0x189250u: goto label_189250;
        case 0x189254u: goto label_189254;
        case 0x189258u: goto label_189258;
        case 0x18925cu: goto label_18925c;
        case 0x189260u: goto label_189260;
        case 0x189264u: goto label_189264;
        case 0x189268u: goto label_189268;
        case 0x18926cu: goto label_18926c;
        case 0x189270u: goto label_189270;
        case 0x189274u: goto label_189274;
        case 0x189278u: goto label_189278;
        case 0x18927cu: goto label_18927c;
        case 0x189280u: goto label_189280;
        case 0x189284u: goto label_189284;
        case 0x189288u: goto label_189288;
        case 0x18928cu: goto label_18928c;
        case 0x189290u: goto label_189290;
        case 0x189294u: goto label_189294;
        case 0x189298u: goto label_189298;
        case 0x18929cu: goto label_18929c;
        case 0x1892a0u: goto label_1892a0;
        case 0x1892a4u: goto label_1892a4;
        case 0x1892a8u: goto label_1892a8;
        case 0x1892acu: goto label_1892ac;
        case 0x1892b0u: goto label_1892b0;
        case 0x1892b4u: goto label_1892b4;
        case 0x1892b8u: goto label_1892b8;
        case 0x1892bcu: goto label_1892bc;
        case 0x1892c0u: goto label_1892c0;
        case 0x1892c4u: goto label_1892c4;
        case 0x1892c8u: goto label_1892c8;
        case 0x1892ccu: goto label_1892cc;
        case 0x1892d0u: goto label_1892d0;
        case 0x1892d4u: goto label_1892d4;
        case 0x1892d8u: goto label_1892d8;
        case 0x1892dcu: goto label_1892dc;
        default: break;
    }

    ctx->pc = 0x1890a0u;

label_1890a0:
    // 0x1890a0: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x1890a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
label_1890a4:
    // 0x1890a4: 0x3c021f78  lui         $v0, 0x1F78
    ctx->pc = 0x1890a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8056 << 16));
label_1890a8:
    // 0x1890a8: 0x34427fe1  ori         $v0, $v0, 0x7FE1
    ctx->pc = 0x1890a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32737);
label_1890ac:
    // 0x1890ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1890acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1890b0:
    // 0x1890b0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1890b4:
    if (ctx->pc == 0x1890B4u) {
        ctx->pc = 0x1890B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890B0u;
        // 0x1890b4: 0x8c820490  lw          $v0, 0x490($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890B8u;
        goto label_1890b8;
    }
    ctx->pc = 0x1890B0u;
    {
        const bool branch_taken_0x1890b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1890b0) {
            ctx->pc = 0x1890B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1890B0u;
            // 0x1890b4: 0x8c820490  lw          $v0, 0x490($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1890C0u;
            goto label_1890c0;
        }
    }
    ctx->pc = 0x1890B8u;
label_1890b8:
    // 0x1890b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1890bc:
    if (ctx->pc == 0x1890BCu) {
        ctx->pc = 0x1890BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890B8u;
        // 0x1890bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890C0u;
        goto label_1890c0;
    }
    ctx->pc = 0x1890B8u;
    {
        const bool branch_taken_0x1890b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890B8u;
        // 0x1890bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890b8) {
            ctx->pc = 0x1890E8u;
            goto label_1890e8;
        }
    }
    ctx->pc = 0x1890C0u;
label_1890c0:
    // 0x1890c0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1890c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1890c4:
    // 0x1890c4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1890c8:
    if (ctx->pc == 0x1890C8u) {
        ctx->pc = 0x1890C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890C4u;
        // 0x1890c8: 0x8c830494  lw          $v1, 0x494($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890CCu;
        goto label_1890cc;
    }
    ctx->pc = 0x1890C4u;
    {
        const bool branch_taken_0x1890c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1890c4) {
            ctx->pc = 0x1890C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1890C4u;
            // 0x1890c8: 0x8c830494  lw          $v1, 0x494($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1890D4u;
            goto label_1890d4;
        }
    }
    ctx->pc = 0x1890CCu;
label_1890cc:
    // 0x1890cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1890d0:
    if (ctx->pc == 0x1890D0u) {
        ctx->pc = 0x1890D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890CCu;
        // 0x1890d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1890D4u;
        goto label_1890d4;
    }
    ctx->pc = 0x1890CCu;
    {
        const bool branch_taken_0x1890cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890CCu;
        // 0x1890d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890cc) {
            ctx->pc = 0x1890E8u;
            goto label_1890e8;
        }
    }
    ctx->pc = 0x1890D4u;
label_1890d4:
    // 0x1890d4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1890d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_1890d8:
    // 0x1890d8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1890d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_1890dc:
    // 0x1890dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1890dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1890e0:
    // 0x1890e0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1890e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1890e4:
    // 0x1890e4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1890e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1890e8:
    // 0x1890e8: 0x3e00008  jr          $ra
label_1890ec:
    if (ctx->pc == 0x1890ECu) {
        ctx->pc = 0x1890F0u;
        goto label_1890f0;
    }
    ctx->pc = 0x1890E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1890E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1890F0u;
label_1890f0:
    // 0x1890f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1890f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1890f4:
    // 0x1890f4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1890f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_1890f8:
    // 0x1890f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1890f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1890fc:
    // 0x1890fc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1890fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_189100:
    // 0x189100: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x189100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_189104:
    // 0x189104: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_189108:
    // 0x189108: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x189108u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18910c:
    // 0x18910c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_189110:
    // 0x189110: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x189110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189114:
    // 0x189114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_189118:
    // 0x189118: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x189118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18911c:
    // 0x18911c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_189120:
    // 0x189120: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x189120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
label_189124:
    // 0x189124: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_189128:
    // 0x189128: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_18912c:
    if (ctx->pc == 0x18912Cu) {
        ctx->pc = 0x18912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189128u;
        // 0x18912c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189130u;
        goto label_189130;
    }
    ctx->pc = 0x189128u;
    {
        const bool branch_taken_0x189128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189128u;
        // 0x18912c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189128) {
            ctx->pc = 0x18915Cu;
            goto label_18915c;
        }
    }
    ctx->pc = 0x189130u;
label_189130:
    // 0x189130: 0xc05c6ac  jal         func_171AB0
label_189134:
    if (ctx->pc == 0x189134u) {
        ctx->pc = 0x189134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189130u;
        // 0x189134: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189138u;
        goto label_189138;
    }
    ctx->pc = 0x189130u;
    SET_GPR_U32(ctx, 31, 0x189138u);
    ctx->pc = 0x189134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189130u;
    // 0x189134: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x189130u, 0x189138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189138u;
label_189138:
    // 0x189138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18913c:
    // 0x18913c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18913cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189140:
    // 0x189140: 0xc05c6cc  jal         func_171B30
label_189144:
    if (ctx->pc == 0x189144u) {
        ctx->pc = 0x189144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189140u;
        // 0x189144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189148u;
        goto label_189148;
    }
    ctx->pc = 0x189140u;
    SET_GPR_U32(ctx, 31, 0x189148u);
    ctx->pc = 0x189144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189140u;
    // 0x189144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x189140u, 0x189148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189148u;
label_189148:
    // 0x189148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18914c:
    // 0x18914c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x18914cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_189150:
    // 0x189150: 0xc05c6cc  jal         func_171B30
label_189154:
    if (ctx->pc == 0x189154u) {
        ctx->pc = 0x189154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189150u;
        // 0x189154: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189158u;
        goto label_189158;
    }
    ctx->pc = 0x189150u;
    SET_GPR_U32(ctx, 31, 0x189158u);
    ctx->pc = 0x189154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189150u;
    // 0x189154: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x189150u, 0x189158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189158u;
label_189158:
    // 0x189158: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x189158u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_18915c:
    // 0x18915c: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x18915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_189160:
    // 0x189160: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x189160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_189164:
    // 0x189164: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_189168:
    if (ctx->pc == 0x189168u) {
        ctx->pc = 0x189168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189164u;
        // 0x189168: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18916Cu;
        goto label_18916c;
    }
    ctx->pc = 0x189164u;
    {
        const bool branch_taken_0x189164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189164) {
            ctx->pc = 0x189168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189164u;
            // 0x189168: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189174u;
            goto label_189174;
        }
    }
    ctx->pc = 0x18916Cu;
label_18916c:
    // 0x18916c: 0x10000054  b           . + 4 + (0x54 << 2)
label_189170:
    if (ctx->pc == 0x189170u) {
        ctx->pc = 0x189170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18916Cu;
        // 0x189170: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189174u;
        goto label_189174;
    }
    ctx->pc = 0x18916Cu;
    {
        const bool branch_taken_0x18916c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18916Cu;
        // 0x189170: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18916c) {
            ctx->pc = 0x1892C0u;
            goto label_1892c0;
        }
    }
    ctx->pc = 0x189174u;
label_189174:
    // 0x189174: 0xc0624b8  jal         func_1892E0
label_189178:
    if (ctx->pc == 0x189178u) {
        ctx->pc = 0x18917Cu;
        goto label_18917c;
    }
    ctx->pc = 0x189174u;
    SET_GPR_U32(ctx, 31, 0x18917Cu);
    ctx->pc = 0x1892E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892E0u, 0x189174u, 0x18917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18917Cu;
label_18917c:
    // 0x18917c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x18917cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_189180:
    // 0x189180: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x189180u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_189184:
    // 0x189184: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x189184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_189188:
    // 0x189188: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_18918c:
    if (ctx->pc == 0x18918Cu) {
        ctx->pc = 0x189190u;
        goto label_189190;
    }
    ctx->pc = 0x189188u;
    {
        const bool branch_taken_0x189188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189188) {
            ctx->pc = 0x189198u;
            goto label_189198;
        }
    }
    ctx->pc = 0x189190u;
label_189190:
    // 0x189190: 0x1000004c  b           . + 4 + (0x4C << 2)
label_189194:
    if (ctx->pc == 0x189194u) {
        ctx->pc = 0x189194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189190u;
        // 0x189194: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189198u;
        goto label_189198;
    }
    ctx->pc = 0x189190u;
    {
        const bool branch_taken_0x189190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189190u;
        // 0x189194: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189190) {
            ctx->pc = 0x1892C4u;
            goto label_1892c4;
        }
    }
    ctx->pc = 0x189198u;
label_189198:
    // 0x189198: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x189198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
label_18919c:
    // 0x18919c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x18919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1891a0:
    // 0x1891a0: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x1891a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
label_1891a4:
    // 0x1891a4: 0x3250ffff  andi        $s0, $s2, 0xFFFF
    ctx->pc = 0x1891a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_1891a8:
    // 0x1891a8: 0x14640019  bne         $v1, $a0, . + 4 + (0x19 << 2)
label_1891ac:
    if (ctx->pc == 0x1891ACu) {
        ctx->pc = 0x1891ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891A8u;
        // 0x1891ac: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1891B0u;
        goto label_1891b0;
    }
    ctx->pc = 0x1891A8u;
    {
        const bool branch_taken_0x1891a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1891ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891A8u;
        // 0x1891ac: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1891a8) {
            ctx->pc = 0x189210u;
            goto label_189210;
        }
    }
    ctx->pc = 0x1891B0u;
label_1891b0:
    // 0x1891b0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x1891b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_1891b4:
    // 0x1891b4: 0x9063bedb  lbu         $v1, -0x4125($v1)
    ctx->pc = 0x1891b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950619)));
label_1891b8:
    // 0x1891b8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_1891bc:
    if (ctx->pc == 0x1891BCu) {
        ctx->pc = 0x1891BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891B8u;
        // 0x1891bc: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1891C0u;
        goto label_1891c0;
    }
    ctx->pc = 0x1891B8u;
    {
        const bool branch_taken_0x1891b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1891b8) {
            ctx->pc = 0x1891BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1891B8u;
            // 0x1891bc: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1891C8u;
            goto label_1891c8;
        }
    }
    ctx->pc = 0x1891C0u;
label_1891c0:
    // 0x1891c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1891c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1891c4:
    // 0x1891c4: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x1891c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_1891c8:
    // 0x1891c8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1891c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
label_1891cc:
    // 0x1891cc: 0x90639720  lbu         $v1, -0x68E0($v1)
    ctx->pc = 0x1891ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
label_1891d0:
    // 0x1891d0: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x1891d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
label_1891d4:
    // 0x1891d4: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x1891d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_1891d8:
    // 0x1891d8: 0x5483000e  bnel        $a0, $v1, . + 4 + (0xE << 2)
label_1891dc:
    if (ctx->pc == 0x1891DCu) {
        ctx->pc = 0x1891DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1891D8u;
        // 0x1891dc: 0x8e84048c  lw          $a0, 0x48C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1891E0u;
        goto label_1891e0;
    }
    ctx->pc = 0x1891D8u;
    {
        const bool branch_taken_0x1891d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1891d8) {
            ctx->pc = 0x1891DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1891D8u;
            // 0x1891dc: 0x8e84048c  lw          $a0, 0x48C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189214u;
            goto label_189214;
        }
    }
    ctx->pc = 0x1891E0u;
label_1891e0:
    // 0x1891e0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x1891e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_1891e4:
    // 0x1891e4: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1891e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_1891e8:
    // 0x1891e8: 0x8c63bee4  lw          $v1, -0x411C($v1)
    ctx->pc = 0x1891e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
label_1891ec:
    // 0x1891ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1891ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1891f0:
    // 0x1891f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1891f4:
    if (ctx->pc == 0x1891F4u) {
        ctx->pc = 0x1891F8u;
        goto label_1891f8;
    }
    ctx->pc = 0x1891F0u;
    {
        const bool branch_taken_0x1891f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1891f0) {
            ctx->pc = 0x189210u;
            goto label_189210;
        }
    }
    ctx->pc = 0x1891F8u;
label_1891f8:
    // 0x1891f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1891f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1891fc:
    // 0x1891fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1891fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_189200:
    // 0x189200: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_189204:
    if (ctx->pc == 0x189204u) {
        ctx->pc = 0x189208u;
        goto label_189208;
    }
    ctx->pc = 0x189200u;
    {
        const bool branch_taken_0x189200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189200) {
            ctx->pc = 0x189210u;
            goto label_189210;
        }
    }
    ctx->pc = 0x189208u;
label_189208:
    // 0x189208: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x189208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_18920c:
    // 0x18920c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_189210:
    // 0x189210: 0x8e84048c  lw          $a0, 0x48C($s4)
    ctx->pc = 0x189210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1164)));
label_189214:
    // 0x189214: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x189214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_189218:
    // 0x189218: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x189218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_18921c:
    // 0x18921c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_189220:
    if (ctx->pc == 0x189220u) {
        ctx->pc = 0x189224u;
        goto label_189224;
    }
    ctx->pc = 0x18921Cu;
    {
        const bool branch_taken_0x18921c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18921c) {
            ctx->pc = 0x189264u;
            goto label_189264;
        }
    }
    ctx->pc = 0x189224u;
label_189224:
    // 0x189224: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x189224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_189228:
    // 0x189228: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x189228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18922c:
    // 0x18922c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_189230:
    if (ctx->pc == 0x189230u) {
        ctx->pc = 0x189230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18922Cu;
        // 0x189230: 0x9283008c  lbu         $v1, 0x8C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189234u;
        goto label_189234;
    }
    ctx->pc = 0x18922Cu;
    {
        const bool branch_taken_0x18922c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18922c) {
            ctx->pc = 0x189230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18922Cu;
            // 0x189230: 0x9283008c  lbu         $v1, 0x8C($s4) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18923Cu;
            goto label_18923c;
        }
    }
    ctx->pc = 0x189234u;
label_189234:
    // 0x189234: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x189234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_189238:
    // 0x189238: 0x9283008c  lbu         $v1, 0x8C($s4)
    ctx->pc = 0x189238u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_18923c:
    // 0x18923c: 0x711826  xor         $v1, $v1, $s1
    ctx->pc = 0x18923cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 17));
label_189240:
    // 0x189240: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x189240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_189244:
    // 0x189244: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_189248:
    if (ctx->pc == 0x189248u) {
        ctx->pc = 0x18924Cu;
        goto label_18924c;
    }
    ctx->pc = 0x189244u;
    {
        const bool branch_taken_0x189244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189244) {
            ctx->pc = 0x189258u;
            goto label_189258;
        }
    }
    ctx->pc = 0x18924Cu;
label_18924c:
    // 0x18924c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x18924cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_189250:
    // 0x189250: 0x10000006  b           . + 4 + (0x6 << 2)
label_189254:
    if (ctx->pc == 0x189254u) {
        ctx->pc = 0x189254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189250u;
        // 0x189254: 0x24633f60  addiu       $v1, $v1, 0x3F60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189258u;
        goto label_189258;
    }
    ctx->pc = 0x189250u;
    {
        const bool branch_taken_0x189250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189250u;
        // 0x189254: 0x24633f60  addiu       $v1, $v1, 0x3F60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189250) {
            ctx->pc = 0x18926Cu;
            goto label_18926c;
        }
    }
    ctx->pc = 0x189258u;
label_189258:
    // 0x189258: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x189258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_18925c:
    // 0x18925c: 0x10000003  b           . + 4 + (0x3 << 2)
label_189260:
    if (ctx->pc == 0x189260u) {
        ctx->pc = 0x189260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18925Cu;
        // 0x189260: 0x24633f20  addiu       $v1, $v1, 0x3F20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189264u;
        goto label_189264;
    }
    ctx->pc = 0x18925Cu;
    {
        const bool branch_taken_0x18925c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18925Cu;
        // 0x189260: 0x24633f20  addiu       $v1, $v1, 0x3F20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18925c) {
            ctx->pc = 0x18926Cu;
            goto label_18926c;
        }
    }
    ctx->pc = 0x189264u;
label_189264:
    // 0x189264: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x189264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_189268:
    // 0x189268: 0x24633ee0  addiu       $v1, $v1, 0x3EE0
    ctx->pc = 0x189268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16096));
label_18926c:
    // 0x18926c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_189270:
    // 0x189270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_189274:
    // 0x189274: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x189274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_189278:
    // 0x189278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x189278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18927c:
    // 0x18927c: 0x40f809  jalr        $v0
label_189280:
    if (ctx->pc == 0x189280u) {
        ctx->pc = 0x189280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18927Cu;
        // 0x189280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189284u;
        goto label_189284;
    }
    ctx->pc = 0x18927Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x189284u);
        ctx->pc = 0x189280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18927Cu;
        // 0x189280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18927Cu, 0x189284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x189284u;
label_189284:
    // 0x189284: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x189284u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_189288:
    // 0x189288: 0x8e82048c  lw          $v0, 0x48C($s4)
    ctx->pc = 0x189288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1164)));
label_18928c:
    // 0x18928c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_189290:
    // 0x189290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_189294:
    if (ctx->pc == 0x189294u) {
        ctx->pc = 0x189294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189290u;
        // 0x189294: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189298u;
        goto label_189298;
    }
    ctx->pc = 0x189290u;
    {
        const bool branch_taken_0x189290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189290u;
        // 0x189294: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189290) {
            ctx->pc = 0x1892A8u;
            goto label_1892a8;
        }
    }
    ctx->pc = 0x189298u;
label_189298:
    // 0x189298: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x189298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_18929c:
    // 0x18929c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1892a0:
    if (ctx->pc == 0x1892A0u) {
        ctx->pc = 0x1892A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18929Cu;
        // 0x1892a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1892A4u;
        goto label_1892a4;
    }
    ctx->pc = 0x18929Cu;
    {
        const bool branch_taken_0x18929c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18929c) {
            ctx->pc = 0x1892A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18929Cu;
            // 0x1892a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1892ACu;
            goto label_1892ac;
        }
    }
    ctx->pc = 0x1892A4u;
label_1892a4:
    // 0x1892a4: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1892a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1892a8:
    // 0x1892a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1892a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1892ac:
    // 0x1892ac: 0xc05a11c  jal         func_168470
label_1892b0:
    if (ctx->pc == 0x1892B0u) {
        ctx->pc = 0x1892B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892ACu;
        // 0x1892b0: 0x3225ffff  andi        $a1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1892B4u;
        goto label_1892b4;
    }
    ctx->pc = 0x1892ACu;
    SET_GPR_U32(ctx, 31, 0x1892B4u);
    ctx->pc = 0x1892B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1892ACu;
    // 0x1892b0: 0x3225ffff  andi        $a1, $s1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x168470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168470u, 0x1892ACu, 0x1892B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1892B4u;
label_1892b4:
    // 0x1892b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1892b8:
    if (ctx->pc == 0x1892B8u) {
        ctx->pc = 0x1892B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892B4u;
        // 0x1892b8: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1892BCu;
        goto label_1892bc;
    }
    ctx->pc = 0x1892B4u;
    {
        const bool branch_taken_0x1892b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1892b4) {
            ctx->pc = 0x1892B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1892B4u;
            // 0x1892b8: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1892BCu;
            goto label_1892bc;
        }
    }
    ctx->pc = 0x1892BCu;
label_1892bc:
    // 0x1892bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1892bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1892c0:
    // 0x1892c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1892c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1892c4:
    // 0x1892c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1892c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1892c8:
    // 0x1892c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1892c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1892cc:
    // 0x1892cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1892ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1892d0:
    // 0x1892d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1892d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1892d4:
    // 0x1892d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1892d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1892d8:
    // 0x1892d8: 0x3e00008  jr          $ra
label_1892dc:
    if (ctx->pc == 0x1892DCu) {
        ctx->pc = 0x1892DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892D8u;
        // 0x1892dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1892E0u;
        goto label_fallthrough_0x1892d8;
    }
    ctx->pc = 0x1892D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1892DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892D8u;
        // 0x1892dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1892D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1892d8:
    ctx->pc = 0x1892E0u;
}
