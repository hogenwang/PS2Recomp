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

// Function: sub_0033D070
// Address: 0x33d070 - 0x33d9b0
void sub_0033D070_0x33d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D070_0x33d070");
#endif

    switch (ctx->pc) {
        case 0x33d0a8u: goto label_33d0a8;
        case 0x33d12cu: goto label_33d12c;
        case 0x33d160u: goto label_33d160;
        case 0x33d1fcu: goto label_33d1fc;
        case 0x33d274u: goto label_33d274;
        case 0x33d2ecu: goto label_33d2ec;
        case 0x33d37cu: goto label_33d37c;
        case 0x33d444u: goto label_33d444;
        case 0x33d47cu: goto label_33d47c;
        case 0x33d490u: goto label_33d490;
        case 0x33d4b8u: goto label_33d4b8;
        case 0x33d4d4u: goto label_33d4d4;
        case 0x33d510u: goto label_33d510;
        case 0x33d590u: goto label_33d590;
        case 0x33d5ecu: goto label_33d5ec;
        case 0x33d5f4u: goto label_33d5f4;
        case 0x33d628u: goto label_33d628;
        case 0x33d62cu: goto label_33d62c;
        case 0x33d69cu: goto label_33d69c;
        case 0x33d6b8u: goto label_33d6b8;
        case 0x33d6dcu: goto label_33d6dc;
        case 0x33d6fcu: goto label_33d6fc;
        case 0x33d734u: goto label_33d734;
        case 0x33d768u: goto label_33d768;
        case 0x33d7b8u: goto label_33d7b8;
        case 0x33d7fcu: goto label_33d7fc;
        case 0x33d86cu: goto label_33d86c;
        case 0x33d8b0u: goto label_33d8b0;
        case 0x33d8ecu: goto label_33d8ec;
        case 0x33d900u: goto label_33d900;
        case 0x33d928u: goto label_33d928;
        case 0x33d944u: goto label_33d944;
        case 0x33d984u: goto label_33d984;
        default: break;
    }

    ctx->pc = 0x33d070u;

    // 0x33d070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33d074: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d078: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33d078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33d07c: 0x240304b4  addiu       $v1, $zero, 0x4B4
    ctx->pc = 0x33d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33d080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33d084: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33d084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33d088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33d08c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33d08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d090: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x33d090u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d094: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x33d094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33d098: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d09c: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x33d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x33d0a0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x33D0A0u;
    SET_GPR_U32(ctx, 31, 0x33D0A8u);
    ctx->pc = 0x33D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D0A0u;
    // 0x33d0a4: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x33D0A0u, 0x33D0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D0A8u;
label_33d0a8:
    // 0x33d0a8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d0ac: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x33d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x33d0b0: 0x8c66e8c8  lw          $a2, -0x1738($v1)
    ctx->pc = 0x33d0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d0b4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33d0b8: 0x24a5db53  addiu       $a1, $a1, -0x24AD
    ctx->pc = 0x33d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957907));
    // 0x33d0bc: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x33d0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x33d0c0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33d0c4: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x33d0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x33d0c8: 0x90679730  lbu         $a3, -0x68D0($v1)
    ctx->pc = 0x33d0c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940464)));
    // 0x33d0cc: 0x94c80004  lhu         $t0, 0x4($a2)
    ctx->pc = 0x33d0ccu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33d0d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33d0d4: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x33d0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x33d0d8: 0xa488e8a0  sh          $t0, -0x1760($a0)
    ctx->pc = 0x33d0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294961312), (uint16_t)GPR_U32(ctx, 8));
    // 0x33d0dc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x33d0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33d0e0: 0x2463dbc8  addiu       $v1, $v1, -0x2438
    ctx->pc = 0x33d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958024));
    // 0x33d0e4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x33d0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33d0e8: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x33d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33d0ec: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x33d0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33d0f0: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x33d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x33d0f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33d0f8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x33d0f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d0fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33d0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33d100: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33d104: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33d108: 0x10600223  beqz        $v1, . + 4 + (0x223 << 2)
    ctx->pc = 0x33D108u;
    {
        const bool branch_taken_0x33d108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D108u;
        // 0x33d10c: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d108) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D110u;
    // 0x33d110: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d114: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x33d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33d118: 0x8044e860  lb          $a0, -0x17A0($v0)
    ctx->pc = 0x33d118u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961248)));
    // 0x33d11c: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x33d11cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x33d120: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33d120u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33d124: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x33D124u;
    SET_GPR_U32(ctx, 31, 0x33D12Cu);
    ctx->pc = 0x33D128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D124u;
    // 0x33d128: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3366D0u, 0x33D124u, 0x33D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D12Cu;
label_33d12c:
    // 0x33d12c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x33d12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33d130: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33d130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33d134: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x33d134u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x33d138: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d13c: 0xac43e860  sw          $v1, -0x17A0($v0)
    ctx->pc = 0x33d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961248), GPR_U32(ctx, 3));
    // 0x33d140: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d144: 0x8044e864  lb          $a0, -0x179C($v0)
    ctx->pc = 0x33d144u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961252)));
    // 0x33d148: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d14c: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33d14cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d150: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d154: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x33d154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33d158: 0xc0cd978  jal         func_3365E0
    ctx->pc = 0x33D158u;
    SET_GPR_U32(ctx, 31, 0x33D160u);
    ctx->pc = 0x33D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D158u;
    // 0x33d15c: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365E0u, 0x33D158u, 0x33D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D160u;
label_33d160:
    // 0x33d160: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x33d160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33d164: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x33d164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x33d168: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x33d168u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x33d16c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d170: 0x32030020  andi        $v1, $s0, 0x20
    ctx->pc = 0x33d170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x33d174: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33D174u;
    {
        const bool branch_taken_0x33d174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D174u;
        // 0x33d178: 0xac44e864  sw          $a0, -0x179C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d174) {
            ctx->pc = 0x33D1A4u;
            goto label_33d1a4;
        }
    }
    ctx->pc = 0x33D17Cu;
    // 0x33d17c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d180: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33d184: 0x8c42e860  lw          $v0, -0x17A0($v0)
    ctx->pc = 0x33d184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961248)));
    // 0x33d188: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33D188u;
    {
        const bool branch_taken_0x33d188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33d188) {
            ctx->pc = 0x33D18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D188u;
            // 0x33d18c: 0x32020080  andi        $v0, $s0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D1A8u;
            goto label_33d1a8;
        }
    }
    ctx->pc = 0x33D190u;
    // 0x33d190: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D190u;
    {
        const bool branch_taken_0x33d190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d190) {
            ctx->pc = 0x33D1A4u;
            goto label_33d1a4;
        }
    }
    ctx->pc = 0x33D198u;
    // 0x33d198: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d19c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33D19Cu;
    {
        const bool branch_taken_0x33d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D19Cu;
        // 0x33d1a0: 0xac40e860  sw          $zero, -0x17A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d19c) {
            ctx->pc = 0x33D1E0u;
            goto label_33d1e0;
        }
    }
    ctx->pc = 0x33D1A4u;
label_33d1a4:
    // 0x33d1a4: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x33d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
label_33d1a8:
    // 0x33d1a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33D1A8u;
    {
        const bool branch_taken_0x33d1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d1a8) {
            ctx->pc = 0x33D1E0u;
            goto label_33d1e0;
        }
    }
    ctx->pc = 0x33D1B0u;
    // 0x33d1b0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d1b4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x33d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33d1b8: 0x8c42e860  lw          $v0, -0x17A0($v0)
    ctx->pc = 0x33d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961248)));
    // 0x33d1bc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33D1BCu;
    {
        const bool branch_taken_0x33d1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33d1bc) {
            ctx->pc = 0x33D1E0u;
            goto label_33d1e0;
        }
    }
    ctx->pc = 0x33D1C4u;
    // 0x33d1c4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d1c8: 0x8c42e864  lw          $v0, -0x179C($v0)
    ctx->pc = 0x33d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961252)));
    // 0x33d1cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D1CCu;
    {
        const bool branch_taken_0x33d1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d1cc) {
            ctx->pc = 0x33D1E0u;
            goto label_33d1e0;
        }
    }
    ctx->pc = 0x33D1D4u;
    // 0x33d1d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33d1d8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d1dc: 0xac43e860  sw          $v1, -0x17A0($v0)
    ctx->pc = 0x33d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961248), GPR_U32(ctx, 3));
label_33d1e0:
    // 0x33d1e0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d1e4: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x33d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x33d1e8: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33d1e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d1ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d1f0: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x33d1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33d1f4: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x33D1F4u;
    SET_GPR_U32(ctx, 31, 0x33D1FCu);
    ctx->pc = 0x33D1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D1F4u;
    // 0x33d1f8: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x33D1F4u, 0x33D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D1FCu;
label_33d1fc:
    // 0x33d1fc: 0x504000c6  beql        $v0, $zero, . + 4 + (0xC6 << 2)
    ctx->pc = 0x33D1FCu;
    {
        const bool branch_taken_0x33d1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d1fc) {
            ctx->pc = 0x33D200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D1FCu;
            // 0x33d200: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D518u;
            goto label_33d518;
        }
    }
    ctx->pc = 0x33D204u;
    // 0x33d204: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d208: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33d208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33d20c: 0x8c65e864  lw          $a1, -0x179C($v1)
    ctx->pc = 0x33d20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961252)));
    // 0x33d210: 0x24843700  addiu       $a0, $a0, 0x3700
    ctx->pc = 0x33d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14080));
    // 0x33d214: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d218: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x33d218u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x33d21c: 0x8c63e860  lw          $v1, -0x17A0($v1)
    ctx->pc = 0x33d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961248)));
    // 0x33d220: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33d220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33d224: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33d224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33d22c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33d230: 0x2c610016  sltiu       $at, $v1, 0x16
    ctx->pc = 0x33d230u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x33d234: 0x502001d9  beql        $at, $zero, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x33D234u;
    {
        const bool branch_taken_0x33d234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d234) {
            ctx->pc = 0x33D238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D234u;
            // 0x33d238: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D99Cu;
            goto label_33d99c;
        }
    }
    ctx->pc = 0x33D23Cu;
    // 0x33d23c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33d23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33d240: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33d240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d244: 0x24844eb0  addiu       $a0, $a0, 0x4EB0
    ctx->pc = 0x33d244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20144));
    // 0x33d248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33d248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33d24c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33d250: 0x600008  jr          $v1
    ctx->pc = 0x33D250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33D258u: goto label_33d258;
            case 0x33D404u: goto label_33d404;
            case 0x33D41Cu: goto label_33d41c;
            case 0x33D44Cu: goto label_33d44c;
            case 0x33D484u: goto label_33d484;
            case 0x33D4F8u: goto label_33d4f8;
            case 0x33D998u: goto label_33d998;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D250u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33D258u;
label_33d258:
    // 0x33d258: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d25c: 0x8c63e8b0  lw          $v1, -0x1750($v1)
    ctx->pc = 0x33d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961328)));
    // 0x33d260: 0x54600040  bnel        $v1, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x33D260u;
    {
        const bool branch_taken_0x33d260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d260) {
            ctx->pc = 0x33D264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D260u;
            // 0x33d264: 0x96230002  lhu         $v1, 0x2($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D364u;
            goto label_33d364;
        }
    }
    ctx->pc = 0x33D268u;
    // 0x33d268: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33d268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33d26c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D26Cu;
    SET_GPR_U32(ctx, 31, 0x33D274u);
    ctx->pc = 0x33D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D26Cu;
    // 0x33d270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D26Cu, 0x33D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D274u;
label_33d274:
    // 0x33d274: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x33d274u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d278: 0x28610257  slti        $at, $v1, 0x257
    ctx->pc = 0x33d278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)599) ? 1 : 0);
    // 0x33d27c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D27Cu;
    {
        const bool branch_taken_0x33d27c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d27c) {
            ctx->pc = 0x33D28Cu;
            goto label_33d28c;
        }
    }
    ctx->pc = 0x33D284u;
    // 0x33d284: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33d284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33d288: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x33d288u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
label_33d28c:
    // 0x33d28c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d290: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d290u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d294: 0x8c68e8c8  lw          $t0, -0x1738($v1)
    ctx->pc = 0x33d294u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d298: 0x881823  subu        $v1, $a0, $t0
    ctx->pc = 0x33d298u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x33d29c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33d29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33d2a0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33D2A0u;
    {
        const bool branch_taken_0x33d2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d2a0) {
            ctx->pc = 0x33D2ECu;
            goto label_33d2ec;
        }
    }
    ctx->pc = 0x33D2A8u;
    // 0x33d2a8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d2ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33d2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33d2b0: 0x90479730  lbu         $a3, -0x68D0($v0)
    ctx->pc = 0x33d2b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d2b4: 0x240504b4  addiu       $a1, $zero, 0x4B4
    ctx->pc = 0x33d2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33d2b8: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x33d2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33d2bc: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33d2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33d2c0: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x33d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33d2c4: 0x24848b10  addiu       $a0, $a0, -0x74F0
    ctx->pc = 0x33d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937360));
    // 0x33d2c8: 0xe52818  mult        $a1, $a3, $a1
    ctx->pc = 0x33d2c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33d2cc: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x33d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x33d2d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33d2d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33d2d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d2dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33d2e0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x33d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33d2e4: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x33D2E4u;
    SET_GPR_U32(ctx, 31, 0x33D2ECu);
    ctx->pc = 0x33D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D2E4u;
    // 0x33d2e8: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x33D2E4u, 0x33D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D2ECu;
label_33d2ec:
    // 0x33d2ec: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d2f0: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x33d2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x33d2f4: 0x8c67e864  lw          $a3, -0x179C($v1)
    ctx->pc = 0x33d2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961252)));
    // 0x33d2f8: 0x24c63760  addiu       $a2, $a2, 0x3760
    ctx->pc = 0x33d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14176));
    // 0x33d2fc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d300: 0x8c65e860  lw          $a1, -0x17A0($v1)
    ctx->pc = 0x33d300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961248)));
    // 0x33d304: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d308: 0x8c64e8c8  lw          $a0, -0x1738($v1)
    ctx->pc = 0x33d308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d30c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x33d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x33d310: 0x28810257  slti        $at, $a0, 0x257
    ctx->pc = 0x33d310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)599) ? 1 : 0);
    // 0x33d314: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x33d314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x33d318: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x33d318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33d31c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x33d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33d320: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x33d320u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d324: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33d324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33d328: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33d328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33d32c: 0x1020019a  beqz        $at, . + 4 + (0x19A << 2)
    ctx->pc = 0x33D32Cu;
    {
        const bool branch_taken_0x33d32c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D32Cu;
        // 0x33d330: 0xa4650004  sh          $a1, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d32c) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D334u;
    // 0x33d334: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33d334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33d338: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d33c: 0x28810257  slti        $at, $a0, 0x257
    ctx->pc = 0x33d33cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)599) ? 1 : 0);
    // 0x33d340: 0x10200195  beqz        $at, . + 4 + (0x195 << 2)
    ctx->pc = 0x33D340u;
    {
        const bool branch_taken_0x33d340 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D340u;
        // 0x33d344: 0xac64e8c8  sw          $a0, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d340) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D348u;
    // 0x33d348: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x33d348u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d34c: 0x14830192  bne         $a0, $v1, . + 4 + (0x192 << 2)
    ctx->pc = 0x33D34Cu;
    {
        const bool branch_taken_0x33d34c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33d34c) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D354u;
    // 0x33d354: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33d354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33d358: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33d358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33d35c: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x33D35Cu;
    {
        const bool branch_taken_0x33d35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D35Cu;
        // 0x33d360: 0xa4600004  sh          $zero, 0x4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d35c) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D364u;
label_33d364:
    // 0x33d364: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x33d364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x33d368: 0x1020018b  beqz        $at, . + 4 + (0x18B << 2)
    ctx->pc = 0x33D368u;
    {
        const bool branch_taken_0x33d368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d368) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D370u;
    // 0x33d370: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33d370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33d374: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D374u;
    SET_GPR_U32(ctx, 31, 0x33D37Cu);
    ctx->pc = 0x33D378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D374u;
    // 0x33d378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D374u, 0x33D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D37Cu;
label_33d37c:
    // 0x33d37c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d380: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x33d380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x33d384: 0x8c67e864  lw          $a3, -0x179C($v1)
    ctx->pc = 0x33d384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961252)));
    // 0x33d388: 0x24c63760  addiu       $a2, $a2, 0x3760
    ctx->pc = 0x33d388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14176));
    // 0x33d38c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d390: 0x8c65e860  lw          $a1, -0x17A0($v1)
    ctx->pc = 0x33d390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961248)));
    // 0x33d394: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d398: 0x8c64e8c8  lw          $a0, -0x1738($v1)
    ctx->pc = 0x33d398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d39c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x33d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x33d3a0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x33d3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x33d3a4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x33d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33d3a8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x33d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33d3ac: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x33d3acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d3b0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x33d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33d3b4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33d3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33d3b8: 0xa4650004  sh          $a1, 0x4($v1)
    ctx->pc = 0x33d3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x33d3bc: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x33d3bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d3c0: 0x28610257  slti        $at, $v1, 0x257
    ctx->pc = 0x33d3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)599) ? 1 : 0);
    // 0x33d3c4: 0x10200174  beqz        $at, . + 4 + (0x174 << 2)
    ctx->pc = 0x33D3C4u;
    {
        const bool branch_taken_0x33d3c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d3c4) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D3CCu;
    // 0x33d3cc: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33D3CCu;
    {
        const bool branch_taken_0x33d3cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33d3cc) {
            ctx->pc = 0x33D3ECu;
            goto label_33d3ec;
        }
    }
    ctx->pc = 0x33D3D4u;
    // 0x33d3d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33d3d8: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x33d3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x33d3dc: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x33d3dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d3e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33d3e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x33d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33d3e8: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33d3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
label_33d3ec:
    // 0x33d3ec: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33d3f0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d3f4: 0x8c84e8c8  lw          $a0, -0x1738($a0)
    ctx->pc = 0x33d3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961352)));
    // 0x33d3f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33d3fc: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x33D3FCu;
    {
        const bool branch_taken_0x33d3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3FCu;
        // 0x33d400: 0xac64e8c8  sw          $a0, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d3fc) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D404u;
label_33d404:
    // 0x33d404: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33d404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33d408: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d40c: 0x8c84e8b0  lw          $a0, -0x1750($a0)
    ctx->pc = 0x33d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961328)));
    // 0x33d410: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x33d410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x33d414: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x33D414u;
    {
        const bool branch_taken_0x33d414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D414u;
        // 0x33d418: 0xac64e8b0  sw          $a0, -0x1750($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961328), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d414) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D41Cu;
label_33d41c:
    // 0x33d41c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d420: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d424: 0x1860015c  blez        $v1, . + 4 + (0x15C << 2)
    ctx->pc = 0x33D424u;
    {
        const bool branch_taken_0x33d424 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33d424) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D42Cu;
    // 0x33d42c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33d430: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d434: 0xac43e8c8  sw          $v1, -0x1738($v0)
    ctx->pc = 0x33d434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961352), GPR_U32(ctx, 3));
    // 0x33d438: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33d438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x33d43c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D43Cu;
    SET_GPR_U32(ctx, 31, 0x33D444u);
    ctx->pc = 0x33D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D43Cu;
    // 0x33d440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D43Cu, 0x33D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D444u;
label_33d444:
    // 0x33d444: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x33D444u;
    {
        const bool branch_taken_0x33d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d444) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D44Cu;
label_33d44c:
    // 0x33d44c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d450: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d450u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d454: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33d454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d458: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33d458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33d45c: 0x1020014e  beqz        $at, . + 4 + (0x14E << 2)
    ctx->pc = 0x33D45Cu;
    {
        const bool branch_taken_0x33d45c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d45c) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D464u;
    // 0x33d464: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33d464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33d468: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d46c: 0xac43e8c8  sw          $v1, -0x1738($v0)
    ctx->pc = 0x33d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961352), GPR_U32(ctx, 3));
    // 0x33d470: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33d470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x33d474: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D474u;
    SET_GPR_U32(ctx, 31, 0x33D47Cu);
    ctx->pc = 0x33D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D474u;
    // 0x33d478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D474u, 0x33D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D47Cu;
label_33d47c:
    // 0x33d47c: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x33D47Cu;
    {
        const bool branch_taken_0x33d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d47c) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D484u;
label_33d484:
    // 0x33d484: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33d484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33d488: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D488u;
    SET_GPR_U32(ctx, 31, 0x33D490u);
    ctx->pc = 0x33D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D488u;
    // 0x33d48c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D488u, 0x33D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D490u;
label_33d490:
    // 0x33d490: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d494: 0x8c42e8b0  lw          $v0, -0x1750($v0)
    ctx->pc = 0x33d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961328)));
    // 0x33d498: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33D498u;
    {
        const bool branch_taken_0x33d498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d498) {
            ctx->pc = 0x33D4C0u;
            goto label_33d4c0;
        }
    }
    ctx->pc = 0x33D4A0u;
    // 0x33d4a0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d4a4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d4a8: 0xa460e898  sh          $zero, -0x1768($v1)
    ctx->pc = 0x33d4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961304), (uint16_t)GPR_U32(ctx, 0));
    // 0x33d4ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33d4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d4b0: 0xc0cf118  jal         func_33C460
    ctx->pc = 0x33D4B0u;
    SET_GPR_U32(ctx, 31, 0x33D4B8u);
    ctx->pc = 0x33D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D4B0u;
    // 0x33d4b4: 0xa440e8a0  sh          $zero, -0x1760($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961312), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C460u, 0x33D4B0u, 0x33D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D4B8u;
label_33d4b8:
    // 0x33d4b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33D4B8u;
    {
        const bool branch_taken_0x33d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d4b8) {
            ctx->pc = 0x33D4D4u;
            goto label_33d4d4;
        }
    }
    ctx->pc = 0x33D4C0u;
label_33d4c0:
    // 0x33d4c0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d4c4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d4c8: 0x9464e8a0  lhu         $a0, -0x1760($v1)
    ctx->pc = 0x33d4c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961312)));
    // 0x33d4cc: 0xc0cf118  jal         func_33C460
    ctx->pc = 0x33D4CCu;
    SET_GPR_U32(ctx, 31, 0x33D4D4u);
    ctx->pc = 0x33D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D4CCu;
    // 0x33d4d0: 0xa444e898  sh          $a0, -0x1768($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961304), (uint16_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C460u, 0x33D4CCu, 0x33D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D4D4u;
label_33d4d4:
    // 0x33d4d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d4d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d4dc: 0xac60e8c0  sw          $zero, -0x1740($v1)
    ctx->pc = 0x33d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961344), GPR_U32(ctx, 0));
    // 0x33d4e0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d4e4: 0xa064e888  sb          $a0, -0x1778($v1)
    ctx->pc = 0x33d4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961288), (uint8_t)GPR_U32(ctx, 4));
    // 0x33d4e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33d4ec: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d4f0: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x33D4F0u;
    {
        const bool branch_taken_0x33d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4F0u;
        // 0x33d4f4: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d4f0) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D4F8u;
label_33d4f8:
    // 0x33d4f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d4fc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d500: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x33d500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    // 0x33d504: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33d504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33d508: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D508u;
    SET_GPR_U32(ctx, 31, 0x33D510u);
    ctx->pc = 0x33D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D508u;
    // 0x33d50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D508u, 0x33D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D510u;
label_33d510:
    // 0x33d510: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x33D510u;
    {
        const bool branch_taken_0x33d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d510) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D518u;
label_33d518:
    // 0x33d518: 0x5060006a  beql        $v1, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x33D518u;
    {
        const bool branch_taken_0x33d518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d518) {
            ctx->pc = 0x33D51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D518u;
            // 0x33d51c: 0x32030200  andi        $v1, $s0, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D6C4u;
            goto label_33d6c4;
        }
    }
    ctx->pc = 0x33D520u;
    // 0x33d520: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d524: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x33d524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x33d528: 0x8c66e864  lw          $a2, -0x179C($v1)
    ctx->pc = 0x33d528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961252)));
    // 0x33d52c: 0x24a53700  addiu       $a1, $a1, 0x3700
    ctx->pc = 0x33d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14080));
    // 0x33d530: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d534: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x33d534u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x33d538: 0x8c64e860  lw          $a0, -0x17A0($v1)
    ctx->pc = 0x33d538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961248)));
    // 0x33d53c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x33d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x33d540: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33d540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33d544: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x33d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x33d548: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33d548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33d54c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x33d54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d550: 0x50830031  beql        $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x33D550u;
    {
        const bool branch_taken_0x33d550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d550) {
            ctx->pc = 0x33D554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D550u;
            // 0x33d554: 0x96230002  lhu         $v1, 0x2($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D618u;
            goto label_33d618;
        }
    }
    ctx->pc = 0x33D558u;
    // 0x33d558: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x33d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33d55c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D55Cu;
    {
        const bool branch_taken_0x33d55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d55c) {
            ctx->pc = 0x33D560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D55Cu;
            // 0x33d560: 0x96230002  lhu         $v1, 0x2($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D56Cu;
            goto label_33d56c;
        }
    }
    ctx->pc = 0x33D564u;
    // 0x33d564: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x33D564u;
    {
        const bool branch_taken_0x33d564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d564) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D56Cu;
label_33d56c:
    // 0x33d56c: 0x1860010a  blez        $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x33D56Cu;
    {
        const bool branch_taken_0x33d56c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33d56c) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D574u;
    // 0x33d574: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d578: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33d578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d57c: 0x18600106  blez        $v1, . + 4 + (0x106 << 2)
    ctx->pc = 0x33D57Cu;
    {
        const bool branch_taken_0x33d57c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33d57c) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D584u;
    // 0x33d584: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33d584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33d588: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D588u;
    SET_GPR_U32(ctx, 31, 0x33D590u);
    ctx->pc = 0x33D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D588u;
    // 0x33d58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D588u, 0x33D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D590u;
label_33d590:
    // 0x33d590: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d594: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d594u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d598: 0x8c67e8c8  lw          $a3, -0x1738($v1)
    ctx->pc = 0x33d598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d59c: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x33d59cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x33d5a0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33D5A0u;
    {
        const bool branch_taken_0x33d5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d5a0) {
            ctx->pc = 0x33D5F4u;
            goto label_33d5f4;
        }
    }
    ctx->pc = 0x33D5A8u;
    // 0x33d5a8: 0x871823  subu        $v1, $a0, $a3
    ctx->pc = 0x33d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x33d5ac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d5b0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33d5b4: 0x90439730  lbu         $v1, -0x68D0($v0)
    ctx->pc = 0x33d5b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d5b8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x33d5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x33d5bc: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x33d5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33d5c0: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33d5c4: 0x240204b4  addiu       $v0, $zero, 0x4B4
    ctx->pc = 0x33d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33d5c8: 0x24848b10  addiu       $a0, $a0, -0x74F0
    ctx->pc = 0x33d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937360));
    // 0x33d5cc: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x33d5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33d5d0: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x33d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x33d5d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33d5d8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x33d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33d5dc: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x33d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x33d5e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33d5e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d5e8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x33d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_33d5ec:
    // 0x33d5ec: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x33D5ECu;
    SET_GPR_U32(ctx, 31, 0x33D5F4u);
    ctx->pc = 0x33D5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D5ECu;
    // 0x33d5f0: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x33D5ECu, 0x33D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D5F4u;
label_33d5f4:
    // 0x33d5f4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d5f8: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x33d5f8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d5fc: 0x8c64e8c8  lw          $a0, -0x1738($v1)
    ctx->pc = 0x33d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d600: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x33d600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33d604: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d608: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x33d608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x33d60c: 0xa6250002  sh          $a1, 0x2($s1)
    ctx->pc = 0x33d60cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x33d610: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x33D610u;
    {
        const bool branch_taken_0x33d610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D610u;
        // 0x33d614: 0xac64e8c8  sw          $a0, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d610) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D618u;
label_33d618:
    // 0x33d618: 0x58600020  blezl       $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x33D618u;
    {
        const bool branch_taken_0x33d618 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33d618) {
            ctx->pc = 0x33D61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D618u;
            // 0x33d61c: 0xa6200004  sh          $zero, 0x4($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D69Cu;
            goto label_33d69c;
        }
    }
    ctx->pc = 0x33D620u;
    // 0x33d620: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33d620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33d624: 0xc0538fc  jal         func_14E3F0
label_33d628:
    if (ctx->pc == 0x33D628u) {
        ctx->pc = 0x33D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D624u;
        // 0x33d628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D62Cu;
        goto label_33d62c;
    }
    ctx->pc = 0x33D624u;
    SET_GPR_U32(ctx, 31, 0x33D62Cu);
    ctx->pc = 0x33D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D624u;
    // 0x33d628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D624u, 0x33D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D62Cu;
label_33d62c:
    // 0x33d62c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d630: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d630u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d634: 0x8c67e8c8  lw          $a3, -0x1738($v1)
    ctx->pc = 0x33d634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d638: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x33d638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x33d63c: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x33d63cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x33d640: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d640u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d644: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x33d644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x33d648: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33D648u;
    {
        const bool branch_taken_0x33d648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d648) {
            ctx->pc = 0x33D69Cu;
            goto label_33d69c;
        }
    }
    ctx->pc = 0x33D650u;
    // 0x33d650: 0x871823  subu        $v1, $a0, $a3
    ctx->pc = 0x33d650u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x33d654: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d658: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33d658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33d65c: 0x90439730  lbu         $v1, -0x68D0($v0)
    ctx->pc = 0x33d65cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d660: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x33d660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x33d664: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x33d664u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33d668: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33d668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33d66c: 0x240204b4  addiu       $v0, $zero, 0x4B4
    ctx->pc = 0x33d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33d670: 0x24848b10  addiu       $a0, $a0, -0x74F0
    ctx->pc = 0x33d670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937360));
    // 0x33d674: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x33d674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33d678: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x33d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33d67c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x33d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x33d680: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33d684: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33d684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33d688: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33d688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d68c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33d690: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x33d690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33d694: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x33D694u;
    SET_GPR_U32(ctx, 31, 0x33D69Cu);
    ctx->pc = 0x33D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D694u;
    // 0x33d698: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x33D694u, 0x33D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D69Cu;
label_33d69c:
    // 0x33d69c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d6a0: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d6a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d6a4: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d6a8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33d6a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33d6ac: 0x102000ba  beqz        $at, . + 4 + (0xBA << 2)
    ctx->pc = 0x33D6ACu;
    {
        const bool branch_taken_0x33d6ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d6ac) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D6B4u;
    // 0x33d6b4: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x33d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_33d6b8:
    // 0x33d6b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d6bc: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x33D6BCu;
    {
        const bool branch_taken_0x33d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6BCu;
        // 0x33d6c0: 0xac64e8c8  sw          $a0, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6bc) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D6C4u;
label_33d6c4:
    // 0x33d6c4: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x33D6C4u;
    {
        const bool branch_taken_0x33d6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d6c4) {
            ctx->pc = 0x33D6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D6C4u;
            // 0x33d6c8: 0x32030100  andi        $v1, $s0, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D704u;
            goto label_33d704;
        }
    }
    ctx->pc = 0x33D6CCu;
    // 0x33d6cc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d6d0: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d6d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d6d4: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d6d8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33d6d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_33d6dc:
    // 0x33d6dc: 0x102000ae  beqz        $at, . + 4 + (0xAE << 2)
    ctx->pc = 0x33D6DCu;
    {
        const bool branch_taken_0x33d6dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d6dc) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D6E4u;
    // 0x33d6e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33d6e8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d6ec: 0xac43e8c8  sw          $v1, -0x1738($v0)
    ctx->pc = 0x33d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961352), GPR_U32(ctx, 3));
    // 0x33d6f0: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x33d6f4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D6F4u;
    SET_GPR_U32(ctx, 31, 0x33D6FCu);
    ctx->pc = 0x33D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D6F4u;
    // 0x33d6f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D6F4u, 0x33D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D6FCu;
label_33d6fc:
    // 0x33d6fc: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x33D6FCu;
    {
        const bool branch_taken_0x33d6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d6fc) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D704u;
label_33d704:
    // 0x33d704: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x33D704u;
    {
        const bool branch_taken_0x33d704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d704) {
            ctx->pc = 0x33D708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D704u;
            // 0x33d708: 0x32030800  andi        $v1, $s0, 0x800 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D73Cu;
            goto label_33d73c;
        }
    }
    ctx->pc = 0x33D70Cu;
    // 0x33d70c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d710: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33d710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d714: 0x186000a0  blez        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x33D714u;
    {
        const bool branch_taken_0x33d714 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33d714) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D71Cu;
    // 0x33d71c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33d720: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d724: 0xac43e8c8  sw          $v1, -0x1738($v0)
    ctx->pc = 0x33d724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961352), GPR_U32(ctx, 3));
    // 0x33d728: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x33d72c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D72Cu;
    SET_GPR_U32(ctx, 31, 0x33D734u);
    ctx->pc = 0x33D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D72Cu;
    // 0x33d730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D72Cu, 0x33D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D734u;
label_33d734:
    // 0x33d734: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x33D734u;
    {
        const bool branch_taken_0x33d734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d734) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D73Cu;
label_33d73c:
    // 0x33d73c: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x33D73Cu;
    {
        const bool branch_taken_0x33d73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d73c) {
            ctx->pc = 0x33D740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D73Cu;
            // 0x33d740: 0x32030400  andi        $v1, $s0, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D794u;
            goto label_33d794;
        }
    }
    ctx->pc = 0x33D744u;
    // 0x33d744: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d748: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d748u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d74c: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d750: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33d750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33d754: 0x10200090  beqz        $at, . + 4 + (0x90 << 2)
    ctx->pc = 0x33D754u;
    {
        const bool branch_taken_0x33d754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d754) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D75Cu;
    // 0x33d75c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x33d760: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D760u;
    SET_GPR_U32(ctx, 31, 0x33D768u);
    ctx->pc = 0x33D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D760u;
    // 0x33d764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D760u, 0x33D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D768u;
label_33d768:
    // 0x33d768: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d76c: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d76cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d770: 0x8c65e8c8  lw          $a1, -0x1738($v1)
    ctx->pc = 0x33d770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d774: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x33d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x33d778: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d77c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x33d77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x33d780: 0x10200085  beqz        $at, . + 4 + (0x85 << 2)
    ctx->pc = 0x33D780u;
    {
        const bool branch_taken_0x33d780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D780u;
        // 0x33d784: 0xac65e8c8  sw          $a1, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d780) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D788u;
    // 0x33d788: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d78c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x33D78Cu;
    {
        const bool branch_taken_0x33d78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D78Cu;
        // 0x33d790: 0xac64e8c8  sw          $a0, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d78c) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D794u;
label_33d794:
    // 0x33d794: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x33D794u;
    {
        const bool branch_taken_0x33d794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d794) {
            ctx->pc = 0x33D798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D794u;
            // 0x33d798: 0x32034000  andi        $v1, $s0, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D7DCu;
            goto label_33d7dc;
        }
    }
    ctx->pc = 0x33D79Cu;
    // 0x33d79c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d7a0: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d7a4: 0x1860007c  blez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x33D7A4u;
    {
        const bool branch_taken_0x33d7a4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33d7a4) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D7ACu;
    // 0x33d7ac: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x33d7b0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D7B0u;
    SET_GPR_U32(ctx, 31, 0x33D7B8u);
    ctx->pc = 0x33D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D7B0u;
    // 0x33d7b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D7B0u, 0x33D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D7B8u;
label_33d7b8:
    // 0x33d7b8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33d7bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d7c0: 0x8c84e8c8  lw          $a0, -0x1738($a0)
    ctx->pc = 0x33d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961352)));
    // 0x33d7c4: 0x2484fff1  addiu       $a0, $a0, -0xF
    ctx->pc = 0x33d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967281));
    // 0x33d7c8: 0x4810073  bgez        $a0, . + 4 + (0x73 << 2)
    ctx->pc = 0x33D7C8u;
    {
        const bool branch_taken_0x33d7c8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x33D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7C8u;
        // 0x33d7cc: 0xac64e8c8  sw          $a0, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d7c8) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D7D0u;
    // 0x33d7d0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d7d4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x33D7D4u;
    {
        const bool branch_taken_0x33d7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7D4u;
        // 0x33d7d8: 0xac60e8c8  sw          $zero, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d7d4) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D7DCu;
label_33d7dc:
    // 0x33d7dc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x33D7DCu;
    {
        const bool branch_taken_0x33d7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d7dc) {
            ctx->pc = 0x33D894u;
            goto label_33d894;
        }
    }
    ctx->pc = 0x33D7E4u;
    // 0x33d7e4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x33d7e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d7e8: 0x58600020  blezl       $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x33D7E8u;
    {
        const bool branch_taken_0x33d7e8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33d7e8) {
            ctx->pc = 0x33D7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D7E8u;
            // 0x33d7ec: 0xa6200004  sh          $zero, 0x4($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D86Cu;
            goto label_33d86c;
        }
    }
    ctx->pc = 0x33D7F0u;
    // 0x33d7f0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33d7f4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D7F4u;
    SET_GPR_U32(ctx, 31, 0x33D7FCu);
    ctx->pc = 0x33D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D7F4u;
    // 0x33d7f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D7F4u, 0x33D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D7FCu;
label_33d7fc:
    // 0x33d7fc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d800: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d800u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d804: 0x8c67e8c8  lw          $a3, -0x1738($v1)
    ctx->pc = 0x33d804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d808: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x33d808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x33d80c: 0xa6230002  sh          $v1, 0x2($s1)
    ctx->pc = 0x33d80cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x33d810: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d810u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d814: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x33d814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x33d818: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33D818u;
    {
        const bool branch_taken_0x33d818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d818) {
            ctx->pc = 0x33D86Cu;
            goto label_33d86c;
        }
    }
    ctx->pc = 0x33D820u;
    // 0x33d820: 0x871823  subu        $v1, $a0, $a3
    ctx->pc = 0x33d820u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x33d824: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d828: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x33d828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33d82c: 0x90439730  lbu         $v1, -0x68D0($v0)
    ctx->pc = 0x33d82cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d830: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x33d830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x33d834: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x33d834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x33d838: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33d838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33d83c: 0x240204b4  addiu       $v0, $zero, 0x4B4
    ctx->pc = 0x33d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33d840: 0x24848b10  addiu       $a0, $a0, -0x74F0
    ctx->pc = 0x33d840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937360));
    // 0x33d844: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x33d844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33d848: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x33d848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33d84c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x33d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x33d850: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33d854: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33d854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33d858: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33d858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d85c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33d860: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x33d860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33d864: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x33D864u;
    SET_GPR_U32(ctx, 31, 0x33D86Cu);
    ctx->pc = 0x33D868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D864u;
    // 0x33d868: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x33D864u, 0x33D86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D86Cu;
label_33d86c:
    // 0x33d86c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d870: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x33d870u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33d874: 0x8c63e8c8  lw          $v1, -0x1738($v1)
    ctx->pc = 0x33d874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961352)));
    // 0x33d878: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x33d878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33d87c: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x33D87Cu;
    {
        const bool branch_taken_0x33d87c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d87c) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D884u;
    // 0x33d884: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x33d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33d888: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d88c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x33D88Cu;
    {
        const bool branch_taken_0x33d88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D88Cu;
        // 0x33d890: 0xac64e8c8  sw          $a0, -0x1738($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d88c) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D894u;
label_33d894:
    // 0x33d894: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d898: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x33d898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x33d89c: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33d89cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d8a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d8a4: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x33d8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33d8a8: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x33D8A8u;
    SET_GPR_U32(ctx, 31, 0x33D8B0u);
    ctx->pc = 0x33D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D8A8u;
    // 0x33d8ac: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x33D8A8u, 0x33D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8B0u;
label_33d8b0:
    // 0x33d8b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33D8B0u;
    {
        const bool branch_taken_0x33d8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d8b0) {
            ctx->pc = 0x33D8D0u;
            goto label_33d8d0;
        }
    }
    ctx->pc = 0x33D8B8u;
    // 0x33d8b8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33d8bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d8c0: 0x8c84e8b0  lw          $a0, -0x1750($a0)
    ctx->pc = 0x33d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961328)));
    // 0x33d8c4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x33d8c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x33d8c8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x33D8C8u;
    {
        const bool branch_taken_0x33d8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8C8u;
        // 0x33d8cc: 0xac64e8b0  sw          $a0, -0x1750($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961328), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d8c8) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D8D0u;
label_33d8d0:
    // 0x33d8d0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d8d4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x33d8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33d8d8: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33d8d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d8dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d8e0: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x33d8e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33d8e4: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x33D8E4u;
    SET_GPR_U32(ctx, 31, 0x33D8ECu);
    ctx->pc = 0x33D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D8E4u;
    // 0x33d8e8: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x33D8E4u, 0x33D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8ECu;
label_33d8ec:
    // 0x33d8ec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33D8ECu;
    {
        const bool branch_taken_0x33d8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d8ec) {
            ctx->pc = 0x33D968u;
            goto label_33d968;
        }
    }
    ctx->pc = 0x33D8F4u;
    // 0x33d8f4: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x33d8f8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33D8F8u;
    SET_GPR_U32(ctx, 31, 0x33D900u);
    ctx->pc = 0x33D8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D8F8u;
    // 0x33d8fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33D8F8u, 0x33D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D900u;
label_33d900:
    // 0x33d900: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d904: 0x8c42e8b0  lw          $v0, -0x1750($v0)
    ctx->pc = 0x33d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961328)));
    // 0x33d908: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33D908u;
    {
        const bool branch_taken_0x33d908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d908) {
            ctx->pc = 0x33D930u;
            goto label_33d930;
        }
    }
    ctx->pc = 0x33D910u;
    // 0x33d910: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d914: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d918: 0xa460e898  sh          $zero, -0x1768($v1)
    ctx->pc = 0x33d918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961304), (uint16_t)GPR_U32(ctx, 0));
    // 0x33d91c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33d91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d920: 0xc0cf118  jal         func_33C460
    ctx->pc = 0x33D920u;
    SET_GPR_U32(ctx, 31, 0x33D928u);
    ctx->pc = 0x33D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D920u;
    // 0x33d924: 0xa440e8a0  sh          $zero, -0x1760($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961312), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C460u, 0x33D920u, 0x33D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D928u;
label_33d928:
    // 0x33d928: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33D928u;
    {
        const bool branch_taken_0x33d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d928) {
            ctx->pc = 0x33D944u;
            goto label_33d944;
        }
    }
    ctx->pc = 0x33D930u;
label_33d930:
    // 0x33d930: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d934: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33d934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33d938: 0x9464e8a0  lhu         $a0, -0x1760($v1)
    ctx->pc = 0x33d938u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961312)));
    // 0x33d93c: 0xc0cf118  jal         func_33C460
    ctx->pc = 0x33D93Cu;
    SET_GPR_U32(ctx, 31, 0x33D944u);
    ctx->pc = 0x33D940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D93Cu;
    // 0x33d940: 0xa444e898  sh          $a0, -0x1768($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961304), (uint16_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C460u, 0x33D93Cu, 0x33D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D944u;
label_33d944:
    // 0x33d944: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d948: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33d948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d94c: 0xac60e8c0  sw          $zero, -0x1740($v1)
    ctx->pc = 0x33d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961344), GPR_U32(ctx, 0));
    // 0x33d950: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d954: 0xa064e888  sb          $a0, -0x1778($v1)
    ctx->pc = 0x33d954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961288), (uint8_t)GPR_U32(ctx, 4));
    // 0x33d958: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33d958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33d95c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d960: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33D960u;
    {
        const bool branch_taken_0x33d960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D960u;
        // 0x33d964: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d960) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D968u;
label_33d968:
    // 0x33d968: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33d968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33d96c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x33d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33d970: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33d970u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33d974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d978: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x33d978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33d97c: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x33D97Cu;
    SET_GPR_U32(ctx, 31, 0x33D984u);
    ctx->pc = 0x33D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D97Cu;
    // 0x33d980: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x33D97Cu, 0x33D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D984u;
label_33d984:
    // 0x33d984: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D984u;
    {
        const bool branch_taken_0x33d984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d984) {
            ctx->pc = 0x33D998u;
            goto label_33d998;
        }
    }
    ctx->pc = 0x33D98Cu;
    // 0x33d98c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33d98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d990: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33d990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33d994: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x33d994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_33d998:
    // 0x33d998: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33d998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33d99c:
    // 0x33d99c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33d99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x33D9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D9A4u;
        // 0x33d9a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D9ACu;
    // 0x33d9ac: 0x0  nop
    ctx->pc = 0x33d9acu;
    // NOP
    if (ctx->pc == 0x33d9acu) { ctx->pc = 0x33d9b0u; }
}
