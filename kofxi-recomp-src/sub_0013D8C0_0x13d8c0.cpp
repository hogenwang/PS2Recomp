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

// Function: sub_0013D8C0
// Address: 0x13d8c0 - 0x13da20
void sub_0013D8C0_0x13d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D8C0_0x13d8c0");
#endif

    switch (ctx->pc) {
        case 0x13d930u: goto label_13d930;
        case 0x13d980u: goto label_13d980;
        case 0x13d9b4u: goto label_13d9b4;
        case 0x13d9e4u: goto label_13d9e4;
        default: break;
    }

    ctx->pc = 0x13d8c0u;

    // 0x13d8c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d8c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13d8c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d8cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d8d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13d8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d8d8: 0x8c820490  lw          $v0, 0x490($a0)
    ctx->pc = 0x13d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x13d8dc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13d8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13d8e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D8E0u;
    {
        const bool branch_taken_0x13d8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8E0u;
        // 0x13d8e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d8e0) {
            ctx->pc = 0x13D8F0u;
            goto label_13d8f0;
        }
    }
    ctx->pc = 0x13D8E8u;
    // 0x13d8e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D8E8u;
    {
        const bool branch_taken_0x13d8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8E8u;
        // 0x13d8ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d8e8) {
            ctx->pc = 0x13D900u;
            goto label_13d900;
        }
    }
    ctx->pc = 0x13D8F0u;
label_13d8f0:
    // 0x13d8f0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x13d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13d8f4: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13D8F4u;
    {
        const bool branch_taken_0x13d8f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x13d8f4) {
            ctx->pc = 0x13D8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D8F4u;
            // 0x13d8f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D900u;
            goto label_13d900;
        }
    }
    ctx->pc = 0x13D8FCu;
    // 0x13d8fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13d900:
    // 0x13d900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d904: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x13D904u;
    {
        const bool branch_taken_0x13d904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13d904) {
            ctx->pc = 0x13D9ACu;
            goto label_13d9ac;
        }
    }
    ctx->pc = 0x13D90Cu;
    // 0x13d90c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d910: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13D910u;
    {
        const bool branch_taken_0x13d910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13d910) {
            ctx->pc = 0x13D978u;
            goto label_13d978;
        }
    }
    ctx->pc = 0x13D918u;
    // 0x13d918: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D918u;
    {
        const bool branch_taken_0x13d918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d918) {
            ctx->pc = 0x13D928u;
            goto label_13d928;
        }
    }
    ctx->pc = 0x13D920u;
    // 0x13d920: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x13D920u;
    {
        const bool branch_taken_0x13d920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d920) {
            ctx->pc = 0x13D9DCu;
            goto label_13d9dc;
        }
    }
    ctx->pc = 0x13D928u;
label_13d928:
    // 0x13d928: 0xc04f7dc  jal         func_13DF70
    ctx->pc = 0x13D928u;
    SET_GPR_U32(ctx, 31, 0x13D930u);
    ctx->pc = 0x13DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF70u, 0x13D928u, 0x13D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D930u;
label_13d930:
    // 0x13d930: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13d930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13d934: 0x80635c68  lb          $v1, 0x5C68($v1)
    ctx->pc = 0x13d934u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 23656)));
    // 0x13d938: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d93c: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D93Cu;
    {
        const bool branch_taken_0x13d93c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13d93c) {
            ctx->pc = 0x13D940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D93Cu;
            // 0x13d940: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D94Cu;
            goto label_13d94c;
        }
    }
    ctx->pc = 0x13D944u;
    // 0x13d944: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13d944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d948: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x13d948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_13d94c:
    // 0x13d94c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13D94Cu;
    {
        const bool branch_taken_0x13d94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d94c) {
            ctx->pc = 0x13D958u;
            goto label_13d958;
        }
    }
    ctx->pc = 0x13D954u;
    // 0x13d954: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x13d954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13d958:
    // 0x13d958: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13d958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13d95c: 0xa243025b  sb          $v1, 0x25B($s2)
    ctx->pc = 0x13d95cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 603), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d960: 0x2442c750  addiu       $v0, $v0, -0x38B0
    ctx->pc = 0x13d960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952784));
    // 0x13d964: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x13d964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13d968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d96c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13d96cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d970: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13D970u;
    {
        const bool branch_taken_0x13d970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D970u;
        // 0x13d974: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d970) {
            ctx->pc = 0x13D9DCu;
            goto label_13d9dc;
        }
    }
    ctx->pc = 0x13D978u;
label_13d978:
    // 0x13d978: 0xc04f804  jal         func_13E010
    ctx->pc = 0x13D978u;
    SET_GPR_U32(ctx, 31, 0x13D980u);
    ctx->pc = 0x13E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E010u, 0x13D978u, 0x13D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D980u;
label_13d980:
    // 0x13d980: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13d980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13d984: 0xa242025b  sb          $v0, 0x25B($s2)
    ctx->pc = 0x13d984u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 603), (uint8_t)GPR_U32(ctx, 2));
    // 0x13d988: 0x2463c758  addiu       $v1, $v1, -0x38A8
    ctx->pc = 0x13d988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952792));
    // 0x13d98c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x13d98cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d990: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d994: 0x9243025b  lbu         $v1, 0x25B($s2)
    ctx->pc = 0x13d994u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 603)));
    // 0x13d998: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13d998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d99c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x13d99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x13d9a0: 0xa243025b  sb          $v1, 0x25B($s2)
    ctx->pc = 0x13d9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 603), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d9a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13D9A4u;
    {
        const bool branch_taken_0x13d9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9A4u;
        // 0x13d9a8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d9a4) {
            ctx->pc = 0x13D9DCu;
            goto label_13d9dc;
        }
    }
    ctx->pc = 0x13D9ACu;
label_13d9ac:
    // 0x13d9ac: 0xc04f804  jal         func_13E010
    ctx->pc = 0x13D9ACu;
    SET_GPR_U32(ctx, 31, 0x13D9B4u);
    ctx->pc = 0x13E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E010u, 0x13D9ACu, 0x13D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D9B4u;
label_13d9b4:
    // 0x13d9b4: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13d9b8: 0xa242025b  sb          $v0, 0x25B($s2)
    ctx->pc = 0x13d9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 603), (uint8_t)GPR_U32(ctx, 2));
    // 0x13d9bc: 0x2463c760  addiu       $v1, $v1, -0x38A0
    ctx->pc = 0x13d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952800));
    // 0x13d9c0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x13d9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d9c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d9c8: 0x9243025b  lbu         $v1, 0x25B($s2)
    ctx->pc = 0x13d9c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 603)));
    // 0x13d9cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13d9ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d9d0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x13d9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x13d9d4: 0xa243025b  sb          $v1, 0x25B($s2)
    ctx->pc = 0x13d9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 603), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d9d8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x13d9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13d9dc:
    // 0x13d9dc: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13D9DCu;
    SET_GPR_U32(ctx, 31, 0x13D9E4u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x13D9DCu, 0x13D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D9E4u;
label_13d9e4:
    // 0x13d9e4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x13d9e4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d9e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13d9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d9ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13d9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13d9f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d9f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d9f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13d9f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13d9fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13d9fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13da00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13da00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13da04: 0x0  nop
    ctx->pc = 0x13da04u;
    // NOP
    // 0x13da08: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13da0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13da0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da10: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13da10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13da14: 0x3e00008  jr          $ra
    ctx->pc = 0x13DA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA14u;
        // 0x13da18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DA1Cu;
    // 0x13da1c: 0x0  nop
    ctx->pc = 0x13da1cu;
    // NOP
}
