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

// Function: sub_002B9948
// Address: 0x2b9948 - 0x2b9ae0
void sub_002B9948_0x2b9948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9948_0x2b9948");
#endif

    switch (ctx->pc) {
        case 0x2b9a38u: goto label_2b9a38;
        default: break;
    }

    ctx->pc = 0x2b9948u;

    // 0x2b9948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b9948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b994c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b994cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b9950: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b9950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b9954: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b9954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b995c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b995cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9964: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9964u;
    {
        const bool branch_taken_0x2b9964 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9964u;
        // 0x2b9968: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9964) {
            ctx->pc = 0x2B9974u;
            goto label_2b9974;
        }
    }
    ctx->pc = 0x2B996Cu;
    // 0x2b996c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2B996Cu;
    {
        const bool branch_taken_0x2b996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B996Cu;
        // 0x2b9970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b996c) {
            ctx->pc = 0x2B9AC4u;
            goto label_2b9ac4;
        }
    }
    ctx->pc = 0x2B9974u;
label_2b9974:
    // 0x2b9974: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x2b9974u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b9978: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2b9978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2b997c: 0x3463fc00  ori         $v1, $v1, 0xFC00
    ctx->pc = 0x2b997cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64512);
    // 0x2b9980: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x2b9980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2b9984: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2b9984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b9988: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B9988u;
    {
        const bool branch_taken_0x2b9988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9988u;
        // 0x2b998c: 0x2c621001  sltiu       $v0, $v1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9988) {
            ctx->pc = 0x2B99F8u;
            goto label_2b99f8;
        }
    }
    ctx->pc = 0x2B9990u;
    // 0x2b9990: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9990u;
    {
        const bool branch_taken_0x2b9990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9990u;
        // 0x2b9994: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9990) {
            ctx->pc = 0x2B99B0u;
            goto label_2b99b0;
        }
    }
    ctx->pc = 0x2B9998u;
    // 0x2b9998: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B9998u;
    {
        const bool branch_taken_0x2b9998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9998u;
        // 0x2b999c: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9998) {
            ctx->pc = 0x2B99E8u;
            goto label_2b99e8;
        }
    }
    ctx->pc = 0x2B99A0u;
    // 0x2b99a0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B99A0u;
    {
        const bool branch_taken_0x2b99a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99A0u;
        // 0x2b99a4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99a0) {
            ctx->pc = 0x2B99F0u;
            goto label_2b99f0;
        }
    }
    ctx->pc = 0x2B99A8u;
    // 0x2b99a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2B99A8u;
    {
        const bool branch_taken_0x2b99a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99A8u;
        // 0x2b99ac: 0x2c620008  sltiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99a8) {
            ctx->pc = 0x2B9A18u;
            goto label_2b9a18;
        }
    }
    ctx->pc = 0x2B99B0u;
label_2b99b0:
    // 0x2b99b0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2b99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2b99b4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B99B4u;
    {
        const bool branch_taken_0x2b99b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99B4u;
        // 0x2b99b8: 0x2c624001  sltiu       $v0, $v1, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99b4) {
            ctx->pc = 0x2B9A08u;
            goto label_2b9a08;
        }
    }
    ctx->pc = 0x2B99BCu;
    // 0x2b99bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B99BCu;
    {
        const bool branch_taken_0x2b99bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99BCu;
        // 0x2b99c0: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99bc) {
            ctx->pc = 0x2B99D4u;
            goto label_2b99d4;
        }
    }
    ctx->pc = 0x2B99C4u;
    // 0x2b99c4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B99C4u;
    {
        const bool branch_taken_0x2b99c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99C4u;
        // 0x2b99c8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99c4) {
            ctx->pc = 0x2B9A00u;
            goto label_2b9a00;
        }
    }
    ctx->pc = 0x2B99CCu;
    // 0x2b99cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B99CCu;
    {
        const bool branch_taken_0x2b99cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99CCu;
        // 0x2b99d0: 0x2c620008  sltiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99cc) {
            ctx->pc = 0x2B9A18u;
            goto label_2b9a18;
        }
    }
    ctx->pc = 0x2B99D4u;
label_2b99d4:
    // 0x2b99d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b99d8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B99D8u;
    {
        const bool branch_taken_0x2b99d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99D8u;
        // 0x2b99dc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99d8) {
            ctx->pc = 0x2B9A10u;
            goto label_2b9a10;
        }
    }
    ctx->pc = 0x2B99E0u;
    // 0x2b99e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B99E0u;
    {
        const bool branch_taken_0x2b99e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E0u;
        // 0x2b99e4: 0x2c620008  sltiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99e0) {
            ctx->pc = 0x2B9A18u;
            goto label_2b9a18;
        }
    }
    ctx->pc = 0x2B99E8u;
label_2b99e8:
    // 0x2b99e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B99E8u;
    {
        const bool branch_taken_0x2b99e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E8u;
        // 0x2b99ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99e8) {
            ctx->pc = 0x2B9A14u;
            goto label_2b9a14;
        }
    }
    ctx->pc = 0x2B99F0u;
label_2b99f0:
    // 0x2b99f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B99F0u;
    {
        const bool branch_taken_0x2b99f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99F0u;
        // 0x2b99f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99f0) {
            ctx->pc = 0x2B9A14u;
            goto label_2b9a14;
        }
    }
    ctx->pc = 0x2B99F8u;
label_2b99f8:
    // 0x2b99f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B99F8u;
    {
        const bool branch_taken_0x2b99f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99F8u;
        // 0x2b99fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99f8) {
            ctx->pc = 0x2B9A14u;
            goto label_2b9a14;
        }
    }
    ctx->pc = 0x2B9A00u;
label_2b9a00:
    // 0x2b9a00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9A00u;
    {
        const bool branch_taken_0x2b9a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A00u;
        // 0x2b9a04: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a00) {
            ctx->pc = 0x2B9A14u;
            goto label_2b9a14;
        }
    }
    ctx->pc = 0x2B9A08u;
label_2b9a08:
    // 0x2b9a08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9A08u;
    {
        const bool branch_taken_0x2b9a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A08u;
        // 0x2b9a0c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a08) {
            ctx->pc = 0x2B9A14u;
            goto label_2b9a14;
        }
    }
    ctx->pc = 0x2B9A10u;
label_2b9a10:
    // 0x2b9a10: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b9a14:
    // 0x2b9a14: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2b9a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2b9a18:
    // 0x2b9a18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9A18u;
    {
        const bool branch_taken_0x2b9a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A18u;
        // 0x2b9a1c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a18) {
            ctx->pc = 0x2B9A28u;
            goto label_2b9a28;
        }
    }
    ctx->pc = 0x2B9A20u;
    // 0x2b9a20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B9A20u;
    {
        const bool branch_taken_0x2b9a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A20u;
        // 0x2b9a24: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a20) {
            ctx->pc = 0x2B9A54u;
            goto label_2b9a54;
        }
    }
    ctx->pc = 0x2B9A28u;
label_2b9a28:
    // 0x2b9a28: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9A28u;
    {
        const bool branch_taken_0x2b9a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A28u;
        // 0x2b9a2c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a28) {
            ctx->pc = 0x2B9A40u;
            goto label_2b9a40;
        }
    }
    ctx->pc = 0x2B9A30u;
    // 0x2b9a30: 0xc0a53cc  jal         func_294F30
    ctx->pc = 0x2B9A30u;
    SET_GPR_U32(ctx, 31, 0x2B9A38u);
    ctx->pc = 0x294F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294F30u, 0x2B9A30u, 0x2B9A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A38u;
label_2b9a38:
    // 0x2b9a38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9A38u;
    {
        const bool branch_taken_0x2b9a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A38u;
        // 0x2b9a3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a38) {
            ctx->pc = 0x2B9A54u;
            goto label_2b9a54;
        }
    }
    ctx->pc = 0x2B9A40u;
label_2b9a40:
    // 0x2b9a40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b9a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b9a44: 0x244276d8  addiu       $v0, $v0, 0x76D8
    ctx->pc = 0x2b9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30424));
    // 0x2b9a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b9a4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9a50: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2b9a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2b9a54:
    // 0x2b9a54: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x2b9a54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b9a58: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x2b9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x2b9a5c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2b9a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2b9a60: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2b9a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b9a64: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9A64u;
    {
        const bool branch_taken_0x2b9a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A64u;
        // 0x2b9a68: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a64) {
            ctx->pc = 0x2B9A7Cu;
            goto label_2b9a7c;
        }
    }
    ctx->pc = 0x2B9A6Cu;
    // 0x2b9a6c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9A6Cu;
    {
        const bool branch_taken_0x2b9a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A6Cu;
        // 0x2b9a70: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a6c) {
            ctx->pc = 0x2B9A84u;
            goto label_2b9a84;
        }
    }
    ctx->pc = 0x2B9A74u;
    // 0x2b9a74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9A74u;
    {
        const bool branch_taken_0x2b9a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A74u;
        // 0x2b9a78: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a74) {
            ctx->pc = 0x2B9A8Cu;
            goto label_2b9a8c;
        }
    }
    ctx->pc = 0x2B9A7Cu;
label_2b9a7c:
    // 0x2b9a7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B9A7Cu;
    {
        const bool branch_taken_0x2b9a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A7Cu;
        // 0x2b9a80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a7c) {
            ctx->pc = 0x2B9A88u;
            goto label_2b9a88;
        }
    }
    ctx->pc = 0x2B9A84u;
label_2b9a84:
    // 0x2b9a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9a88:
    // 0x2b9a88: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2b9a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2b9a8c:
    // 0x2b9a8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9A8Cu;
    {
        const bool branch_taken_0x2b9a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A8Cu;
        // 0x2b9a90: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a8c) {
            ctx->pc = 0x2B9A9Cu;
            goto label_2b9a9c;
        }
    }
    ctx->pc = 0x2B9A94u;
    // 0x2b9a94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9A94u;
    {
        const bool branch_taken_0x2b9a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A94u;
        // 0x2b9a98: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a94) {
            ctx->pc = 0x2B9AB0u;
            goto label_2b9ab0;
        }
    }
    ctx->pc = 0x2B9A9Cu;
label_2b9a9c:
    // 0x2b9a9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b9a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b9aa0: 0x244276f8  addiu       $v0, $v0, 0x76F8
    ctx->pc = 0x2b9aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30456));
    // 0x2b9aa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b9aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b9aa8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9aac: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2b9aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_2b9ab0:
    // 0x2b9ab0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9ab4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9AB4u;
    {
        const bool branch_taken_0x2b9ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AB4u;
        // 0x2b9ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ab4) {
            ctx->pc = 0x2B9AC4u;
            goto label_2b9ac4;
        }
    }
    ctx->pc = 0x2B9ABCu;
    // 0x2b9abc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b9ac0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b9ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b9ac4:
    // 0x2b9ac4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b9ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b9ac8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b9ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9acc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b9accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9AD4u;
        // 0x2b9ad8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9ADCu;
    // 0x2b9adc: 0x0  nop
    ctx->pc = 0x2b9adcu;
    // NOP
}
