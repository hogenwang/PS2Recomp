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

// Function: sub_00241890
// Address: 0x241890 - 0x241bc8
void sub_00241890_0x241890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241890_0x241890");
#endif

    switch (ctx->pc) {
        case 0x241914u: goto label_241914;
        case 0x241934u: goto label_241934;
        case 0x241960u: goto label_241960;
        case 0x2419d0u: goto label_2419d0;
        case 0x2419f0u: goto label_2419f0;
        case 0x241a08u: goto label_241a08;
        case 0x241a2cu: goto label_241a2c;
        case 0x241a58u: goto label_241a58;
        case 0x241a68u: goto label_241a68;
        case 0x241a80u: goto label_241a80;
        case 0x241a9cu: goto label_241a9c;
        case 0x241aa4u: goto label_241aa4;
        case 0x241ad8u: goto label_241ad8;
        case 0x241b10u: goto label_241b10;
        default: break;
    }

    ctx->pc = 0x241890u;

    // 0x241890: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x241890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x241894: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x241894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x241898: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x241898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x24189c: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x24189cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x2418a0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2418a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2418a4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2418a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2418a8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2418a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2418ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2418acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2418b0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2418b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2418b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2418b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2418b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2418b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2418bc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2418bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2418c0: 0xc6a00b  movn        $s4, $a2, $a2
    ctx->pc = 0x2418c0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 6));
    // 0x2418c4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2418c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2418c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2418c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2418cc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2418ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2418d0: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x2418d0u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2418d4: 0x8fc4febc  lw          $a0, -0x144($fp)
    ctx->pc = 0x2418d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966972)));
    // 0x2418d8: 0x92182a  slt         $v1, $a0, $s2
    ctx->pc = 0x2418d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2418dc: 0x83900b  movn        $s2, $a0, $v1
    ctx->pc = 0x2418dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x2418e0: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x2418e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2418e4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2418E4u;
    {
        const bool branch_taken_0x2418e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2418E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418E4u;
        // 0x2418e8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418e4) {
            ctx->pc = 0x2419A8u;
            goto label_2419a8;
        }
    }
    ctx->pc = 0x2418ECu;
    // 0x2418ec: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2418ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2418f0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2418F0u;
    {
        const bool branch_taken_0x2418f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2418F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2418F0u;
        // 0x2418f4: 0x3c1501c1  lui         $s5, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418f0) {
            ctx->pc = 0x24191Cu;
            goto label_24191c;
        }
    }
    ctx->pc = 0x2418F8u;
    // 0x2418f8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2418f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2418fc: 0x8c44adf0  lw          $a0, -0x5210($v0)
    ctx->pc = 0x2418fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946288)));
    // 0x241900: 0x2686ffff  addiu       $a2, $s4, -0x1
    ctx->pc = 0x241900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x241904: 0x8ea5ade8  lw          $a1, -0x5218($s5)
    ctx->pc = 0x241904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
    // 0x241908: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x241908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24190c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24190Cu;
    SET_GPR_U32(ctx, 31, 0x241914u);
    ctx->pc = 0x241910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24190Cu;
    // 0x241910: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24190Cu, 0x241914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241914u;
label_241914:
    // 0x241914: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x241914u;
    {
        const bool branch_taken_0x241914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241914u;
        // 0x241918: 0x8ea5ade8  lw          $a1, -0x5218($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241914) {
            ctx->pc = 0x241920u;
            goto label_241920;
        }
    }
    ctx->pc = 0x24191Cu;
label_24191c:
    // 0x24191c: 0x8ea5ade8  lw          $a1, -0x5218($s5)
    ctx->pc = 0x24191cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
label_241920:
    // 0x241920: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x241920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241924: 0x2142021  addu        $a0, $s0, $s4
    ctx->pc = 0x241924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x241928: 0x2343023  subu        $a2, $s1, $s4
    ctx->pc = 0x241928u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x24192c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x24192Cu;
    SET_GPR_U32(ctx, 31, 0x241934u);
    ctx->pc = 0x241930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24192Cu;
    // 0x241930: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24192Cu, 0x241934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241934u;
label_241934:
    // 0x241934: 0x8ea2ade8  lw          $v0, -0x5218($s5)
    ctx->pc = 0x241934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
    // 0x241938: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x241938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24193c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x24193cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x241940: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x241940u;
    {
        const bool branch_taken_0x241940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241940u;
        // 0x241944: 0x3c13003a  lui         $s3, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241940) {
            ctx->pc = 0x241984u;
            goto label_241984;
        }
    }
    ctx->pc = 0x241948u;
    // 0x241948: 0x8202ffff  lb          $v0, -0x1($s0)
    ctx->pc = 0x241948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
    // 0x24194c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24194Cu;
    {
        const bool branch_taken_0x24194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24194Cu;
        // 0x241950: 0x8ea4ade8  lw          $a0, -0x5218($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24194c) {
            ctx->pc = 0x241988u;
            goto label_241988;
        }
    }
    ctx->pc = 0x241954u;
    // 0x241954: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x241954u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x241958: 0x8ea2ade8  lw          $v0, -0x5218($s5)
    ctx->pc = 0x241958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
    // 0x24195c: 0x0  nop
    ctx->pc = 0x24195cu;
    // NOP
label_241960:
    // 0x241960: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x241960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x241964: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x241964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x241968: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241968u;
    {
        const bool branch_taken_0x241968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241968u;
        // 0x24196c: 0x8ea4ade8  lw          $a0, -0x5218($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241968) {
            ctx->pc = 0x241988u;
            goto label_241988;
        }
    }
    ctx->pc = 0x241970u;
    // 0x241970: 0x8202ffff  lb          $v0, -0x1($s0)
    ctx->pc = 0x241970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
    // 0x241974: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x241974u;
    {
        const bool branch_taken_0x241974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241974u;
        // 0x241978: 0x8ea2ade8  lw          $v0, -0x5218($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241974) {
            ctx->pc = 0x241960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241960;
        }
    }
    ctx->pc = 0x24197Cu;
    // 0x24197c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24197Cu;
    {
        const bool branch_taken_0x24197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24197Cu;
        // 0x241980: 0x2049023  subu        $s2, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24197c) {
            ctx->pc = 0x24198Cu;
            goto label_24198c;
        }
    }
    ctx->pc = 0x241984u;
label_241984:
    // 0x241984: 0x8ea4ade8  lw          $a0, -0x5218($s5)
    ctx->pc = 0x241984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
label_241988:
    // 0x241988: 0x2049023  subu        $s2, $s0, $a0
    ctx->pc = 0x241988u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_24198c:
    // 0x24198c: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x24198cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x241990: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x241990u;
    {
        const bool branch_taken_0x241990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241990u;
        // 0x241994: 0x8e65feb4  lw          $a1, -0x14C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241990) {
            ctx->pc = 0x2419B8u;
            goto label_2419b8;
        }
    }
    ctx->pc = 0x241998u;
    // 0x241998: 0x8e62feb4  lw          $v0, -0x14C($s3)
    ctx->pc = 0x241998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294966964)));
    // 0x24199c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x24199cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2419a0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2419A0u;
    {
        const bool branch_taken_0x2419a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2419a0) {
            ctx->pc = 0x2419A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2419A0u;
            // 0x2419a4: 0xae72feb4  sw          $s2, -0x14C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294966964), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2419A8u;
            goto label_2419a8;
        }
    }
    ctx->pc = 0x2419A8u;
label_2419a8:
    // 0x2419a8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2419a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2419ac: 0x8c62fec0  lw          $v0, -0x140($v1)
    ctx->pc = 0x2419acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966976)));
    // 0x2419b0: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2419B0u;
    {
        const bool branch_taken_0x2419b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419B0u;
        // 0x2419b4: 0x2442002c  addiu       $v0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419b0) {
            ctx->pc = 0x241B94u;
            goto label_241b94;
        }
    }
    ctx->pc = 0x2419B8u;
label_2419b8:
    // 0x2419b8: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x2419b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2419bc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2419BCu;
    {
        const bool branch_taken_0x2419bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2419bc) {
            ctx->pc = 0x2419C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2419BCu;
            // 0x2419c0: 0xae72feb4  sw          $s2, -0x14C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294966964), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2419D8u;
            goto label_2419d8;
        }
    }
    ctx->pc = 0x2419C4u;
    // 0x2419c4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2419c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2419c8: 0xc048c96  jal         func_123258
    ctx->pc = 0x2419C8u;
    SET_GPR_U32(ctx, 31, 0x2419D0u);
    ctx->pc = 0x2419CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2419C8u;
    // 0x2419cc: 0xb12823  subu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x2419C8u, 0x2419D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419D0u;
label_2419d0:
    // 0x2419d0: 0x8ea4ade8  lw          $a0, -0x5218($s5)
    ctx->pc = 0x2419d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
    // 0x2419d4: 0xae72feb4  sw          $s2, -0x14C($s3)
    ctx->pc = 0x2419d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294966964), GPR_U32(ctx, 18));
label_2419d8:
    // 0x2419d8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2419d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2419dc: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x2419dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x2419e0: 0x8c62fec0  lw          $v0, -0x140($v1)
    ctx->pc = 0x2419e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966976)));
    // 0x2419e4: 0x8ea4ade8  lw          $a0, -0x5218($s5)
    ctx->pc = 0x2419e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
    // 0x2419e8: 0xc09046e  jal         func_2411B8
    ctx->pc = 0x2419E8u;
    SET_GPR_U32(ctx, 31, 0x2419F0u);
    ctx->pc = 0x2419ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2419E8u;
    // 0x2419ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2411B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2411B8u, 0x2419E8u, 0x2419F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419F0u;
label_2419f0:
    // 0x2419f0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2419F0u;
    {
        const bool branch_taken_0x2419f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2419F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419F0u;
        // 0x2419f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2419f0) {
            ctx->pc = 0x241A0Cu;
            goto label_241a0c;
        }
    }
    ctx->pc = 0x2419F8u;
    // 0x2419f8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2419f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2419fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2419fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a00: 0xc048c5e  jal         func_123178
    ctx->pc = 0x241A00u;
    SET_GPR_U32(ctx, 31, 0x241A08u);
    ctx->pc = 0x241A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A00u;
    // 0x241a04: 0x8ea4ade8  lw          $a0, -0x5218($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x241A00u, 0x241A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A08u;
label_241a08:
    // 0x241a08: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x241a08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_241a0c:
    // 0x241a0c: 0x16200061  bnez        $s1, . + 4 + (0x61 << 2)
    ctx->pc = 0x241A0Cu;
    {
        const bool branch_taken_0x241a0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x241A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A0Cu;
        // 0x241a10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a0c) {
            ctx->pc = 0x241B94u;
            goto label_241b94;
        }
    }
    ctx->pc = 0x241A14u;
    // 0x241a14: 0x16e00060  bnez        $s7, . + 4 + (0x60 << 2)
    ctx->pc = 0x241A14u;
    {
        const bool branch_taken_0x241a14 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x241A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A14u;
        // 0x241a18: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a14) {
            ctx->pc = 0x241B98u;
            goto label_241b98;
        }
    }
    ctx->pc = 0x241A1Cu;
    // 0x241a1c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x241a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x241a20: 0x8c44febc  lw          $a0, -0x144($v0)
    ctx->pc = 0x241a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966972)));
    // 0x241a24: 0xc098552  jal         func_261548
    ctx->pc = 0x241A24u;
    SET_GPR_U32(ctx, 31, 0x241A2Cu);
    ctx->pc = 0x241A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A24u;
    // 0x241a28: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x241A24u, 0x241A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A2Cu;
label_241a2c:
    // 0x241a2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a30: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x241A30u;
    {
        const bool branch_taken_0x241a30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x241A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A30u;
        // 0x241a34: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a30) {
            ctx->pc = 0x241A40u;
            goto label_241a40;
        }
    }
    ctx->pc = 0x241A38u;
    // 0x241a38: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x241A38u;
    {
        const bool branch_taken_0x241a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A38u;
        // 0x241a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a38) {
            ctx->pc = 0x241B94u;
            goto label_241b94;
        }
    }
    ctx->pc = 0x241A40u;
label_241a40:
    // 0x241a40: 0x8fc5febc  lw          $a1, -0x144($fp)
    ctx->pc = 0x241a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966972)));
    // 0x241a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x241a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a48: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x241a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x241a4c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x241a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x241a50: 0xc048c96  jal         func_123258
    ctx->pc = 0x241A50u;
    SET_GPR_U32(ctx, 31, 0x241A58u);
    ctx->pc = 0x241A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A50u;
    // 0x241a54: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x241A50u, 0x241A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A58u;
label_241a58:
    // 0x241a58: 0x8ea4ade8  lw          $a0, -0x5218($s5)
    ctx->pc = 0x241a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946280)));
    // 0x241a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x241a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a60: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x241A60u;
    SET_GPR_U32(ctx, 31, 0x241A68u);
    ctx->pc = 0x241A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A60u;
    // 0x241a64: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x241A60u, 0x241A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A68u;
label_241a68:
    // 0x241a68: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x241a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x241a6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x241a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a70: 0x8c65fec0  lw          $a1, -0x140($v1)
    ctx->pc = 0x241a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966976)));
    // 0x241a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241a78: 0xc0905be  jal         func_2416F8
    ctx->pc = 0x241A78u;
    SET_GPR_U32(ctx, 31, 0x241A80u);
    ctx->pc = 0x241A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A78u;
    // 0x241a7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416F8u, 0x241A78u, 0x241A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A80u;
label_241a80:
    // 0x241a80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x241a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241a84: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x241A84u;
    {
        const bool branch_taken_0x241a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241A84u;
        // 0x241a88: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a84) {
            ctx->pc = 0x241AACu;
            goto label_241aac;
        }
    }
    ctx->pc = 0x241A8Cu;
    // 0x241a8c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x241a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x241a90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x241a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241a94: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x241A94u;
    SET_GPR_U32(ctx, 31, 0x241A9Cu);
    ctx->pc = 0x241A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A94u;
    // 0x241a98: 0x24a564c8  addiu       $a1, $a1, 0x64C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x241A94u, 0x241A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A9Cu;
label_241a9c:
    // 0x241a9c: 0xc098560  jal         func_261580
    ctx->pc = 0x241A9Cu;
    SET_GPR_U32(ctx, 31, 0x241AA4u);
    ctx->pc = 0x241AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241A9Cu;
    // 0x241aa0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x241A9Cu, 0x241AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241AA4u;
label_241aa4:
    // 0x241aa4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x241AA4u;
    {
        const bool branch_taken_0x241aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AA4u;
        // 0x241aa8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241aa4) {
            ctx->pc = 0x241B94u;
            goto label_241b94;
        }
    }
    ctx->pc = 0x241AACu;
label_241aac:
    // 0x241aac: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x241aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x241ab0: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x241ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x241ab4: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x241ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x241ab8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x241AB8u;
    {
        const bool branch_taken_0x241ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AB8u;
        // 0x241abc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ab8) {
            ctx->pc = 0x241AF0u;
            goto label_241af0;
        }
    }
    ctx->pc = 0x241AC0u;
    // 0x241ac0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x241ac0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241ac4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x241ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x241ac8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x241AC8u;
    {
        const bool branch_taken_0x241ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x241ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AC8u;
        // 0x241acc: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ac8) {
            ctx->pc = 0x241AF0u;
            goto label_241af0;
        }
    }
    ctx->pc = 0x241AD0u;
    // 0x241ad0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x241ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241ad4: 0x0  nop
    ctx->pc = 0x241ad4u;
    // NOP
label_241ad8:
    // 0x241ad8: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x241ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x241adc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x241ADCu;
    {
        const bool branch_taken_0x241adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241adc) {
            ctx->pc = 0x241AF0u;
            goto label_241af0;
        }
    }
    ctx->pc = 0x241AE4u;
    // 0x241ae4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x241ae4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241ae8: 0x5043fffb  beql        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x241AE8u;
    {
        const bool branch_taken_0x241ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x241ae8) {
            ctx->pc = 0x241AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241AE8u;
            // 0x241aec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241ad8;
        }
    }
    ctx->pc = 0x241AF0u;
label_241af0:
    // 0x241af0: 0x1206001e  beq         $s0, $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x241AF0u;
    {
        const bool branch_taken_0x241af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x241AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241AF0u;
        // 0x241af4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241af0) {
            ctx->pc = 0x241B6Cu;
            goto label_241b6c;
        }
    }
    ctx->pc = 0x241AF8u;
    // 0x241af8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x241af8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241afc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x241afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x241b00: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x241B00u;
    {
        const bool branch_taken_0x241b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B00u;
        // 0x241b04: 0x33e00  sll         $a3, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b00) {
            ctx->pc = 0x241B34u;
            goto label_241b34;
        }
    }
    ctx->pc = 0x241B08u;
    // 0x241b08: 0x2132823  subu        $a1, $s0, $s3
    ctx->pc = 0x241b08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x241b0c: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x241b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
label_241b10:
    // 0x241b10: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x241b10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x241b14: 0x71603  sra         $v0, $a3, 24
    ctx->pc = 0x241b14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 24));
    // 0x241b18: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x241b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x241b1c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x241b1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x241b20: 0x0  nop
    ctx->pc = 0x241b20u;
    // NOP
    // 0x241b24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x241B24u;
    {
        const bool branch_taken_0x241b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241b24) {
            ctx->pc = 0x241B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241b10;
        }
    }
    ctx->pc = 0x241B2Cu;
    // 0x241b2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x241B2Cu;
    {
        const bool branch_taken_0x241b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B2Cu;
        // 0x241b30: 0x2502fea8  addiu       $v0, $t0, -0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b2c) {
            ctx->pc = 0x241B40u;
            goto label_241b40;
        }
    }
    ctx->pc = 0x241B34u;
label_241b34:
    // 0x241b34: 0x2132823  subu        $a1, $s0, $s3
    ctx->pc = 0x241b34u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x241b38: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x241b38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x241b3c: 0x2502fea8  addiu       $v0, $t0, -0x158
    ctx->pc = 0x241b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966952));
label_241b40:
    // 0x241b40: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x241b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x241b44: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x241b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x241b48: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x241b48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x241b4c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x241b4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241b50: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241B50u;
    {
        const bool branch_taken_0x241b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x241b50) {
            ctx->pc = 0x241B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241B50u;
            // 0x241b54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241B70u;
            goto label_241b70;
        }
    }
    ctx->pc = 0x241B58u;
    // 0x241b58: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x241b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x241b5c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241B5Cu;
    {
        const bool branch_taken_0x241b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x241B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B5Cu;
        // 0x241b60: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b5c) {
            ctx->pc = 0x241B74u;
            goto label_241b74;
        }
    }
    ctx->pc = 0x241B64u;
    // 0x241b64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x241B64u;
    {
        const bool branch_taken_0x241b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B64u;
        // 0x241b68: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b64) {
            ctx->pc = 0x241B74u;
            goto label_241b74;
        }
    }
    ctx->pc = 0x241B6Cu;
label_241b6c:
    // 0x241b6c: 0x2132823  subu        $a1, $s0, $s3
    ctx->pc = 0x241b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_241b70:
    // 0x241b70: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x241b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_241b74:
    // 0x241b74: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x241b74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x241b78: 0x161827  nor         $v1, $zero, $s6
    ctx->pc = 0x241b78u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x241b7c: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x241B7Cu;
    {
        const bool branch_taken_0x241b7c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241B7Cu;
        // 0x241b80: 0xa6230008  sh          $v1, 0x8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b7c) {
            ctx->pc = 0x241B90u;
            goto label_241b90;
        }
    }
    ctx->pc = 0x241B84u;
    // 0x241b84: 0x9222000b  lbu         $v0, 0xB($s1)
    ctx->pc = 0x241b84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x241b88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x241b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x241b8c: 0xa222000b  sb          $v0, 0xB($s1)
    ctx->pc = 0x241b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 2));
label_241b90:
    // 0x241b90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x241b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241b94:
    // 0x241b94: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x241b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_241b98:
    // 0x241b98: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x241b98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x241b9c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x241b9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x241ba0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x241ba0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x241ba4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x241ba4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x241ba8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x241ba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x241bac: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x241bacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241bb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x241bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241bb4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x241bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241bb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x241bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x241BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241BBCu;
        // 0x241bc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241BC4u;
    // 0x241bc4: 0x0  nop
    ctx->pc = 0x241bc4u;
    // NOP
    if (ctx->pc == 0x241bc4u) { ctx->pc = 0x241bc8u; }
}
