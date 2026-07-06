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

// Function: sub_00140580
// Address: 0x140580 - 0x140740
void sub_00140580_0x140580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140580_0x140580");
#endif

    switch (ctx->pc) {
        case 0x1405a8u: goto label_1405a8;
        case 0x140664u: goto label_140664;
        case 0x140678u: goto label_140678;
        case 0x140694u: goto label_140694;
        case 0x1406a8u: goto label_1406a8;
        case 0x1406bcu: goto label_1406bc;
        case 0x140704u: goto label_140704;
        case 0x140718u: goto label_140718;
        default: break;
    }

    ctx->pc = 0x140580u;

    // 0x140580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x140580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x140584: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x140584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x140588: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x140588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14058c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x140590: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x140590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14059c: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x14059cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x1405a0: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x1405A0u;
    SET_GPR_U32(ctx, 31, 0x1405A8u);
    ctx->pc = 0x1405A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1405A0u;
    // 0x1405a4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x1405A0u, 0x1405A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1405A8u;
label_1405a8:
    // 0x1405a8: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1405a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x1405ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1405acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1405b0: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x1405b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x1405b4: 0x132fc2  srl         $a1, $s3, 31
    ctx->pc = 0x1405b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x1405b8: 0x730018  mult        $zero, $v1, $s3
    ctx->pc = 0x1405b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1405bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1405bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1405c0: 0x0  nop
    ctx->pc = 0x1405c0u;
    // NOP
    // 0x1405c4: 0x1810  mfhi        $v1
    ctx->pc = 0x1405c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1405c8: 0x267001a  div         $zero, $s3, $a3
    ctx->pc = 0x1405c8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1405cc: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1405ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1405d0: 0x0  nop
    ctx->pc = 0x1405d0u;
    // NOP
    // 0x1405d4: 0x2810  mfhi        $a1
    ctx->pc = 0x1405d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1405d8: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1405D8u;
    {
        const bool branch_taken_0x1405d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1405DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405D8u;
        // 0x1405dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405d8) {
            ctx->pc = 0x1405FCu;
            goto label_1405fc;
        }
    }
    ctx->pc = 0x1405E0u;
    // 0x1405e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1405e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1405e4: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1405E4u;
    {
        const bool branch_taken_0x1405e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1405e4) {
            ctx->pc = 0x1405E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1405E4u;
            // 0x1405e8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140600u;
            goto label_140600;
        }
    }
    ctx->pc = 0x1405ECu;
    // 0x1405ec: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1405ECu;
    {
        const bool branch_taken_0x1405ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1405ec) {
            ctx->pc = 0x1405F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1405ECu;
            // 0x1405f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140600u;
            goto label_140600;
        }
    }
    ctx->pc = 0x1405F4u;
    // 0x1405f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1405F4u;
    {
        const bool branch_taken_0x1405f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1405F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1405F4u;
        // 0x1405f8: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1405f4) {
            ctx->pc = 0x140604u;
            goto label_140604;
        }
    }
    ctx->pc = 0x1405FCu;
label_1405fc:
    // 0x1405fc: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x1405fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_140600:
    // 0x140600: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x140600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_140604:
    // 0x140604: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x140604u;
    {
        const bool branch_taken_0x140604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140604) {
            ctx->pc = 0x1406DCu;
            goto label_1406dc;
        }
    }
    ctx->pc = 0x14060Cu;
    // 0x14060c: 0x8e430490  lw          $v1, 0x490($s2)
    ctx->pc = 0x14060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
    // 0x140610: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x140610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x140614: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x140614u;
    {
        const bool branch_taken_0x140614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140614) {
            ctx->pc = 0x1406DCu;
            goto label_1406dc;
        }
    }
    ctx->pc = 0x14061Cu;
    // 0x14061c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x140620: 0x50c30018  beql        $a2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x140620u;
    {
        const bool branch_taken_0x140620 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x140620) {
            ctx->pc = 0x140624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140620u;
            // 0x140624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140684u;
            goto label_140684;
        }
    }
    ctx->pc = 0x140628u;
    // 0x140628: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x140628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14062c: 0x10c30014  beq         $a2, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14062Cu;
    {
        const bool branch_taken_0x14062c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x14062c) {
            ctx->pc = 0x140680u;
            goto label_140680;
        }
    }
    ctx->pc = 0x140634u;
    // 0x140634: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140638: 0x50c30006  beql        $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x140638u;
    {
        const bool branch_taken_0x140638 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x140638) {
            ctx->pc = 0x14063Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140638u;
            // 0x14063c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140654u;
            goto label_140654;
        }
    }
    ctx->pc = 0x140640u;
    // 0x140640: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x140640u;
    {
        const bool branch_taken_0x140640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x140640) {
            ctx->pc = 0x140650u;
            goto label_140650;
        }
    }
    ctx->pc = 0x140648u;
    // 0x140648: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x140648u;
    {
        const bool branch_taken_0x140648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140648u;
        // 0x14064c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140648) {
            ctx->pc = 0x1406C0u;
            goto label_1406c0;
        }
    }
    ctx->pc = 0x140650u;
label_140650:
    // 0x140650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140654:
    // 0x140654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140658: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14065c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x14065Cu;
    SET_GPR_U32(ctx, 31, 0x140664u);
    ctx->pc = 0x140660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14065Cu;
    // 0x140660: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x14065Cu, 0x140664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140664u;
label_140664:
    // 0x140664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14066c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14066cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140670: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140670u;
    SET_GPR_U32(ctx, 31, 0x140678u);
    ctx->pc = 0x140674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140670u;
    // 0x140674: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x140670u, 0x140678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140678u;
label_140678:
    // 0x140678: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x140678u;
    {
        const bool branch_taken_0x140678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140678u;
        // 0x14067c: 0xae400238  sw          $zero, 0x238($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140678) {
            ctx->pc = 0x1406BCu;
            goto label_1406bc;
        }
    }
    ctx->pc = 0x140680u;
label_140680:
    // 0x140680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140684:
    // 0x140684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14068c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x14068Cu;
    SET_GPR_U32(ctx, 31, 0x140694u);
    ctx->pc = 0x140690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14068Cu;
    // 0x140690: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x14068Cu, 0x140694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140694u;
label_140694:
    // 0x140694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140698: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x140698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x14069c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14069cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406a0: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1406A0u;
    SET_GPR_U32(ctx, 31, 0x1406A8u);
    ctx->pc = 0x1406A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406A0u;
    // 0x1406a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x1406A0u, 0x1406A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406A8u;
label_1406a8:
    // 0x1406a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1406a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1406acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1406b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406b4: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1406B4u;
    SET_GPR_U32(ctx, 31, 0x1406BCu);
    ctx->pc = 0x1406B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406B4u;
    // 0x1406b8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x1406B4u, 0x1406BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406BCu;
label_1406bc:
    // 0x1406bc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1406bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1406c0:
    // 0x1406c0: 0xa643020c  sh          $v1, 0x20C($s2)
    ctx->pc = 0x1406c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 524), (uint16_t)GPR_U32(ctx, 3));
    // 0x1406c4: 0xae400214  sw          $zero, 0x214($s2)
    ctx->pc = 0x1406c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 0));
    // 0x1406c8: 0xae400220  sw          $zero, 0x220($s2)
    ctx->pc = 0x1406c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 0));
    // 0x1406cc: 0x86430228  lh          $v1, 0x228($s2)
    ctx->pc = 0x1406ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 552)));
    // 0x1406d0: 0xa643022a  sh          $v1, 0x22A($s2)
    ctx->pc = 0x1406d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 554), (uint16_t)GPR_U32(ctx, 3));
    // 0x1406d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1406D4u;
    {
        const bool branch_taken_0x1406d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1406D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1406D4u;
        // 0x1406d8: 0xa6400228  sh          $zero, 0x228($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 552), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1406d4) {
            ctx->pc = 0x140718u;
            goto label_140718;
        }
    }
    ctx->pc = 0x1406DCu;
label_1406dc:
    // 0x1406dc: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1406DCu;
    {
        const bool branch_taken_0x1406dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1406dc) {
            ctx->pc = 0x1406E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1406DCu;
            // 0x1406e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1406F4u;
            goto label_1406f4;
        }
    }
    ctx->pc = 0x1406E4u;
    // 0x1406e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1406e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1406e8: 0x54c3000c  bnel        $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1406E8u;
    {
        const bool branch_taken_0x1406e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1406e8) {
            ctx->pc = 0x1406ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1406E8u;
            // 0x1406ec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14071Cu;
            goto label_14071c;
        }
    }
    ctx->pc = 0x1406F0u;
    // 0x1406f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1406f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1406f4:
    // 0x1406f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1406f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1406f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406fc: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1406FCu;
    SET_GPR_U32(ctx, 31, 0x140704u);
    ctx->pc = 0x140700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406FCu;
    // 0x140700: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x1406FCu, 0x140704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140704u;
label_140704:
    // 0x140704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14070c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14070cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140710: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140710u;
    SET_GPR_U32(ctx, 31, 0x140718u);
    ctx->pc = 0x140714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140710u;
    // 0x140714: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x140710u, 0x140718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140718u;
label_140718:
    // 0x140718: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x140718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14071c:
    // 0x14071c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14071cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x140720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14072c: 0x3e00008  jr          $ra
    ctx->pc = 0x14072Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14072Cu;
        // 0x140730: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14072Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140734u;
    // 0x140734: 0x0  nop
    ctx->pc = 0x140734u;
    // NOP
    // 0x140738: 0x0  nop
    ctx->pc = 0x140738u;
    // NOP
    // 0x14073c: 0x0  nop
    ctx->pc = 0x14073cu;
    // NOP
}
