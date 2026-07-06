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

// Function: sub_00105370
// Address: 0x105370 - 0x1055c0
void sub_00105370_0x105370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105370_0x105370");
#endif

    switch (ctx->pc) {
        case 0x1053f0u: goto label_1053f0;
        case 0x105444u: goto label_105444;
        case 0x10545cu: goto label_10545c;
        case 0x105478u: goto label_105478;
        case 0x10549cu: goto label_10549c;
        default: break;
    }

    ctx->pc = 0x105370u;

    // 0x105370: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x105370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x105374: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x105374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x105378: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x105378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x10537c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x10537cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105380: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x105380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x105384: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x105384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x105388: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x105388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10538c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x10538cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105390: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x105390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x105394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105398: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x105398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10539c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x10539cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x1053a0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1053a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1053a4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1053a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1053a8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1053a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1053ac: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x1053acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x1053b0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1053b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1053b4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1053b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1053b8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1053B8u;
    {
        const bool branch_taken_0x1053b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1053b8) {
            ctx->pc = 0x1053BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1053B8u;
            // 0x1053bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1053C0u;
            goto label_1053c0;
        }
    }
    ctx->pc = 0x1053C0u;
label_1053c0:
    // 0x1053c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1053c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1053c4: 0x1810  mfhi        $v1
    ctx->pc = 0x1053c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1053c8: 0xb812  mflo        $s7
    ctx->pc = 0x1053c8u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x1053cc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1053ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053d0: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x1053d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1053d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1053D4u;
    {
        const bool branch_taken_0x1053d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053D4u;
        // 0x1053d8: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053d4) {
            ctx->pc = 0x105420u;
            goto label_105420;
        }
    }
    ctx->pc = 0x1053DCu;
    // 0x1053dc: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x1053dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1053e0: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x1053e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x1053e4: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x1053e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x1053e8: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x1053e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x1053ec: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x1053ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_1053f0:
    // 0x1053f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1053f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1053f4: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x1053f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x1053f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1053f8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1053fc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1053fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x105400: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x105400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x105404: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105404u;
    {
        const bool branch_taken_0x105404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105404) {
            ctx->pc = 0x1053F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1053f0;
        }
    }
    ctx->pc = 0x10540Cu;
    // 0x10540c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x105410: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x105410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x105414: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x105414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x105418: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x105418u;
    {
        const bool branch_taken_0x105418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105418u;
        // 0x10541c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105418) {
            ctx->pc = 0x1054B4u;
            goto label_1054b4;
        }
    }
    ctx->pc = 0x105420u;
label_105420:
    // 0x105420: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x105420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x105424: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x105424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x105428: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x105428u;
    {
        const bool branch_taken_0x105428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105428u;
        // 0x10542c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105428) {
            ctx->pc = 0x105454u;
            goto label_105454;
        }
    }
    ctx->pc = 0x105430u;
    // 0x105430: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x105430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x105434: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x105434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105438: 0x24a59fa8  addiu       $a1, $a1, -0x6058
    ctx->pc = 0x105438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942632));
    // 0x10543c: 0xc043070  jal         func_10C1C0
    ctx->pc = 0x10543Cu;
    SET_GPR_U32(ctx, 31, 0x105444u);
    ctx->pc = 0x105440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10543Cu;
    // 0x105440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1C0u, 0x10543Cu, 0x105444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105444u;
label_105444:
    // 0x105444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x105448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10544c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x10544Cu;
    {
        const bool branch_taken_0x10544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10544Cu;
        // 0x105450: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10544c) {
            ctx->pc = 0x105590u;
            goto label_105590;
        }
    }
    ctx->pc = 0x105454u;
label_105454:
    // 0x105454: 0xc04131a  jal         func_104C68
    ctx->pc = 0x105454u;
    SET_GPR_U32(ctx, 31, 0x10545Cu);
    ctx->pc = 0x105458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105454u;
    // 0x105458: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C68u, 0x105454u, 0x10545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10545Cu;
label_10545c:
    // 0x10545c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10545cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105460: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x105460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x105464: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x105464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x105468: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x105468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x10546c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x10546cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x105470: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x105470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x105474: 0x0  nop
    ctx->pc = 0x105474u;
    // NOP
label_105478:
    // 0x105478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10547c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x10547cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x105480: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105484: 0x0  nop
    ctx->pc = 0x105484u;
    // NOP
    // 0x105488: 0x0  nop
    ctx->pc = 0x105488u;
    // NOP
    // 0x10548c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10548Cu;
    {
        const bool branch_taken_0x10548c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10548c) {
            ctx->pc = 0x105478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105478;
        }
    }
    ctx->pc = 0x105494u;
    // 0x105494: 0xc041d86  jal         func_107618
    ctx->pc = 0x105494u;
    SET_GPR_U32(ctx, 31, 0x10549Cu);
    ctx->pc = 0x105498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105494u;
    // 0x105498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107618u, 0x105494u, 0x10549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10549Cu;
label_10549c:
    // 0x10549c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x10549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1054a0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1054a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1054a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1054a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1054a8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x1054a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1054ac: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x1054acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1054b0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1054b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1054b4:
    // 0x1054b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1054b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1054b8: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1054B8u;
    {
        const bool branch_taken_0x1054b8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1054b8) {
            ctx->pc = 0x1054BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1054B8u;
            // 0x1054bc: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1054E4u;
            goto label_1054e4;
        }
    }
    ctx->pc = 0x1054C0u;
    // 0x1054c0: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x1054c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x1054c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1054C4u;
    {
        const bool branch_taken_0x1054c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054C4u;
        // 0x1054c8: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054c4) {
            ctx->pc = 0x1054E0u;
            goto label_1054e0;
        }
    }
    ctx->pc = 0x1054CCu;
    // 0x1054cc: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1054ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1054d0: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1054d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1054d4: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1054d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1054d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1054D8u;
    {
        const bool branch_taken_0x1054d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054D8u;
        // 0x1054dc: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054d8) {
            ctx->pc = 0x1054F4u;
            goto label_1054f4;
        }
    }
    ctx->pc = 0x1054E0u;
label_1054e0:
    // 0x1054e0: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1054e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_1054e4:
    // 0x1054e4: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1054e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1054e8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1054e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1054ec: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1054ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1054f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1054f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1054f4:
    // 0x1054f4: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1054f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1054f8: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x1054f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1054fc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1054fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105500: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x105500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105504: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x105504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x105508: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x105508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x10550c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10550cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x105510: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x105510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x105514: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x105514u;
    {
        const bool branch_taken_0x105514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x105518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105514u;
        // 0x105518: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105514) {
            ctx->pc = 0x105550u;
            goto label_105550;
        }
    }
    ctx->pc = 0x10551Cu;
    // 0x10551c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x10551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x105520: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x105520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x105524: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x105524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x105528: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x105528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10552c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x10552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x105530: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x105530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x105534: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x105534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105538: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x105538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x10553c: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x10553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x105540: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x105540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x105544: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x105544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105548: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x105548u;
    {
        const bool branch_taken_0x105548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105548u;
        // 0x10554c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105548) {
            ctx->pc = 0x10558Cu;
            goto label_10558c;
        }
    }
    ctx->pc = 0x105550u;
label_105550:
    // 0x105550: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x105550u;
    {
        const bool branch_taken_0x105550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x105550) {
            ctx->pc = 0x105554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105550u;
            // 0x105554: 0x8e0201e0  lw          $v0, 0x1E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10555Cu;
            goto label_10555c;
        }
    }
    ctx->pc = 0x105558u;
    // 0x105558: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x105558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_10555c:
    // 0x10555c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x10555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x105560: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x105560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x105564: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x105564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x105568: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x105568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10556c: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x10556cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x105570: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x105570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105574: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x105574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x105578: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x105578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x10557c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x10557cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x105580: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x105580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x105584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105588: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x105588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_10558c:
    // 0x10558c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105590:
    // 0x105590: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x105590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x105594: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x105594u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105598: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x105598u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10559c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10559cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1055a0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1055a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1055a4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1055a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1055a8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1055a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1055ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1055acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1055b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1055b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1055b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1055b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1055b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1055B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1055BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055B8u;
        // 0x1055bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1055B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1055C0u;
}
