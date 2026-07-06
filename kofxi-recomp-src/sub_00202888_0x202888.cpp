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

// Function: sub_00202888
// Address: 0x202888 - 0x202c70
void sub_00202888_0x202888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202888_0x202888");
#endif

    switch (ctx->pc) {
        case 0x2028b0u: goto label_2028b0;
        case 0x2028d8u: goto label_2028d8;
        case 0x202918u: goto label_202918;
        case 0x202924u: goto label_202924;
        case 0x202ad8u: goto label_202ad8;
        case 0x202b38u: goto label_202b38;
        case 0x202b48u: goto label_202b48;
        case 0x202bf8u: goto label_202bf8;
        case 0x202c48u: goto label_202c48;
        default: break;
    }

    ctx->pc = 0x202888u;

    // 0x202888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20288c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x202890: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x202890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202894: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x202894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x202898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20289c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20289cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2028a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2028a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2028a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2028a8: 0xc080b34  jal         func_202CD0
    ctx->pc = 0x2028A8u;
    SET_GPR_U32(ctx, 31, 0x2028B0u);
    ctx->pc = 0x2028ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2028A8u;
    // 0x2028ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CD0u, 0x2028A8u, 0x2028B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028B0u;
label_2028b0:
    // 0x2028b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2028b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2028b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2028b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2028bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2028bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2028c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2028c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2028c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2028c8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2028c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2028cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2028ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2028d0: 0x8080a36  j           func_2028D8
    ctx->pc = 0x2028D0u;
    ctx->pc = 0x2028D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2028D0u;
    // 0x2028d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2028D8u;
    goto label_2028d8;
    ctx->pc = 0x2028D8u;
label_2028d8:
    // 0x2028d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2028d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2028dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2028dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2028e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2028e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2028e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2028e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2028e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2028ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2028f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2028f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2028f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2028f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2028f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2028fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x202900: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x202900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202904: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202904u;
    {
        const bool branch_taken_0x202904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202904u;
        // 0x202908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202904) {
            ctx->pc = 0x20291Cu;
            goto label_20291c;
        }
    }
    ctx->pc = 0x20290Cu;
    // 0x20290c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x20290cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x202910: 0xc080554  jal         func_201550
    ctx->pc = 0x202910u;
    SET_GPR_U32(ctx, 31, 0x202918u);
    ctx->pc = 0x202914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202910u;
    // 0x202914: 0x24a5f330  addiu       $a1, $a1, -0xCD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201550u, 0x202910u, 0x202918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202918u;
label_202918:
    // 0x202918: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x202918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_20291c:
    // 0x20291c: 0xc0809e6  jal         func_202798
    ctx->pc = 0x20291Cu;
    SET_GPR_U32(ctx, 31, 0x202924u);
    ctx->pc = 0x202920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20291Cu;
    // 0x202920: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202798u, 0x20291Cu, 0x202924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202924u;
label_202924:
    // 0x202924: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x202924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202928: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x202928u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x20292c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20292cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202934: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202938: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x202938u;
    {
        const bool branch_taken_0x202938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202938u;
        // 0x20293c: 0x24c6f338  addiu       $a2, $a2, -0xCC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202938) {
            ctx->pc = 0x202960u;
            goto label_202960;
        }
    }
    ctx->pc = 0x202940u;
    // 0x202940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x202944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x202948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20294c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20294cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202950: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202954: 0x808063e  j           func_2018F8
    ctx->pc = 0x202954u;
    ctx->pc = 0x202958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202954u;
    // 0x202958: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    sub_002018F8_0x2018f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20295Cu;
    // 0x20295c: 0x0  nop
    ctx->pc = 0x20295cu;
    // NOP
label_202960:
    // 0x202960: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x202960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x202964: 0x10670012  beq         $v1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x202964u;
    {
        const bool branch_taken_0x202964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x202968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202964u;
        // 0x202968: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202964) {
            ctx->pc = 0x2029B0u;
            goto label_2029b0;
        }
    }
    ctx->pc = 0x20296Cu;
    // 0x20296c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20296Cu;
    {
        const bool branch_taken_0x20296c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20296Cu;
        // 0x202970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20296c) {
            ctx->pc = 0x2029E0u;
            goto label_2029e0;
        }
    }
    ctx->pc = 0x202974u;
    // 0x202974: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x202974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202978: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x202978u;
    {
        const bool branch_taken_0x202978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x202978) {
            ctx->pc = 0x20297Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202978u;
            // 0x20297c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2029E4u;
            goto label_2029e4;
        }
    }
    ctx->pc = 0x202980u;
    // 0x202980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20298c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20298cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202990: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x202990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202994: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x202994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202998: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x202998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20299c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20299cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2029a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2029a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2029a4: 0x8080a82  j           func_202A08
    ctx->pc = 0x2029A4u;
    ctx->pc = 0x2029A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029A4u;
    // 0x2029a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A08u;
    goto label_202a08;
    ctx->pc = 0x2029ACu;
    // 0x2029ac: 0x0  nop
    ctx->pc = 0x2029acu;
    // NOP
label_2029b0:
    // 0x2029b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2029b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2029b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2029b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2029b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2029bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2029c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2029c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2029c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2029c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2029c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2029ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2029d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2029d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2029d4: 0x8080adc  j           func_202B70
    ctx->pc = 0x2029D4u;
    ctx->pc = 0x2029D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029D4u;
    // 0x2029d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B70u;
    goto label_202b70;
    ctx->pc = 0x2029DCu;
    // 0x2029dc: 0x0  nop
    ctx->pc = 0x2029dcu;
    // NOP
label_2029e0:
    // 0x2029e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2029e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2029e4:
    // 0x2029e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2029e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2029e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2029ec: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2029ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2029f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2029f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2029f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2029f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2029f8: 0x24c6f368  addiu       $a2, $a2, -0xC98
    ctx->pc = 0x2029f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964072));
    // 0x2029fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2029fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202a00: 0x808063e  j           func_2018F8
    ctx->pc = 0x202A00u;
    ctx->pc = 0x202A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A00u;
    // 0x202a04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    sub_002018F8_0x2018f8(rdram, ctx, runtime); return;
    ctx->pc = 0x202A08u;
label_202a08:
    // 0x202a08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x202a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x202a0c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x202a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x202a10: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x202a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x202a14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x202a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a18: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x202a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x202a1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x202a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a20: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x202a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x202a24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x202a24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a28: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x202a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x202a2c: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x202a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x202a30: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x202a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x202a34: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x202a34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x202a38: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x202a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x202a3c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x202a3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a40: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x202a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x202a44: 0x262b0024  addiu       $t3, $s1, 0x24
    ctx->pc = 0x202a44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x202a48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a4c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x202a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x202a50: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x202a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x202a54: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x202a54u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202a58: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x202a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x202a5c: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x202a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x202a60: 0x1851818  mult        $v1, $t4, $a1
    ctx->pc = 0x202a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202a64: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x202a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x202a68: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x202a68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x202a6c: 0x180a82d  daddu       $s5, $t4, $zero
    ctx->pc = 0x202a6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a70: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x202a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202a74: 0x5a043  sra         $s4, $a1, 1
    ctx->pc = 0x202a74u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 1));
    // 0x202a78: 0x8d4d0004  lw          $t5, 0x4($t2)
    ctx->pc = 0x202a78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x202a7c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x202a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x202a80: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x202a80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x202a84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202a88: 0x8d6a0004  lw          $t2, 0x4($t3)
    ctx->pc = 0x202a88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x202a8c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x202a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x202a90: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x202a90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x202a94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x202a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202a98: 0x8e4b000c  lw          $t3, 0xC($s2)
    ctx->pc = 0x202a98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x202a9c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x202a9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x202aa0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x202aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x202aa4: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x202aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x202aa8: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x202aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x202aac: 0xe7a80b  movn        $s5, $a3, $a3
    ctx->pc = 0x202aacu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 7));
    // 0x202ab0: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x202ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x202ab4: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x202ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x202ab8: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x202ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x202abc: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x202abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x202ac0: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x202ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x202ac4: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x202AC4u;
    {
        const bool branch_taken_0x202ac4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AC4u;
        // 0x202ac8: 0xafac000c  sw          $t4, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ac4) {
            ctx->pc = 0x202AD0u;
            goto label_202ad0;
        }
    }
    ctx->pc = 0x202ACCu;
    // 0x202acc: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x202accu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_202ad0:
    // 0x202ad0: 0xc080b1c  jal         func_202C70
    ctx->pc = 0x202AD0u;
    SET_GPR_U32(ctx, 31, 0x202AD8u);
    ctx->pc = 0x202C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C70u, 0x202AD0u, 0x202AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202AD8u;
label_202ad8:
    // 0x202ad8: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x202ad8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x202adc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x202adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x202ae0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x202ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x202ae4: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x202ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202ae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202aec: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x202aecu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x202af0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x202af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x202af4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x202af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x202af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202afc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x202afcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x202b00: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x202b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x202b04: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x202b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x202b08: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x202b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x202b0c: 0xafb60024  sw          $s6, 0x24($sp)
    ctx->pc = 0x202b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
    // 0x202b10: 0xafb50028  sw          $s5, 0x28($sp)
    ctx->pc = 0x202b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x202b14: 0x12690006  beq         $s3, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x202B14u;
    {
        const bool branch_taken_0x202b14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 9));
        ctx->pc = 0x202B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B14u;
        // 0x202b18: 0xafb4002c  sw          $s4, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b14) {
            ctx->pc = 0x202B30u;
            goto label_202b30;
        }
    }
    ctx->pc = 0x202B1Cu;
    // 0x202b1c: 0x126a0008  beq         $s3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x202B1Cu;
    {
        const bool branch_taken_0x202b1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        ctx->pc = 0x202B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B1Cu;
        // 0x202b20: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b1c) {
            ctx->pc = 0x202B40u;
            goto label_202b40;
        }
    }
    ctx->pc = 0x202B24u;
    // 0x202b24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x202B24u;
    {
        const bool branch_taken_0x202b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B24u;
        // 0x202b28: 0xdfb10048  ld          $s1, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b24) {
            ctx->pc = 0x202B50u;
            goto label_202b50;
        }
    }
    ctx->pc = 0x202B2Cu;
    // 0x202b2c: 0x0  nop
    ctx->pc = 0x202b2cu;
    // NOP
label_202b30:
    // 0x202b30: 0xc08025c  jal         func_200970
    ctx->pc = 0x202B30u;
    SET_GPR_U32(ctx, 31, 0x202B38u);
    ctx->pc = 0x200970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200970u, 0x202B30u, 0x202B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B38u;
label_202b38:
    // 0x202b38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x202B38u;
    {
        const bool branch_taken_0x202b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B38u;
        // 0x202b3c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b38) {
            ctx->pc = 0x202B4Cu;
            goto label_202b4c;
        }
    }
    ctx->pc = 0x202B40u;
label_202b40:
    // 0x202b40: 0xc08025c  jal         func_200970
    ctx->pc = 0x202B40u;
    SET_GPR_U32(ctx, 31, 0x202B48u);
    ctx->pc = 0x202B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202B40u;
    // 0x202b44: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200970u, 0x202B40u, 0x202B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B48u;
label_202b48:
    // 0x202b48: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x202b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_202b4c:
    // 0x202b4c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x202b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_202b50:
    // 0x202b50: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x202b50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202b54: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x202b54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x202b58: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x202b58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202b5c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x202b5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x202b60: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x202b60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202b64: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x202b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x202b68: 0x3e00008  jr          $ra
    ctx->pc = 0x202B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B68u;
        // 0x202b6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202B70u;
label_202b70:
    // 0x202b70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x202b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x202b74: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x202b74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x202b78: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x202b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x202b7c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x202b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x202b80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x202b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b84: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x202b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x202b88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x202b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b8c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x202b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x202b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b94: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x202b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x202b98: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x202b98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b9c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x202b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x202ba0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x202ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x202ba4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x202ba4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ba8: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x202ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x202bac: 0x26d00004  addiu       $s0, $s6, 0x4
    ctx->pc = 0x202bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x202bb0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x202bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x202bb4: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x202bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202bb8: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x202bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x202bbc: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x202bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x202bc0: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x202bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x202bc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x202bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202bc8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x202bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202bcc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x202bccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bd0: 0x108a80b  movn        $s5, $t0, $t0
    ctx->pc = 0x202bd0u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 8));
    // 0x202bd4: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x202bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x202bd8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x202bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x202bdc: 0x29843  sra         $s3, $v0, 1
    ctx->pc = 0x202bdcu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
    // 0x202be0: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x202be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x202be4: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x202BE4u;
    {
        const bool branch_taken_0x202be4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BE4u;
        // 0x202be8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202be4) {
            ctx->pc = 0x202BF0u;
            goto label_202bf0;
        }
    }
    ctx->pc = 0x202BECu;
    // 0x202bec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x202becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_202bf0:
    // 0x202bf0: 0xc080b1c  jal         func_202C70
    ctx->pc = 0x202BF0u;
    SET_GPR_U32(ctx, 31, 0x202BF8u);
    ctx->pc = 0x202C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C70u, 0x202BF0u, 0x202BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BF8u;
label_202bf8:
    // 0x202bf8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x202bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x202bfc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x202bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x202c00: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x202c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x202c04: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x202c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x202c08: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x202c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x202c0c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x202c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202c10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202c14: 0xafb40024  sw          $s4, 0x24($sp)
    ctx->pc = 0x202c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
    // 0x202c18: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x202c18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x202c1c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x202c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x202c20: 0xafb50028  sw          $s5, 0x28($sp)
    ctx->pc = 0x202c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x202c24: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x202c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x202c28: 0x12250007  beq         $s1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x202C28u;
    {
        const bool branch_taken_0x202c28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x202C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C28u;
        // 0x202c2c: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c28) {
            ctx->pc = 0x202C48u;
            goto label_202c48;
        }
    }
    ctx->pc = 0x202C30u;
    // 0x202c30: 0x56260006  bnel        $s1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x202C30u;
    {
        const bool branch_taken_0x202c30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x202c30) {
            ctx->pc = 0x202C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202C30u;
            // 0x202c34: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C4Cu;
            goto label_202c4c;
        }
    }
    ctx->pc = 0x202C38u;
    // 0x202c38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x202c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c40: 0xc08025c  jal         func_200970
    ctx->pc = 0x202C40u;
    SET_GPR_U32(ctx, 31, 0x202C48u);
    ctx->pc = 0x202C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C40u;
    // 0x202c44: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200970u, 0x202C40u, 0x202C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C48u;
label_202c48:
    // 0x202c48: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x202c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_202c4c:
    // 0x202c4c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x202c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x202c50: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x202c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202c54: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x202c54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x202c58: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x202c58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202c5c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x202c5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x202c60: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x202c60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202c64: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x202c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x202c68: 0x3e00008  jr          $ra
    ctx->pc = 0x202C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C68u;
        // 0x202c6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202C70u;
}
