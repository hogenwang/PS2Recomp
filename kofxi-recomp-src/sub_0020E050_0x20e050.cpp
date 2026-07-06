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

// Function: sub_0020E050
// Address: 0x20e050 - 0x20e140
void sub_0020E050_0x20e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E050_0x20e050");
#endif

    switch (ctx->pc) {
        case 0x20e098u: goto label_20e098;
        case 0x20e0ecu: goto label_20e0ec;
        case 0x20e118u: goto label_20e118;
        default: break;
    }

    ctx->pc = 0x20e050u;

    // 0x20e050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20e054: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20e054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20e058: 0x27a80054  addiu       $t0, $sp, 0x54
    ctx->pc = 0x20e058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x20e05c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20e060: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x20e060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x20e064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e068: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20e068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e06c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e070: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20e070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e074: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e078: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20e078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e07c: 0x94a4000a  lhu         $a0, 0xA($a1)
    ctx->pc = 0x20e07cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x20e080: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x20e080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e084: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x20e084u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x20e088: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x20e088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x20e08c: 0x94a6000e  lhu         $a2, 0xE($a1)
    ctx->pc = 0x20e08cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x20e090: 0xc082944  jal         func_20A510
    ctx->pc = 0x20E090u;
    SET_GPR_U32(ctx, 31, 0x20E098u);
    ctx->pc = 0x20E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E090u;
    // 0x20e094: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A510u, 0x20E090u, 0x20E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E098u;
label_20e098:
    // 0x20e098: 0x8fa7005c  lw          $a3, 0x5C($sp)
    ctx->pc = 0x20e098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x20e09c: 0x50e0001f  beql        $a3, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x20E09Cu;
    {
        const bool branch_taken_0x20e09c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e09c) {
            ctx->pc = 0x20E0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E09Cu;
            // 0x20e0a0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E11Cu;
            goto label_20e11c;
        }
    }
    ctx->pc = 0x20E0A4u;
    // 0x20e0a4: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x20e0a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x20e0a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e0ac: 0x96450004  lhu         $a1, 0x4($s2)
    ctx->pc = 0x20e0acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x20e0b0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x20e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20e0b4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x20e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20e0b8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x20e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x20e0bc: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x20e0bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x20e0c0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x20e0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x20e0c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20E0C4u;
    {
        const bool branch_taken_0x20e0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0C4u;
        // 0x20e0c8: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0c4) {
            ctx->pc = 0x20E0F4u;
            goto label_20e0f4;
        }
    }
    ctx->pc = 0x20E0CCu;
    // 0x20e0cc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x20e0ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20e0d0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x20e0d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20e0d4: 0x96480008  lhu         $t0, 0x8($s2)
    ctx->pc = 0x20e0d4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x20e0d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20e0dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e0e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e0e4: 0xc082df4  jal         func_20B7D0
    ctx->pc = 0x20E0E4u;
    SET_GPR_U32(ctx, 31, 0x20E0ECu);
    ctx->pc = 0x20E0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E0E4u;
    // 0x20e0e8: 0x2624821  addu        $t1, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B7D0u, 0x20E0E4u, 0x20E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E0ECu;
label_20e0ec:
    // 0x20e0ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20E0ECu;
    {
        const bool branch_taken_0x20e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e0ec) {
            ctx->pc = 0x20E118u;
            goto label_20e118;
        }
    }
    ctx->pc = 0x20E0F4u;
label_20e0f4:
    // 0x20e0f4: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x20e0f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x20e0f8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x20e0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e0fc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x20e0fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20e100: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20e100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e104: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20e104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20e108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e10c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e110: 0xc082ea4  jal         func_20BA90
    ctx->pc = 0x20E110u;
    SET_GPR_U32(ctx, 31, 0x20E118u);
    ctx->pc = 0x20E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E110u;
    // 0x20e114: 0x2624021  addu        $t0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BA90u, 0x20E110u, 0x20E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E118u;
label_20e118:
    // 0x20e118: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20e118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20e11c:
    // 0x20e11c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20e11cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e12c: 0x3e00008  jr          $ra
    ctx->pc = 0x20E12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E12Cu;
        // 0x20e130: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E134u;
    // 0x20e134: 0x0  nop
    ctx->pc = 0x20e134u;
    // NOP
    // 0x20e138: 0x0  nop
    ctx->pc = 0x20e138u;
    // NOP
    // 0x20e13c: 0x0  nop
    ctx->pc = 0x20e13cu;
    // NOP
    if (ctx->pc == 0x20e13cu) { ctx->pc = 0x20e140u; }
}
