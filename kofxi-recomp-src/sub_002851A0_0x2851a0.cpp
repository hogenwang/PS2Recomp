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

// Function: sub_002851A0
// Address: 0x2851a0 - 0x2852c0
void sub_002851A0_0x2851a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002851A0_0x2851a0");
#endif

    switch (ctx->pc) {
        case 0x2851a0u: goto label_2851a0;
        case 0x2851a4u: goto label_2851a4;
        case 0x2851a8u: goto label_2851a8;
        case 0x2851acu: goto label_2851ac;
        case 0x2851b0u: goto label_2851b0;
        case 0x2851b4u: goto label_2851b4;
        case 0x2851b8u: goto label_2851b8;
        case 0x2851bcu: goto label_2851bc;
        case 0x2851c0u: goto label_2851c0;
        case 0x2851c4u: goto label_2851c4;
        case 0x2851c8u: goto label_2851c8;
        case 0x2851ccu: goto label_2851cc;
        case 0x2851d0u: goto label_2851d0;
        case 0x2851d4u: goto label_2851d4;
        case 0x2851d8u: goto label_2851d8;
        case 0x2851dcu: goto label_2851dc;
        case 0x2851e0u: goto label_2851e0;
        case 0x2851e4u: goto label_2851e4;
        case 0x2851e8u: goto label_2851e8;
        case 0x2851ecu: goto label_2851ec;
        case 0x2851f0u: goto label_2851f0;
        case 0x2851f4u: goto label_2851f4;
        case 0x2851f8u: goto label_2851f8;
        case 0x2851fcu: goto label_2851fc;
        case 0x285200u: goto label_285200;
        case 0x285204u: goto label_285204;
        case 0x285208u: goto label_285208;
        case 0x28520cu: goto label_28520c;
        case 0x285210u: goto label_285210;
        case 0x285214u: goto label_285214;
        case 0x285218u: goto label_285218;
        case 0x28521cu: goto label_28521c;
        case 0x285220u: goto label_285220;
        case 0x285224u: goto label_285224;
        case 0x285228u: goto label_285228;
        case 0x28522cu: goto label_28522c;
        case 0x285230u: goto label_285230;
        case 0x285234u: goto label_285234;
        case 0x285238u: goto label_285238;
        case 0x28523cu: goto label_28523c;
        case 0x285240u: goto label_285240;
        case 0x285244u: goto label_285244;
        case 0x285248u: goto label_285248;
        case 0x28524cu: goto label_28524c;
        case 0x285250u: goto label_285250;
        case 0x285254u: goto label_285254;
        case 0x285258u: goto label_285258;
        case 0x28525cu: goto label_28525c;
        case 0x285260u: goto label_285260;
        case 0x285264u: goto label_285264;
        case 0x285268u: goto label_285268;
        case 0x28526cu: goto label_28526c;
        case 0x285270u: goto label_285270;
        case 0x285274u: goto label_285274;
        case 0x285278u: goto label_285278;
        case 0x28527cu: goto label_28527c;
        case 0x285280u: goto label_285280;
        case 0x285284u: goto label_285284;
        case 0x285288u: goto label_285288;
        case 0x28528cu: goto label_28528c;
        case 0x285290u: goto label_285290;
        case 0x285294u: goto label_285294;
        case 0x285298u: goto label_285298;
        case 0x28529cu: goto label_28529c;
        case 0x2852a0u: goto label_2852a0;
        case 0x2852a4u: goto label_2852a4;
        case 0x2852a8u: goto label_2852a8;
        case 0x2852acu: goto label_2852ac;
        case 0x2852b0u: goto label_2852b0;
        case 0x2852b4u: goto label_2852b4;
        case 0x2852b8u: goto label_2852b8;
        case 0x2852bcu: goto label_2852bc;
        default: break;
    }

    ctx->pc = 0x2851a0u;

label_2851a0:
    // 0x2851a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2851a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2851a4:
    // 0x2851a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2851a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2851a8:
    // 0x2851a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2851a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2851ac:
    // 0x2851ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2851acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2851b0:
    // 0x2851b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2851b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2851b4:
    // 0x2851b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2851b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2851b8:
    // 0x2851b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2851b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2851bc:
    // 0x2851bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2851bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2851c0:
    // 0x2851c0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2851c4:
    if (ctx->pc == 0x2851C4u) {
        ctx->pc = 0x2851C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851C0u;
        // 0x2851c4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851C8u;
        goto label_2851c8;
    }
    ctx->pc = 0x2851C0u;
    {
        const bool branch_taken_0x2851c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851C0u;
        // 0x2851c4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851c0) {
            ctx->pc = 0x2851E0u;
            goto label_2851e0;
        }
    }
    ctx->pc = 0x2851C8u;
label_2851c8:
    // 0x2851c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2851c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2851cc:
    // 0x2851cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2851d0:
    if (ctx->pc == 0x2851D0u) {
        ctx->pc = 0x2851D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851CCu;
        // 0x2851d0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851D4u;
        goto label_2851d4;
    }
    ctx->pc = 0x2851CCu;
    {
        const bool branch_taken_0x2851cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851CCu;
        // 0x2851d0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851cc) {
            ctx->pc = 0x2851E4u;
            goto label_2851e4;
        }
    }
    ctx->pc = 0x2851D4u;
label_2851d4:
    // 0x2851d4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2851d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2851d8:
    // 0x2851d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2851dc:
    if (ctx->pc == 0x2851DCu) {
        ctx->pc = 0x2851DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851D8u;
        // 0x2851dc: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851E0u;
        goto label_2851e0;
    }
    ctx->pc = 0x2851D8u;
    {
        const bool branch_taken_0x2851d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2851d8) {
            ctx->pc = 0x2851DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2851D8u;
            // 0x2851dc: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2851F0u;
            goto label_2851f0;
        }
    }
    ctx->pc = 0x2851E0u;
label_2851e0:
    // 0x2851e0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2851e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2851e4:
    // 0x2851e4: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x2851e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_2851e8:
    // 0x2851e8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2851ec:
    if (ctx->pc == 0x2851ECu) {
        ctx->pc = 0x2851ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851E8u;
        // 0x2851ec: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851F0u;
        goto label_2851f0;
    }
    ctx->pc = 0x2851E8u;
    {
        const bool branch_taken_0x2851e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851E8u;
        // 0x2851ec: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851e8) {
            ctx->pc = 0x285238u;
            goto label_285238;
        }
    }
    ctx->pc = 0x2851F0u;
label_2851f0:
    // 0x2851f0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_2851f4:
    if (ctx->pc == 0x2851F4u) {
        ctx->pc = 0x2851F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851F0u;
        // 0x2851f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851F8u;
        goto label_2851f8;
    }
    ctx->pc = 0x2851F0u;
    {
        const bool branch_taken_0x2851f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851F0u;
        // 0x2851f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851f0) {
            ctx->pc = 0x285220u;
            goto label_285220;
        }
    }
    ctx->pc = 0x2851F8u;
label_2851f8:
    // 0x2851f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2851f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2851fc:
    // 0x2851fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2851fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285200:
    // 0x285200: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x285200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285204:
    // 0x285204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285208:
    // 0x285208: 0x220f809  jalr        $s1
label_28520c:
    if (ctx->pc == 0x28520Cu) {
        ctx->pc = 0x28520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285208u;
        // 0x28520c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285210u;
        goto label_285210;
    }
    ctx->pc = 0x285208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x285210u);
        ctx->pc = 0x28520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285208u;
        // 0x28520c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285208u, 0x285210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285210u;
label_285210:
    // 0x285210: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x285210u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
label_285214:
    // 0x285214: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x285214u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_285218:
    // 0x285218: 0x19200021  blez        $t1, . + 4 + (0x21 << 2)
label_28521c:
    if (ctx->pc == 0x28521Cu) {
        ctx->pc = 0x28521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285218u;
        // 0x28521c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285220u;
        goto label_285220;
    }
    ctx->pc = 0x285218u;
    {
        const bool branch_taken_0x285218 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x28521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285218u;
        // 0x28521c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285218) {
            ctx->pc = 0x2852A0u;
            goto label_2852a0;
        }
    }
    ctx->pc = 0x285220u;
label_285220:
    // 0x285220: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x285220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_285224:
    // 0x285224: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_285228:
    if (ctx->pc == 0x285228u) {
        ctx->pc = 0x285228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285224u;
        // 0x285228: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28522Cu;
        goto label_28522c;
    }
    ctx->pc = 0x285224u;
    {
        const bool branch_taken_0x285224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285224) {
            ctx->pc = 0x285228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285224u;
            // 0x285228: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28524Cu;
            goto label_28524c;
        }
    }
    ctx->pc = 0x28522Cu;
label_28522c:
    // 0x28522c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x28522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_285230:
    // 0x285230: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x285230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_285234:
    // 0x285234: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x285234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_285238:
    // 0x285238: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x285238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28523c:
    // 0x28523c: 0xc0a5648  jal         func_295920
label_285240:
    if (ctx->pc == 0x285240u) {
        ctx->pc = 0x285240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28523Cu;
        // 0x285240: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285244u;
        goto label_285244;
    }
    ctx->pc = 0x28523Cu;
    SET_GPR_U32(ctx, 31, 0x285244u);
    ctx->pc = 0x285240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28523Cu;
    // 0x285240: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28523Cu, 0x285244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285244u;
label_285244:
    // 0x285244: 0x10000016  b           . + 4 + (0x16 << 2)
label_285248:
    if (ctx->pc == 0x285248u) {
        ctx->pc = 0x285248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285244u;
        // 0x285248: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28524Cu;
        goto label_28524c;
    }
    ctx->pc = 0x285244u;
    {
        const bool branch_taken_0x285244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285244u;
        // 0x285248: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285244) {
            ctx->pc = 0x2852A0u;
            goto label_2852a0;
        }
    }
    ctx->pc = 0x28524Cu;
label_28524c:
    // 0x28524c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28524cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285250:
    // 0x285250: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x285250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285254:
    // 0x285254: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x285254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_285258:
    // 0x285258: 0x40f809  jalr        $v0
label_28525c:
    if (ctx->pc == 0x28525Cu) {
        ctx->pc = 0x28525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285258u;
        // 0x28525c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285260u;
        goto label_285260;
    }
    ctx->pc = 0x285258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285260u);
        ctx->pc = 0x28525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285258u;
        // 0x28525c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285258u, 0x285260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285260u;
label_285260:
    // 0x285260: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x285260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285264:
    // 0x285264: 0x19200004  blez        $t1, . + 4 + (0x4 << 2)
label_285268:
    if (ctx->pc == 0x285268u) {
        ctx->pc = 0x28526Cu;
        goto label_28526c;
    }
    ctx->pc = 0x285264u;
    {
        const bool branch_taken_0x285264 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x285264) {
            ctx->pc = 0x285278u;
            goto label_285278;
        }
    }
    ctx->pc = 0x28526Cu;
label_28526c:
    // 0x28526c: 0xde020030  ld          $v0, 0x30($s0)
    ctx->pc = 0x28526cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
label_285270:
    // 0x285270: 0x122102d  daddu       $v0, $t1, $v0
    ctx->pc = 0x285270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
label_285274:
    // 0x285274: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x285274u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
label_285278:
    // 0x285278: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_28527c:
    if (ctx->pc == 0x28527Cu) {
        ctx->pc = 0x28527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285278u;
        // 0x28527c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285280u;
        goto label_285280;
    }
    ctx->pc = 0x285278u;
    {
        const bool branch_taken_0x285278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285278u;
        // 0x28527c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285278) {
            ctx->pc = 0x28529Cu;
            goto label_28529c;
        }
    }
    ctx->pc = 0x285280u;
label_285280:
    // 0x285280: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x285280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285284:
    // 0x285284: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x285284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285288:
    // 0x285288: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x285288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_28528c:
    // 0x28528c: 0x220f809  jalr        $s1
label_285290:
    if (ctx->pc == 0x285290u) {
        ctx->pc = 0x285290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28528Cu;
        // 0x285290: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285294u;
        goto label_285294;
    }
    ctx->pc = 0x28528Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x285294u);
        ctx->pc = 0x285290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28528Cu;
        // 0x285290: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28528Cu, 0x285294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285294u;
label_285294:
    // 0x285294: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x285294u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
label_285298:
    // 0x285298: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x285298u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_28529c:
    // 0x28529c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x28529cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2852a0:
    // 0x2852a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2852a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2852a4:
    // 0x2852a4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2852a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2852a8:
    // 0x2852a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2852a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2852ac:
    // 0x2852ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2852acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2852b0:
    // 0x2852b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2852b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2852b4:
    // 0x2852b4: 0x3e00008  jr          $ra
label_2852b8:
    if (ctx->pc == 0x2852B8u) {
        ctx->pc = 0x2852B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852B4u;
        // 0x2852b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2852BCu;
        goto label_2852bc;
    }
    ctx->pc = 0x2852B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2852B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852B4u;
        // 0x2852b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2852B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2852BCu;
label_2852bc:
    // 0x2852bc: 0x0  nop
    ctx->pc = 0x2852bcu;
    // NOP
    if (ctx->pc == 0x2852bcu) { ctx->pc = 0x2852c0u; }
}
