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

// Function: sub_002F98E8
// Address: 0x2f98e8 - 0x2f9d28
void sub_002F98E8_0x2f98e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F98E8_0x2f98e8");
#endif

    switch (ctx->pc) {
        case 0x2f997cu: goto label_2f997c;
        case 0x2f9a78u: goto label_2f9a78;
        case 0x2f9ab4u: goto label_2f9ab4;
        case 0x2f9cf0u: goto label_2f9cf0;
        default: break;
    }

    ctx->pc = 0x2f98e8u;

    // 0x2f98e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f98e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f98ec: 0x3c0a01cb  lui         $t2, 0x1CB
    ctx->pc = 0x2f98ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)459 << 16));
    // 0x2f98f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f98f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f98f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f98f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f98f8: 0x8d420698  lw          $v0, 0x698($t2)
    ctx->pc = 0x2f98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1688)));
    // 0x2f98fc: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2f98fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2f9900: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f9900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f9904: 0x8c83069c  lw          $v1, 0x69C($a0)
    ctx->pc = 0x2f9904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
    // 0x2f9908: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x2f9908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2f990c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2f990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2f9910: 0x28302  srl         $s0, $v0, 12
    ctx->pc = 0x2f9910u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2f9914: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f9914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2f9918: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f9918u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f991c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2f991cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2f9920: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2f9920u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f9924: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f9924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f9928: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f9928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f992c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f9930: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f9930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f9934: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2F9934u;
    {
        const bool branch_taken_0x2f9934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9934u;
        // 0x2f9938: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9934) {
            ctx->pc = 0x2F9AB8u;
            goto label_2f9ab8;
        }
    }
    ctx->pc = 0x2F993Cu;
    // 0x2f993c: 0x3c1601cb  lui         $s6, 0x1CB
    ctx->pc = 0x2f993cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)459 << 16));
    // 0x2f9940: 0x10a900  sll         $s5, $s0, 4
    ctx->pc = 0x2f9940u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2f9944: 0x8ec30694  lw          $v1, 0x694($s6)
    ctx->pc = 0x2f9944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1684)));
    // 0x2f9948: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2f9948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f994c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2f994cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9950: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x2f9950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2f9954: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2f9954u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9958: 0x10520057  beq         $v0, $s2, . + 4 + (0x57 << 2)
    ctx->pc = 0x2F9958u;
    {
        const bool branch_taken_0x2f9958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9958u;
        // 0x2f995c: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9958) {
            ctx->pc = 0x2F9AB8u;
            goto label_2f9ab8;
        }
    }
    ctx->pc = 0x2F9960u;
    // 0x2f9960: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2F9960u;
    {
        const bool branch_taken_0x2f9960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9960u;
        // 0x2f9964: 0x3c1701cb  lui         $s7, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9960) {
            ctx->pc = 0x2F9AB8u;
            goto label_2f9ab8;
        }
    }
    ctx->pc = 0x2F9968u;
    // 0x2f9968: 0x8ee406c0  lw          $a0, 0x6C0($s7)
    ctx->pc = 0x2f9968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1728)));
    // 0x2f996c: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F996Cu;
    {
        const bool branch_taken_0x2f996c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F996Cu;
        // 0x2f9970: 0x2a32821  addu        $a1, $s5, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f996c) {
            ctx->pc = 0x2F9988u;
            goto label_2f9988;
        }
    }
    ctx->pc = 0x2F9974u;
    // 0x2f9974: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2F9974u;
    SET_GPR_U32(ctx, 31, 0x2F997Cu);
    ctx->pc = 0x2F9978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9974u;
    // 0x2f9978: 0x7faa0000  sq          $t2, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2F9974u, 0x2F997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F997Cu;
label_2f997c:
    // 0x2f997c: 0x8ec30694  lw          $v1, 0x694($s6)
    ctx->pc = 0x2f997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1684)));
    // 0x2f9980: 0x7baa0000  lq          $t2, 0x0($sp)
    ctx->pc = 0x2f9980u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9984: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x2f9984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_2f9988:
    // 0x2f9988: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f9988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f998c: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x2f998cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9990: 0x11060057  beq         $t0, $a2, . + 4 + (0x57 << 2)
    ctx->pc = 0x2F9990u;
    {
        const bool branch_taken_0x2f9990 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x2F9994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9990u;
        // 0x2f9994: 0x8d440698  lw          $a0, 0x698($t2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9990) {
            ctx->pc = 0x2F9AF0u;
            goto label_2f9af0;
        }
    }
    ctx->pc = 0x2F9998u;
    // 0x2f9998: 0x101b00  sll         $v1, $s0, 12
    ctx->pc = 0x2f9998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x2f999c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2f999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2f99a0: 0x106f004  sllv        $fp, $a2, $t0
    ctx->pc = 0x2f99a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x2f99a4: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x2f99a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f99a8: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x2f99a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f99ac: 0x2873023  subu        $a2, $s4, $a3
    ctx->pc = 0x2f99acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2f99b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f99b4: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2f99b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2f99b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f99bc: 0x1523000a  bne         $t1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F99BCu;
    {
        const bool branch_taken_0x2f99bc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99BCu;
        // 0x2f99c0: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99bc) {
            ctx->pc = 0x2F99E8u;
            goto label_2f99e8;
        }
    }
    ctx->pc = 0x2F99C4u;
    // 0x2f99c4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f99c8: 0x2503fffc  addiu       $v1, $t0, -0x4
    ctx->pc = 0x2f99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x2f99cc: 0x244206a0  addiu       $v0, $v0, 0x6A0
    ctx->pc = 0x2f99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1696));
    // 0x2f99d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f99d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f99d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f99d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f99dc: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x2f99dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x2f99e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F99E0u;
    {
        const bool branch_taken_0x2f99e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99E0u;
        // 0x2f99e4: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99e0) {
            ctx->pc = 0x2F99F0u;
            goto label_2f99f0;
        }
    }
    ctx->pc = 0x2F99E8u;
label_2f99e8:
    // 0x2f99e8: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x2f99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2f99ec: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2f99ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_2f99f0:
    // 0x2f99f0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x2f99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2f99f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f99f8: 0x8e660694  lw          $a2, 0x694($s3)
    ctx->pc = 0x2f99f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
    // 0x2f99fc: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x2f99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2f9a00: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2f9a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2f9a04: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x2f9a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x2f9a08: 0x2262821  addu        $a1, $s1, $a2
    ctx->pc = 0x2f9a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2f9a0c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2f9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2f9a10: 0x1021004  sllv        $v0, $v0, $t0
    ctx->pc = 0x2f9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2f9a14: 0x14440038  bne         $v0, $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2F9A14u;
    {
        const bool branch_taken_0x2f9a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A14u;
        // 0x2f9a18: 0x8e670694  lw          $a3, 0x694($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a14) {
            ctx->pc = 0x2F9AF8u;
            goto label_2f9af8;
        }
    }
    ctx->pc = 0x2F9A1Cu;
    // 0x2f9a1c: 0x2503fffc  addiu       $v1, $t0, -0x4
    ctx->pc = 0x2f9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x2f9a20: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f9a24: 0x244206a0  addiu       $v0, $v0, 0x6A0
    ctx->pc = 0x2f9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1696));
    // 0x2f9a28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f9a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f9a2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9a30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f9a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f9a34: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9A34u;
    {
        const bool branch_taken_0x2f9a34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A34u;
        // 0x2f9a38: 0x8ca80004  lw          $t0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a34) {
            ctx->pc = 0x2F9A44u;
            goto label_2f9a44;
        }
    }
    ctx->pc = 0x2F9A3Cu;
    // 0x2f9a3c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2F9A3Cu;
    {
        const bool branch_taken_0x2f9a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A3Cu;
        // 0x2f9a40: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a3c) {
            ctx->pc = 0x2F9ACCu;
            goto label_2f9acc;
        }
    }
    ctx->pc = 0x2F9A44u;
label_2f9a44:
    // 0x2f9a44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9a48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f9a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9a50: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F9A50u;
    {
        const bool branch_taken_0x2f9a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A50u;
        // 0x2f9a54: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a50) {
            ctx->pc = 0x2F9AA0u;
            goto label_2f9aa0;
        }
    }
    ctx->pc = 0x2F9A58u;
    // 0x2f9a58: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2f9a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f9a5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f9a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f9a60: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F9A60u;
    {
        const bool branch_taken_0x2f9a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x2f9a60) {
            ctx->pc = 0x2F9A90u;
            goto label_2f9a90;
        }
    }
    ctx->pc = 0x2F9A68u;
    // 0x2f9a68: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f9a68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9a6c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2f9a6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2f9a70: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2f9a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f9a74: 0x0  nop
    ctx->pc = 0x2f9a74u;
    // NOP
label_2f9a78:
    // 0x2f9a78: 0x10a70009  beq         $a1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9A78u;
    {
        const bool branch_taken_0x2f9a78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x2F9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A78u;
        // 0x2f9a7c: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a78) {
            ctx->pc = 0x2F9AA0u;
            goto label_2f9aa0;
        }
    }
    ctx->pc = 0x2F9A80u;
    // 0x2f9a80: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2f9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f9a84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f9a88: 0x5470fffb  bnel        $v1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F9A88u;
    {
        const bool branch_taken_0x2f9a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f9a88) {
            ctx->pc = 0x2F9A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9A88u;
            // 0x2f9a8c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9a78;
        }
    }
    ctx->pc = 0x2F9A90u;
label_2f9a90:
    // 0x2f9a90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9a94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9a98: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9A98u;
    {
        const bool branch_taken_0x2f9a98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A98u;
        // 0x2f9a9c: 0x8e630694  lw          $v1, 0x694($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a98) {
            ctx->pc = 0x2F9AC0u;
            goto label_2f9ac0;
        }
    }
    ctx->pc = 0x2F9AA0u;
label_2f9aa0:
    // 0x2f9aa0: 0x8ee406c0  lw          $a0, 0x6C0($s7)
    ctx->pc = 0x2f9aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1728)));
    // 0x2f9aa4: 0x18800094  blez        $a0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2F9AA4u;
    {
        const bool branch_taken_0x2f9aa4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AA4u;
        // 0x2f9aa8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9aa4) {
            ctx->pc = 0x2F9CF8u;
            goto label_2f9cf8;
        }
    }
    ctx->pc = 0x2F9AACu;
    // 0x2f9aac: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F9AACu;
    SET_GPR_U32(ctx, 31, 0x2F9AB4u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2F9AACu, 0x2F9AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9AB4u;
label_2f9ab4:
    // 0x2f9ab4: 0x0  nop
    ctx->pc = 0x2f9ab4u;
    // NOP
label_2f9ab8:
    // 0x2f9ab8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2F9AB8u;
    {
        const bool branch_taken_0x2f9ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AB8u;
        // 0x2f9abc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ab8) {
            ctx->pc = 0x2F9CF8u;
            goto label_2f9cf8;
        }
    }
    ctx->pc = 0x2F9AC0u;
label_2f9ac0:
    // 0x2f9ac0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2f9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2f9ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9ac8: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x2f9ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
label_2f9acc:
    // 0x2f9acc: 0x8e630694  lw          $v1, 0x694($s3)
    ctx->pc = 0x2f9accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
    // 0x2f9ad0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f9ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9ad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9ad8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2f9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2f9adc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2f9adcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f9ae0: 0x8e620694  lw          $v0, 0x694($s3)
    ctx->pc = 0x2f9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
    // 0x2f9ae4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f9ae8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9AE8u;
    {
        const bool branch_taken_0x2f9ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AE8u;
        // 0x2f9aec: 0xac45000c  sw          $a1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ae8) {
            ctx->pc = 0x2F9AF4u;
            goto label_2f9af4;
        }
    }
    ctx->pc = 0x2F9AF0u;
label_2f9af0:
    // 0x2f9af0: 0xa0b20000  sb          $s2, 0x0($a1)
    ctx->pc = 0x2f9af0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 18));
label_2f9af4:
    // 0x2f9af4: 0x8e670694  lw          $a3, 0x694($s3)
    ctx->pc = 0x2f9af4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
label_2f9af8:
    // 0x2f9af8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9afc: 0x2273021  addu        $a2, $s1, $a3
    ctx->pc = 0x2f9afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2f9b00: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x2f9b00u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f9b04: 0x14a20072  bne         $a1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2F9B04u;
    {
        const bool branch_taken_0x2f9b04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B04u;
        // 0x2f9b08: 0x3c0301cb  lui         $v1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b04) {
            ctx->pc = 0x2F9CD0u;
            goto label_2f9cd0;
        }
    }
    ctx->pc = 0x2F9B0Cu;
    // 0x2f9b0c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x2f9b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f9b10: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f9b14: 0x8c43069c  lw          $v1, 0x69C($v0)
    ctx->pc = 0x2f9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1692)));
    // 0x2f9b18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f9b18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b1c: 0x2044021  addu        $t0, $s0, $a0
    ctx->pc = 0x2f9b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2f9b20: 0x41300  sll         $v0, $a0, 12
    ctx->pc = 0x2f9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x2f9b24: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x2f9b24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f9b28: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F9B28u;
    {
        const bool branch_taken_0x2f9b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B28u;
        // 0x2f9b2c: 0x5ef00a  movz        $fp, $v0, $fp (Delay Slot)
        if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b28) {
            ctx->pc = 0x2F9BB8u;
            goto label_2f9bb8;
        }
    }
    ctx->pc = 0x2F9B30u;
    // 0x2f9b30: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x2f9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2f9b34: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2f9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f9b38: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2f9b38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9b3c: 0x1465001e  bne         $v1, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F9B3Cu;
    {
        const bool branch_taken_0x2f9b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2f9b3c) {
            ctx->pc = 0x2F9BB8u;
            goto label_2f9bb8;
        }
    }
    ctx->pc = 0x2F9B44u;
    // 0x2f9b44: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f9b48: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2f9b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9b4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2f9b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2f9b50: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2f9b50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2f9b54: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2f9b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9b58: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f9b5c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2f9b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2f9b60: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9B60u;
    {
        const bool branch_taken_0x2f9b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2F9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B60u;
        // 0x2f9b64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b60) {
            ctx->pc = 0x2F9B74u;
            goto label_2f9b74;
        }
    }
    ctx->pc = 0x2F9B68u;
    // 0x2f9b68: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2f9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2f9b6c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2f9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f9b70: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x2f9b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_2f9b74:
    // 0x2f9b74: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9B74u;
    {
        const bool branch_taken_0x2f9b74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B74u;
        // 0x2f9b78: 0x8ec30694  lw          $v1, 0x694($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b74) {
            ctx->pc = 0x2F9B88u;
            goto label_2f9b88;
        }
    }
    ctx->pc = 0x2F9B7Cu;
    // 0x2f9b7c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f9b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f9b80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9B80u;
    {
        const bool branch_taken_0x2f9b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9B80u;
        // 0x2f9b84: 0xac500658  sw          $s0, 0x658($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1624), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9b80) {
            ctx->pc = 0x2F9B94u;
            goto label_2f9b94;
        }
    }
    ctx->pc = 0x2F9B88u;
label_2f9b88:
    // 0x2f9b88: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2f9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2f9b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9b90: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2f9b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_2f9b94:
    // 0x2f9b94: 0x8e620694  lw          $v0, 0x694($s3)
    ctx->pc = 0x2f9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
    // 0x2f9b98: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x2f9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2f9b9c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f9b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9ba0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2f9ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f9ba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9ba8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2f9ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2f9bac: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2f9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2f9bb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f9bb4: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2f9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_2f9bb8:
    // 0x2f9bb8: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F9BB8u;
    {
        const bool branch_taken_0x2f9bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BB8u;
        // 0x2f9bbc: 0x8e670694  lw          $a3, 0x694($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bb8) {
            ctx->pc = 0x2F9C60u;
            goto label_2f9c60;
        }
    }
    ctx->pc = 0x2F9BC0u;
    // 0x2f9bc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9bc4: 0x2272821  addu        $a1, $s1, $a3
    ctx->pc = 0x2f9bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2f9bc8: 0x80a3fff0  lb          $v1, -0x10($a1)
    ctx->pc = 0x2f9bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x2f9bcc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9BCCu;
    {
        const bool branch_taken_0x2f9bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BCCu;
        // 0x2f9bd0: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bcc) {
            ctx->pc = 0x2F9BE0u;
            goto label_2f9be0;
        }
    }
    ctx->pc = 0x2F9BD4u;
    // 0x2f9bd4: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F9BD4u;
    {
        const bool branch_taken_0x2f9bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9bd4) {
            ctx->pc = 0x2F9BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9BD4u;
            // 0x2f9bd8: 0x8e650694  lw          $a1, 0x694($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9C64u;
            goto label_2f9c64;
        }
    }
    ctx->pc = 0x2F9BDCu;
    // 0x2f9bdc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2f9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2f9be0:
    // 0x2f9be0: 0x8d430698  lw          $v1, 0x698($t2)
    ctx->pc = 0x2f9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1688)));
    // 0x2f9be4: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x2f9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x2f9be8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9bec: 0x11200011  beqz        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F9BECu;
    {
        const bool branch_taken_0x2f9bec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9BECu;
        // 0x2f9bf0: 0x8c680000  lw          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9bec) {
            ctx->pc = 0x2F9C34u;
            goto label_2f9c34;
        }
    }
    ctx->pc = 0x2F9BF4u;
    // 0x2f9bf4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9bf8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2f9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9bfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f9bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f9c00: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9C00u;
    {
        const bool branch_taken_0x2f9c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C00u;
        // 0x2f9c04: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c00) {
            ctx->pc = 0x2F9C14u;
            goto label_2f9c14;
        }
    }
    ctx->pc = 0x2F9C08u;
    // 0x2f9c08: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2f9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2f9c0c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2f9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f9c10: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2f9c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_2f9c14:
    // 0x2f9c14: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9C14u;
    {
        const bool branch_taken_0x2f9c14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F9C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C14u;
        // 0x2f9c18: 0x8ec30694  lw          $v1, 0x694($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c14) {
            ctx->pc = 0x2F9C28u;
            goto label_2f9c28;
        }
    }
    ctx->pc = 0x2F9C1Cu;
    // 0x2f9c1c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f9c20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9C20u;
    {
        const bool branch_taken_0x2f9c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C20u;
        // 0x2f9c24: 0xac440658  sw          $a0, 0x658($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1624), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c20) {
            ctx->pc = 0x2F9C34u;
            goto label_2f9c34;
        }
    }
    ctx->pc = 0x2F9C28u;
label_2f9c28:
    // 0x2f9c28: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2f9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2f9c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9c30: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2f9c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_2f9c34:
    // 0x2f9c34: 0x8e620694  lw          $v0, 0x694($s3)
    ctx->pc = 0x2f9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
    // 0x2f9c38: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x2f9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2f9c3c: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2f9c3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c40: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f9c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9c48: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2f9c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9c4c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f9c50: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2f9c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f9c54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2f9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2f9c58: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f9c5c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2f9c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2f9c60:
    // 0x2f9c60: 0x8e650694  lw          $a1, 0x694($s3)
    ctx->pc = 0x2f9c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1684)));
label_2f9c64:
    // 0x2f9c64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f9c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9c68: 0x2a51021  addu        $v0, $s5, $a1
    ctx->pc = 0x2f9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2f9c6c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2f9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f9c70: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x2f9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2f9c74: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2f9c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2f9c78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f9c7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f9c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f9c80: 0xa086fff0  sb          $a2, -0x10($a0)
    ctx->pc = 0x2f9c80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967280), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f9c84: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x2f9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x2f9c88: 0x8d420698  lw          $v0, 0x698($t2)
    ctx->pc = 0x2f9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1688)));
    // 0x2f9c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9c90: 0x1520000e  bnez        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F9C90u;
    {
        const bool branch_taken_0x2f9c90 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C90u;
        // 0x2f9c94: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9c90) {
            ctx->pc = 0x2F9CCCu;
            goto label_2f9ccc;
        }
    }
    ctx->pc = 0x2F9C98u;
    // 0x2f9c98: 0x8ec50694  lw          $a1, 0x694($s6)
    ctx->pc = 0x2f9c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1684)));
    // 0x2f9c9c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2f9c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2f9ca0: 0x8cc40658  lw          $a0, 0x658($a2)
    ctx->pc = 0x2f9ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1624)));
    // 0x2f9ca4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9ca8: 0x2a51821  addu        $v1, $s5, $a1
    ctx->pc = 0x2f9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2f9cac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9cb0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2f9cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2f9cb4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9CB4u;
    {
        const bool branch_taken_0x2f9cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CB4u;
        // 0x2f9cb8: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9cb4) {
            ctx->pc = 0x2F9CC8u;
            goto label_2f9cc8;
        }
    }
    ctx->pc = 0x2F9CBCu;
    // 0x2f9cbc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2f9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2f9cc0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f9cc4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x2f9cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_2f9cc8:
    // 0x2f9cc8: 0xacd00658  sw          $s0, 0x658($a2)
    ctx->pc = 0x2f9cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1624), GPR_U32(ctx, 16));
label_2f9ccc:
    // 0x2f9ccc: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2f9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
label_2f9cd0:
    // 0x2f9cd0: 0x8c6206c4  lw          $v0, 0x6C4($v1)
    ctx->pc = 0x2f9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1732)));
    // 0x2f9cd4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2f9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2f9cd8: 0xac6206c4  sw          $v0, 0x6C4($v1)
    ctx->pc = 0x2f9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1732), GPR_U32(ctx, 2));
    // 0x2f9cdc: 0x8ee406c0  lw          $a0, 0x6C0($s7)
    ctx->pc = 0x2f9cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1728)));
    // 0x2f9ce0: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9CE0u;
    {
        const bool branch_taken_0x2f9ce0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CE0u;
        // 0x2f9ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ce0) {
            ctx->pc = 0x2F9CF8u;
            goto label_2f9cf8;
        }
    }
    ctx->pc = 0x2F9CE8u;
    // 0x2f9ce8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F9CE8u;
    SET_GPR_U32(ctx, 31, 0x2F9CF0u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2F9CE8u, 0x2F9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CF0u;
label_2f9cf0:
    // 0x2f9cf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9cf4: 0x0  nop
    ctx->pc = 0x2f9cf4u;
    // NOP
label_2f9cf8:
    // 0x2f9cf8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f9cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f9cfc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2f9cfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f9d00: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2f9d00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f9d04: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f9d04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9d08: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f9d08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f9d0c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f9d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f9d10: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f9d10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9d14: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f9d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9d18: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f9d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9d1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f9d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9d20: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D20u;
        // 0x2f9d24: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9D28u;
}
