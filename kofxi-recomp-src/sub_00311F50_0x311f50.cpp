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

// Function: sub_00311F50
// Address: 0x311f50 - 0x312100
void sub_00311F50_0x311f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311F50_0x311f50");
#endif

    switch (ctx->pc) {
        case 0x311f80u: goto label_311f80;
        case 0x311fbcu: goto label_311fbc;
        case 0x311fc4u: goto label_311fc4;
        case 0x311fd8u: goto label_311fd8;
        case 0x31208cu: goto label_31208c;
        case 0x3120b0u: goto label_3120b0;
        case 0x3120e0u: goto label_3120e0;
        default: break;
    }

    ctx->pc = 0x311f50u;

    // 0x311f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x311f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x311f54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x311f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x311f58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x311f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x311f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x311f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x311f60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x311f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x311f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x311f68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x311f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x311f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x311f70: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x311f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x311f74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x311f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f78: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x311F78u;
    SET_GPR_U32(ctx, 31, 0x311F80u);
    ctx->pc = 0x311F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311F78u;
    // 0x311f7c: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x311F78u, 0x311F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F80u;
label_311f80:
    // 0x311f80: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x311f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x311f84: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x311f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x311f88: 0x8c63d920  lw          $v1, -0x26E0($v1)
    ctx->pc = 0x311f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957344)));
    // 0x311f8c: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x311f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x311f90: 0x8c460990  lw          $a2, 0x990($v0)
    ctx->pc = 0x311f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2448)));
    // 0x311f94: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x311f94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x311f98: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x311f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x311f9c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x311f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x311fa0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x311fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x311fa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x311fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311fa8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x311fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x311fac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x311facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x311fb0: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x311fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x311fb4: 0xc0c46b8  jal         func_311AE0
    ctx->pc = 0x311FB4u;
    SET_GPR_U32(ctx, 31, 0x311FBCu);
    ctx->pc = 0x311FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311FB4u;
    // 0x311fb8: 0xac40d948  sw          $zero, -0x26B8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957384), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311AE0u, 0x311FB4u, 0x311FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FBCu;
label_311fbc:
    // 0x311fbc: 0xc0c47a4  jal         func_311E90
    ctx->pc = 0x311FBCu;
    SET_GPR_U32(ctx, 31, 0x311FC4u);
    ctx->pc = 0x311E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311E90u, 0x311FBCu, 0x311FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FC4u;
label_311fc4:
    // 0x311fc4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x311fc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x311fc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x311fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x311fcc: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x311FCCu;
    {
        const bool branch_taken_0x311fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x311fcc) {
            ctx->pc = 0x3120D8u;
            goto label_3120d8;
        }
    }
    ctx->pc = 0x311FD4u;
    // 0x311fd4: 0x3402fffe  ori         $v0, $zero, 0xFFFE
    ctx->pc = 0x311fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_311fd8:
    // 0x311fd8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x311FD8u;
    {
        const bool branch_taken_0x311fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x311fd8) {
            ctx->pc = 0x311FF0u;
            goto label_311ff0;
        }
    }
    ctx->pc = 0x311FE0u;
    // 0x311fe0: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x311fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x311fe4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x311FE4u;
    {
        const bool branch_taken_0x311fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FE4u;
        // 0x311fe8: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311fe4) {
            ctx->pc = 0x3120C0u;
            goto label_3120c0;
        }
    }
    ctx->pc = 0x311FECu;
    // 0x311fec: 0x0  nop
    ctx->pc = 0x311fecu;
    // NOP
label_311ff0:
    // 0x311ff0: 0x3402fffd  ori         $v0, $zero, 0xFFFD
    ctx->pc = 0x311ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x311ff4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x311FF4u;
    {
        const bool branch_taken_0x311ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x311ff4) {
            ctx->pc = 0x312008u;
            goto label_312008;
        }
    }
    ctx->pc = 0x311FFCu;
    // 0x311ffc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x311FFCu;
    {
        const bool branch_taken_0x311ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FFCu;
        // 0x312000: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ffc) {
            ctx->pc = 0x3120C0u;
            goto label_3120c0;
        }
    }
    ctx->pc = 0x312004u;
    // 0x312004: 0x0  nop
    ctx->pc = 0x312004u;
    // NOP
label_312008:
    // 0x312008: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x312008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x31200c: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x31200cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x312010: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x312010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x312014: 0x490018  mult        $zero, $v0, $t1
    ctx->pc = 0x312014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x312018: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x312018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31201c: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x31201cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x312020: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x312020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x312024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x312024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312028: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31202c: 0x3010  mfhi        $a2
    ctx->pc = 0x31202cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x312030: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x312030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x312034: 0x123001a  div         $zero, $t1, $v1
    ctx->pc = 0x312034u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x312038: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x312038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x31203c: 0x61943  sra         $v1, $a2, 5
    ctx->pc = 0x31203cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 5));
    // 0x312040: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x312040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x312044: 0x3810  mfhi        $a3
    ctx->pc = 0x312044u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x312048: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x312048u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31204c: 0x128001a  div         $zero, $t1, $t0
    ctx->pc = 0x31204cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x312050: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x312050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x312054: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x312054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x312058: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x312058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31205c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x31205cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x312060: 0x1810  mfhi        $v1
    ctx->pc = 0x312060u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x312064: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x312064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x312068: 0x1010  mfhi        $v0
    ctx->pc = 0x312068u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31206c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x31206cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x312070: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x312070u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x312074: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x312074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312078: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x312078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31207c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312080: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x312080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x312084: 0xc0c4700  jal         func_311C00
    ctx->pc = 0x312084u;
    SET_GPR_U32(ctx, 31, 0x31208Cu);
    ctx->pc = 0x312088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312084u;
    // 0x312088: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x311C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311C00u, 0x312084u, 0x31208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31208Cu;
label_31208c:
    // 0x31208c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x31208cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x312090: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x312090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x312094: 0x8c64d948  lw          $a0, -0x26B8($v1)
    ctx->pc = 0x312094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957384)));
    // 0x312098: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x312098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31209c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x31209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3120a0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3120A0u;
    {
        const bool branch_taken_0x3120a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3120A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120A0u;
        // 0x3120a4: 0xac44d948  sw          $a0, -0x26B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957384), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3120a0) {
            ctx->pc = 0x3120B8u;
            goto label_3120b8;
        }
    }
    ctx->pc = 0x3120A8u;
    // 0x3120a8: 0xc0c47ac  jal         func_311EB0
    ctx->pc = 0x3120A8u;
    SET_GPR_U32(ctx, 31, 0x3120B0u);
    ctx->pc = 0x311EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EB0u, 0x3120A8u, 0x3120B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120B0u;
label_3120b0:
    // 0x3120b0: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x3120b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x3120b4: 0xac40d948  sw          $zero, -0x26B8($v0)
    ctx->pc = 0x3120b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957384), GPR_U32(ctx, 0));
label_3120b8:
    // 0x3120b8: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x3120b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x3120bc: 0x0  nop
    ctx->pc = 0x3120bcu;
    // NOP
label_3120c0:
    // 0x3120c0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x3120c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3120c4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x3120c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3120c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3120c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3120cc: 0x5462ffc2  bnel        $v1, $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x3120CCu;
    {
        const bool branch_taken_0x3120cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3120cc) {
            ctx->pc = 0x3120D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3120CCu;
            // 0x3120d0: 0x3402fffe  ori         $v0, $zero, 0xFFFE (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311FD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_311fd8;
        }
    }
    ctx->pc = 0x3120D4u;
    // 0x3120d4: 0x0  nop
    ctx->pc = 0x3120d4u;
    // NOP
label_3120d8:
    // 0x3120d8: 0xc0c47ac  jal         func_311EB0
    ctx->pc = 0x3120D8u;
    SET_GPR_U32(ctx, 31, 0x3120E0u);
    ctx->pc = 0x311EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EB0u, 0x3120D8u, 0x3120E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3120E0u;
label_3120e0:
    // 0x3120e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3120e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3120e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3120e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3120e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3120e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3120ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3120ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3120f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3120f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3120f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3120F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3120F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3120F4u;
        // 0x3120f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3120F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3120FCu;
    // 0x3120fc: 0x0  nop
    ctx->pc = 0x3120fcu;
    // NOP
    if (ctx->pc == 0x3120fcu) { ctx->pc = 0x312100u; }
}
