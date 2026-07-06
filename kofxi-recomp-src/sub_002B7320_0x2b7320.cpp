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

// Function: sub_002B7320
// Address: 0x2b7320 - 0x2b7478
void sub_002B7320_0x2b7320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7320_0x2b7320");
#endif

    switch (ctx->pc) {
        case 0x2b7450u: goto label_2b7450;
        default: break;
    }

    ctx->pc = 0x2b7320u;

    // 0x2b7320: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2b7320u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7324: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2b7324u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7328: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x2b7328u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b732c: 0xe0c02d  daddu       $t8, $a3, $zero
    ctx->pc = 0x2b732cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7330: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2b7330u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7334: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7334u;
    {
        const bool branch_taken_0x2b7334 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7334u;
        // 0x2b7338: 0x100c82d  daddu       $t9, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7334) {
            ctx->pc = 0x2B7344u;
            goto label_2b7344;
        }
    }
    ctx->pc = 0x2B733Cu;
    // 0x2b733c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B733Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B733Cu;
        // 0x2b7340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B733Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7344u;
label_2b7344:
    // 0x2b7344: 0x8d430014  lw          $v1, 0x14($t2)
    ctx->pc = 0x2b7344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x2b7348: 0x31a60003  andi        $a2, $t5, 0x3
    ctx->pc = 0x2b7348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x2b734c: 0xd1083  sra         $v0, $t5, 2
    ctx->pc = 0x2b734cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 13), 2));
    // 0x2b7350: 0x2cc50001  sltiu       $a1, $a2, 0x1
    ctx->pc = 0x2b7350u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b7354: 0x30670003  andi        $a3, $v1, 0x3
    ctx->pc = 0x2b7354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b7358: 0x244201db  addiu       $v0, $v0, 0x1DB
    ctx->pc = 0x2b7358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 475));
    // 0x2b735c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2b735cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2b7360: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x2b7360u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b7364: 0x246301db  addiu       $v1, $v1, 0x1DB
    ctx->pc = 0x2b7364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 475));
    // 0x2b7368: 0x2ce40001  sltiu       $a0, $a3, 0x1
    ctx->pc = 0x2b7368u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b736c: 0x643823  subu        $a3, $v1, $a0
    ctx->pc = 0x2b736cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b7370: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2b7370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b7374: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x2b7374u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b7378: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2b7378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b737c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B737Cu;
    {
        const bool branch_taken_0x2b737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b737c) {
            ctx->pc = 0x2B7380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B737Cu;
            // 0x2b7380: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7384u;
            goto label_2b7384;
        }
    }
    ctx->pc = 0x2B7384u;
label_2b7384:
    // 0x2b7384: 0x8d490008  lw          $t1, 0x8($t2)
    ctx->pc = 0x2b7384u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2b7388: 0x8d480004  lw          $t0, 0x4($t2)
    ctx->pc = 0x2b7388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2b738c: 0x1e94823  subu        $t1, $t7, $t1
    ctx->pc = 0x2b738cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x2b7390: 0x3084023  subu        $t0, $t8, $t0
    ctx->pc = 0x2b7390u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 8)));
    // 0x2b7394: 0x6012  mflo        $t4
    ctx->pc = 0x2b7394u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x2b7398: 0x2810  mfhi        $a1
    ctx->pc = 0x2b7398u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2b739c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2b739cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2b73a0: 0x1852823  subu        $a1, $t4, $a1
    ctx->pc = 0x2b73a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x2b73a4: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x2b73a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b73a8: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x2b73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x2b73ac: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x2b73acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2b73b0: 0x8d470018  lw          $a3, 0x18($t2)
    ctx->pc = 0x2b73b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x2b73b4: 0x1a2102f  dsubu       $v0, $t5, $v0
    ctx->pc = 0x2b73b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) - GPR_U64(ctx, 2));
    // 0x2b73b8: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x2b73b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b73bc: 0x218f8  dsll        $v1, $v0, 3
    ctx->pc = 0x2b73bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 3);
    // 0x2b73c0: 0x1c73823  subu        $a3, $t6, $a3
    ctx->pc = 0x2b73c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x2b73c4: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x2b73c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2b73c8: 0x32a5023  subu        $t2, $t9, $t2
    ctx->pc = 0x2b73c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 10)));
    // 0x2b73cc: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x2b73ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x2b73d0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x2b73d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2b73d4: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x2b73d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x2b73d8: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x2b73d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2b73dc: 0x2010  mfhi        $a0
    ctx->pc = 0x2b73dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2b73e0: 0x5812  mflo        $t3
    ctx->pc = 0x2b73e0u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x2b73e4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2b73e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2b73e8: 0x1642023  subu        $a0, $t3, $a0
    ctx->pc = 0x2b73e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2b73ec: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x2b73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b73f0: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2b73f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2b73f4: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x2b73f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x2b73f8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x2b73f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b73fc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2b73fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b7400: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2b7400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b7404: 0x66182d  daddu       $v1, $v1, $a2
    ctx->pc = 0x2b7404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
    // 0x2b7408: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x2b7408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x2b740c: 0x31078  dsll        $v0, $v1, 1
    ctx->pc = 0x2b740cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 1);
    // 0x2b7410: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2b7410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2b7414: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x2b7414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x2b7418: 0x49102d  daddu       $v0, $v0, $t1
    ctx->pc = 0x2b7418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 9));
    // 0x2b741c: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x2b741cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
    // 0x2b7420: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2b7420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2b7424: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x2b7424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x2b7428: 0x68182d  daddu       $v1, $v1, $t0
    ctx->pc = 0x2b7428u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 8));
    // 0x2b742c: 0x31138  dsll        $v0, $v1, 4
    ctx->pc = 0x2b742cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 4);
    // 0x2b7430: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2b7430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2b7434: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x2b7434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x2b7438: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7438u;
        // 0x2b743c: 0x4a102d  daddu       $v0, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7440u;
    // 0x2b7440: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b7440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b7444: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x2b7444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2b7448: 0x2446e490  addiu       $a2, $v0, -0x1B70
    ctx->pc = 0x2b7448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960272));
    // 0x2b744c: 0x0  nop
    ctx->pc = 0x2b744cu;
    // NOP
label_2b7450:
    // 0x2b7450: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2b7450u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b7454: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b7454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b7458: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2b7458u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b745c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2b745cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7460: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b7460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b7464: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x2b7464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2b7468: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B7468u;
    {
        const bool branch_taken_0x2b7468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7468) {
            ctx->pc = 0x2B7450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b7450;
        }
    }
    ctx->pc = 0x2B7470u;
    // 0x2b7470: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7478u;
}
