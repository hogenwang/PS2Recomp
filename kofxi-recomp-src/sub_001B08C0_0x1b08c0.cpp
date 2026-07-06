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

// Function: sub_001B08C0
// Address: 0x1b08c0 - 0x1b0a60
void sub_001B08C0_0x1b08c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B08C0_0x1b08c0");
#endif

    switch (ctx->pc) {
        case 0x1b08c0u: goto label_1b08c0;
        case 0x1b08c4u: goto label_1b08c4;
        case 0x1b08c8u: goto label_1b08c8;
        case 0x1b08ccu: goto label_1b08cc;
        case 0x1b08d0u: goto label_1b08d0;
        case 0x1b08d4u: goto label_1b08d4;
        case 0x1b08d8u: goto label_1b08d8;
        case 0x1b08dcu: goto label_1b08dc;
        case 0x1b08e0u: goto label_1b08e0;
        case 0x1b08e4u: goto label_1b08e4;
        case 0x1b08e8u: goto label_1b08e8;
        case 0x1b08ecu: goto label_1b08ec;
        case 0x1b08f0u: goto label_1b08f0;
        case 0x1b08f4u: goto label_1b08f4;
        case 0x1b08f8u: goto label_1b08f8;
        case 0x1b08fcu: goto label_1b08fc;
        case 0x1b0900u: goto label_1b0900;
        case 0x1b0904u: goto label_1b0904;
        case 0x1b0908u: goto label_1b0908;
        case 0x1b090cu: goto label_1b090c;
        case 0x1b0910u: goto label_1b0910;
        case 0x1b0914u: goto label_1b0914;
        case 0x1b0918u: goto label_1b0918;
        case 0x1b091cu: goto label_1b091c;
        case 0x1b0920u: goto label_1b0920;
        case 0x1b0924u: goto label_1b0924;
        case 0x1b0928u: goto label_1b0928;
        case 0x1b092cu: goto label_1b092c;
        case 0x1b0930u: goto label_1b0930;
        case 0x1b0934u: goto label_1b0934;
        case 0x1b0938u: goto label_1b0938;
        case 0x1b093cu: goto label_1b093c;
        case 0x1b0940u: goto label_1b0940;
        case 0x1b0944u: goto label_1b0944;
        case 0x1b0948u: goto label_1b0948;
        case 0x1b094cu: goto label_1b094c;
        case 0x1b0950u: goto label_1b0950;
        case 0x1b0954u: goto label_1b0954;
        case 0x1b0958u: goto label_1b0958;
        case 0x1b095cu: goto label_1b095c;
        case 0x1b0960u: goto label_1b0960;
        case 0x1b0964u: goto label_1b0964;
        case 0x1b0968u: goto label_1b0968;
        case 0x1b096cu: goto label_1b096c;
        case 0x1b0970u: goto label_1b0970;
        case 0x1b0974u: goto label_1b0974;
        case 0x1b0978u: goto label_1b0978;
        case 0x1b097cu: goto label_1b097c;
        case 0x1b0980u: goto label_1b0980;
        case 0x1b0984u: goto label_1b0984;
        case 0x1b0988u: goto label_1b0988;
        case 0x1b098cu: goto label_1b098c;
        case 0x1b0990u: goto label_1b0990;
        case 0x1b0994u: goto label_1b0994;
        case 0x1b0998u: goto label_1b0998;
        case 0x1b099cu: goto label_1b099c;
        case 0x1b09a0u: goto label_1b09a0;
        case 0x1b09a4u: goto label_1b09a4;
        case 0x1b09a8u: goto label_1b09a8;
        case 0x1b09acu: goto label_1b09ac;
        case 0x1b09b0u: goto label_1b09b0;
        case 0x1b09b4u: goto label_1b09b4;
        case 0x1b09b8u: goto label_1b09b8;
        case 0x1b09bcu: goto label_1b09bc;
        case 0x1b09c0u: goto label_1b09c0;
        case 0x1b09c4u: goto label_1b09c4;
        case 0x1b09c8u: goto label_1b09c8;
        case 0x1b09ccu: goto label_1b09cc;
        case 0x1b09d0u: goto label_1b09d0;
        case 0x1b09d4u: goto label_1b09d4;
        case 0x1b09d8u: goto label_1b09d8;
        case 0x1b09dcu: goto label_1b09dc;
        case 0x1b09e0u: goto label_1b09e0;
        case 0x1b09e4u: goto label_1b09e4;
        case 0x1b09e8u: goto label_1b09e8;
        case 0x1b09ecu: goto label_1b09ec;
        case 0x1b09f0u: goto label_1b09f0;
        case 0x1b09f4u: goto label_1b09f4;
        case 0x1b09f8u: goto label_1b09f8;
        case 0x1b09fcu: goto label_1b09fc;
        case 0x1b0a00u: goto label_1b0a00;
        case 0x1b0a04u: goto label_1b0a04;
        case 0x1b0a08u: goto label_1b0a08;
        case 0x1b0a0cu: goto label_1b0a0c;
        case 0x1b0a10u: goto label_1b0a10;
        case 0x1b0a14u: goto label_1b0a14;
        case 0x1b0a18u: goto label_1b0a18;
        case 0x1b0a1cu: goto label_1b0a1c;
        case 0x1b0a20u: goto label_1b0a20;
        case 0x1b0a24u: goto label_1b0a24;
        case 0x1b0a28u: goto label_1b0a28;
        case 0x1b0a2cu: goto label_1b0a2c;
        case 0x1b0a30u: goto label_1b0a30;
        case 0x1b0a34u: goto label_1b0a34;
        case 0x1b0a38u: goto label_1b0a38;
        case 0x1b0a3cu: goto label_1b0a3c;
        case 0x1b0a40u: goto label_1b0a40;
        case 0x1b0a44u: goto label_1b0a44;
        case 0x1b0a48u: goto label_1b0a48;
        case 0x1b0a4cu: goto label_1b0a4c;
        case 0x1b0a50u: goto label_1b0a50;
        case 0x1b0a54u: goto label_1b0a54;
        case 0x1b0a58u: goto label_1b0a58;
        case 0x1b0a5cu: goto label_1b0a5c;
        default: break;
    }

    ctx->pc = 0x1b08c0u;

label_1b08c0:
    // 0x1b08c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b08c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b08c4:
    // 0x1b08c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b08c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b08c8:
    // 0x1b08c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b08c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b08cc:
    // 0x1b08cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b08ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1b08d0:
    // 0x1b08d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b08d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b08d4:
    // 0x1b08d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b08d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1b08d8:
    // 0x1b08d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b08d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b08dc:
    // 0x1b08dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b08dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b08e0:
    // 0x1b08e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b08e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b08e4:
    // 0x1b08e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b08e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b08e8:
    // 0x1b08e8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1b08e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b08ec:
    // 0x1b08ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b08ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b08f0:
    // 0x1b08f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b08f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b08f4:
    // 0x1b08f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b08f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1b08f8:
    // 0x1b08f8: 0xc06bb22  jal         func_1AEC88
label_1b08fc:
    if (ctx->pc == 0x1B08FCu) {
        ctx->pc = 0x1B08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B08F8u;
        // 0x1b08fc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0900u;
        goto label_1b0900;
    }
    ctx->pc = 0x1B08F8u;
    SET_GPR_U32(ctx, 31, 0x1B0900u);
    ctx->pc = 0x1B08FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B08F8u;
    // 0x1b08fc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC88u, 0x1B08F8u, 0x1B0900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0900u;
label_1b0900:
    // 0x1b0900: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1b0904:
    if (ctx->pc == 0x1B0904u) {
        ctx->pc = 0x1B0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0900u;
        // 0x1b0904: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0908u;
        goto label_1b0908;
    }
    ctx->pc = 0x1B0900u;
    {
        const bool branch_taken_0x1b0900 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0900u;
        // 0x1b0904: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0900) {
            ctx->pc = 0x1B0910u;
            goto label_1b0910;
        }
    }
    ctx->pc = 0x1B0908u;
label_1b0908:
    // 0x1b0908: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b090c:
    if (ctx->pc == 0x1B090Cu) {
        ctx->pc = 0x1B090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0908u;
        // 0x1b090c: 0x24847760  addiu       $a0, $a0, 0x7760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0910u;
        goto label_1b0910;
    }
    ctx->pc = 0x1B0908u;
    {
        const bool branch_taken_0x1b0908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0908u;
        // 0x1b090c: 0x24847760  addiu       $a0, $a0, 0x7760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0908) {
            ctx->pc = 0x1B0930u;
            goto label_1b0930;
        }
    }
    ctx->pc = 0x1B0910u;
label_1b0910:
    // 0x1b0910: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_1b0914:
    if (ctx->pc == 0x1B0914u) {
        ctx->pc = 0x1B0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0910u;
        // 0x1b0914: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0918u;
        goto label_1b0918;
    }
    ctx->pc = 0x1B0910u;
    {
        const bool branch_taken_0x1b0910 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1B0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0910u;
        // 0x1b0914: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0910) {
            ctx->pc = 0x1B0920u;
            goto label_1b0920;
        }
    }
    ctx->pc = 0x1B0918u;
label_1b0918:
    // 0x1b0918: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b091c:
    if (ctx->pc == 0x1B091Cu) {
        ctx->pc = 0x1B091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0918u;
        // 0x1b091c: 0x24847788  addiu       $a0, $a0, 0x7788 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0920u;
        goto label_1b0920;
    }
    ctx->pc = 0x1B0918u;
    {
        const bool branch_taken_0x1b0918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0918u;
        // 0x1b091c: 0x24847788  addiu       $a0, $a0, 0x7788 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0918) {
            ctx->pc = 0x1B0930u;
            goto label_1b0930;
        }
    }
    ctx->pc = 0x1B0920u;
label_1b0920:
    // 0x1b0920: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_1b0924:
    if (ctx->pc == 0x1B0924u) {
        ctx->pc = 0x1B0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0920u;
        // 0x1b0924: 0x82040001  lb          $a0, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0928u;
        goto label_1b0928;
    }
    ctx->pc = 0x1B0920u;
    {
        const bool branch_taken_0x1b0920 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0920) {
            ctx->pc = 0x1B0924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0920u;
            // 0x1b0924: 0x82040001  lb          $a0, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0940u;
            goto label_1b0940;
        }
    }
    ctx->pc = 0x1B0928u;
label_1b0928:
    // 0x1b0928: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b0928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1b092c:
    // 0x1b092c: 0x248477b8  addiu       $a0, $a0, 0x77B8
    ctx->pc = 0x1b092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30648));
label_1b0930:
    // 0x1b0930: 0xc06ba0a  jal         func_1AE828
label_1b0934:
    if (ctx->pc == 0x1B0934u) {
        ctx->pc = 0x1B0938u;
        goto label_1b0938;
    }
    ctx->pc = 0x1B0930u;
    SET_GPR_U32(ctx, 31, 0x1B0938u);
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B0930u, 0x1B0938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0938u;
label_1b0938:
    // 0x1b0938: 0x10000041  b           . + 4 + (0x41 << 2)
label_1b093c:
    if (ctx->pc == 0x1B093Cu) {
        ctx->pc = 0x1B093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0938u;
        // 0x1b093c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0940u;
        goto label_1b0940;
    }
    ctx->pc = 0x1B0938u;
    {
        const bool branch_taken_0x1b0938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0938u;
        // 0x1b093c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0938) {
            ctx->pc = 0x1B0A40u;
            goto label_1b0a40;
        }
    }
    ctx->pc = 0x1B0940u;
label_1b0940:
    // 0x1b0940: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b0940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0944:
    // 0x1b0944: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
label_1b0948:
    if (ctx->pc == 0x1B0948u) {
        ctx->pc = 0x1B0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0944u;
        // 0x1b0948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B094Cu;
        goto label_1b094c;
    }
    ctx->pc = 0x1B0944u;
    {
        const bool branch_taken_0x1b0944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0944u;
        // 0x1b0948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0944) {
            ctx->pc = 0x1B0A40u;
            goto label_1b0a40;
        }
    }
    ctx->pc = 0x1B094Cu;
label_1b094c:
    // 0x1b094c: 0xc06b48e  jal         func_1AD238
label_1b0950:
    if (ctx->pc == 0x1B0950u) {
        ctx->pc = 0x1B0954u;
        goto label_1b0954;
    }
    ctx->pc = 0x1B094Cu;
    SET_GPR_U32(ctx, 31, 0x1B0954u);
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1B094Cu, 0x1B0954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0954u;
label_1b0954:
    // 0x1b0954: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b0954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b0958:
    // 0x1b0958: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b095c:
    if (ctx->pc == 0x1B095Cu) {
        ctx->pc = 0x1B095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0958u;
        // 0x1b095c: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0960u;
        goto label_1b0960;
    }
    ctx->pc = 0x1B0958u;
    {
        const bool branch_taken_0x1b0958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0958u;
        // 0x1b095c: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0958) {
            ctx->pc = 0x1B0978u;
            goto label_1b0978;
        }
    }
    ctx->pc = 0x1B0960u;
label_1b0960:
    // 0x1b0960: 0xc06ba0a  jal         func_1AE828
label_1b0964:
    if (ctx->pc == 0x1B0964u) {
        ctx->pc = 0x1B0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0960u;
        // 0x1b0964: 0x248477e0  addiu       $a0, $a0, 0x77E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0968u;
        goto label_1b0968;
    }
    ctx->pc = 0x1B0960u;
    SET_GPR_U32(ctx, 31, 0x1B0968u);
    ctx->pc = 0x1B0964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0960u;
    // 0x1b0964: 0x248477e0  addiu       $a0, $a0, 0x77E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1B0960u, 0x1B0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0968u;
label_1b0968:
    // 0x1b0968: 0xc06b494  jal         func_1AD250
label_1b096c:
    if (ctx->pc == 0x1B096Cu) {
        ctx->pc = 0x1B0970u;
        goto label_1b0970;
    }
    ctx->pc = 0x1B0968u;
    SET_GPR_U32(ctx, 31, 0x1B0970u);
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1B0968u, 0x1B0970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0970u;
label_1b0970:
    // 0x1b0970: 0x10000033  b           . + 4 + (0x33 << 2)
label_1b0974:
    if (ctx->pc == 0x1B0974u) {
        ctx->pc = 0x1B0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0970u;
        // 0x1b0974: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0978u;
        goto label_1b0978;
    }
    ctx->pc = 0x1B0970u;
    {
        const bool branch_taken_0x1b0970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0970u;
        // 0x1b0974: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0970) {
            ctx->pc = 0x1B0A40u;
            goto label_1b0a40;
        }
    }
    ctx->pc = 0x1B0978u;
label_1b0978:
    // 0x1b0978: 0xc06b494  jal         func_1AD250
label_1b097c:
    if (ctx->pc == 0x1B097Cu) {
        ctx->pc = 0x1B097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0978u;
        // 0x1b097c: 0x1492c0  sll         $s2, $s4, 11 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0980u;
        goto label_1b0980;
    }
    ctx->pc = 0x1B0978u;
    SET_GPR_U32(ctx, 31, 0x1B0980u);
    ctx->pc = 0x1B097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0978u;
    // 0x1b097c: 0x1492c0  sll         $s2, $s4, 11 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1B0978u, 0x1B0980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0980u;
label_1b0980:
    // 0x1b0980: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b0980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0984:
    // 0x1b0984: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b0984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0988:
    // 0x1b0988: 0xc072cec  jal         func_1CB3B0
label_1b098c:
    if (ctx->pc == 0x1B098Cu) {
        ctx->pc = 0x1B098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0988u;
        // 0x1b098c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0990u;
        goto label_1b0990;
    }
    ctx->pc = 0x1B0988u;
    SET_GPR_U32(ctx, 31, 0x1B0990u);
    ctx->pc = 0x1B098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0988u;
    // 0x1b098c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB3B0u, 0x1B0988u, 0x1B0990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0990u;
label_1b0990:
    // 0x1b0990: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b0990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0994:
    // 0x1b0994: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_1b0998:
    if (ctx->pc == 0x1B0998u) {
        ctx->pc = 0x1B0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0994u;
        // 0x1b0998: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B099Cu;
        goto label_1b099c;
    }
    ctx->pc = 0x1B0994u;
    {
        const bool branch_taken_0x1b0994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0994u;
        // 0x1b0998: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0994) {
            ctx->pc = 0x1B0A40u;
            goto label_1b0a40;
        }
    }
    ctx->pc = 0x1B099Cu;
label_1b099c:
    // 0x1b099c: 0xc06b48e  jal         func_1AD238
label_1b09a0:
    if (ctx->pc == 0x1B09A0u) {
        ctx->pc = 0x1B09A4u;
        goto label_1b09a4;
    }
    ctx->pc = 0x1B099Cu;
    SET_GPR_U32(ctx, 31, 0x1B09A4u);
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1B099Cu, 0x1B09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09A4u;
label_1b09a4:
    // 0x1b09a4: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x1b09a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
label_1b09a8:
    // 0x1b09a8: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1b09a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1b09ac:
    // 0x1b09ac: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b09acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1b09b0:
    // 0x1b09b0: 0xae12002c  sw          $s2, 0x2C($s0)
    ctx->pc = 0x1b09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
label_1b09b4:
    // 0x1b09b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b09b8:
    // 0x1b09b8: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x1b09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_1b09bc:
    // 0x1b09bc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1b09c0:
    if (ctx->pc == 0x1B09C0u) {
        ctx->pc = 0x1B09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09BCu;
        // 0x1b09c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09C4u;
        goto label_1b09c4;
    }
    ctx->pc = 0x1B09BCu;
    {
        const bool branch_taken_0x1b09bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09BCu;
        // 0x1b09c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b09bc) {
            ctx->pc = 0x1B09CCu;
            goto label_1b09cc;
        }
    }
    ctx->pc = 0x1B09C4u;
label_1b09c4:
    // 0x1b09c4: 0xc06bab2  jal         func_1AEAC8
label_1b09c8:
    if (ctx->pc == 0x1B09C8u) {
        ctx->pc = 0x1B09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09C4u;
        // 0x1b09c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09CCu;
        goto label_1b09cc;
    }
    ctx->pc = 0x1B09C4u;
    SET_GPR_U32(ctx, 31, 0x1B09CCu);
    ctx->pc = 0x1B09C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B09C4u;
    // 0x1b09c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEAC8u, 0x1B09C4u, 0x1B09CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09CCu;
label_1b09cc:
    // 0x1b09cc: 0xc06b494  jal         func_1AD250
label_1b09d0:
    if (ctx->pc == 0x1B09D0u) {
        ctx->pc = 0x1B09D4u;
        goto label_1b09d4;
    }
    ctx->pc = 0x1B09CCu;
    SET_GPR_U32(ctx, 31, 0x1B09D4u);
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1B09CCu, 0x1B09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09D4u;
label_1b09d4:
    // 0x1b09d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b09d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b09d8:
    // 0x1b09d8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1b09d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b09dc:
    // 0x1b09dc: 0xc06c184  jal         func_1B0610
label_1b09e0:
    if (ctx->pc == 0x1B09E0u) {
        ctx->pc = 0x1B09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09DCu;
        // 0x1b09e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09E4u;
        goto label_1b09e4;
    }
    ctx->pc = 0x1B09DCu;
    SET_GPR_U32(ctx, 31, 0x1B09E4u);
    ctx->pc = 0x1B09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B09DCu;
    // 0x1b09e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0610u, 0x1B09DCu, 0x1B09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09E4u;
label_1b09e4:
    // 0x1b09e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b09e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b09e8:
    // 0x1b09e8: 0x5e20000e  bgtzl       $s1, . + 4 + (0xE << 2)
label_1b09ec:
    if (ctx->pc == 0x1B09ECu) {
        ctx->pc = 0x1B09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B09E8u;
        // 0x1b09ec: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B09F0u;
        goto label_1b09f0;
    }
    ctx->pc = 0x1B09E8u;
    {
        const bool branch_taken_0x1b09e8 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x1b09e8) {
            ctx->pc = 0x1B09ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B09E8u;
            // 0x1b09ec: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0A24u;
            goto label_1b0a24;
        }
    }
    ctx->pc = 0x1B09F0u;
label_1b09f0:
    // 0x1b09f0: 0xc06b48e  jal         func_1AD238
label_1b09f4:
    if (ctx->pc == 0x1B09F4u) {
        ctx->pc = 0x1B09F8u;
        goto label_1b09f8;
    }
    ctx->pc = 0x1B09F0u;
    SET_GPR_U32(ctx, 31, 0x1B09F8u);
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1B09F0u, 0x1B09F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09F8u;
label_1b09f8:
    // 0x1b09f8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b09f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b09fc:
    // 0x1b09fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1b0a00:
    if (ctx->pc == 0x1B0A00u) {
        ctx->pc = 0x1B0A04u;
        goto label_1b0a04;
    }
    ctx->pc = 0x1B09FCu;
    {
        const bool branch_taken_0x1b09fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b09fc) {
            ctx->pc = 0x1B0A18u;
            goto label_1b0a18;
        }
    }
    ctx->pc = 0x1B0A04u;
label_1b0a04:
    // 0x1b0a04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b0a08:
    // 0x1b0a08: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b0a0c:
    // 0x1b0a0c: 0x40f809  jalr        $v0
label_1b0a10:
    if (ctx->pc == 0x1B0A10u) {
        ctx->pc = 0x1B0A14u;
        goto label_1b0a14;
    }
    ctx->pc = 0x1B0A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0A14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A0Cu, 0x1B0A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0A14u;
label_1b0a14:
    // 0x1b0a14: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1b0a18:
    // 0x1b0a18: 0xc06b494  jal         func_1AD250
label_1b0a1c:
    if (ctx->pc == 0x1B0A1Cu) {
        ctx->pc = 0x1B0A20u;
        goto label_1b0a20;
    }
    ctx->pc = 0x1B0A18u;
    SET_GPR_U32(ctx, 31, 0x1B0A20u);
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1B0A18u, 0x1B0A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A20u;
label_1b0a20:
    // 0x1b0a20: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1b0a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b0a24:
    // 0x1b0a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b0a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a28:
    // 0x1b0a28: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1b0a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a2c:
    // 0x1b0a2c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1b0a2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a30:
    // 0x1b0a30: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b0a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b0a34:
    // 0x1b0a34: 0xc06bb22  jal         func_1AEC88
label_1b0a38:
    if (ctx->pc == 0x1B0A38u) {
        ctx->pc = 0x1B0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A34u;
        // 0x1b0a38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A3Cu;
        goto label_1b0a3c;
    }
    ctx->pc = 0x1B0A34u;
    SET_GPR_U32(ctx, 31, 0x1B0A3Cu);
    ctx->pc = 0x1B0A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0A34u;
    // 0x1b0a38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC88u, 0x1B0A34u, 0x1B0A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A3Cu;
label_1b0a3c:
    // 0x1b0a3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b0a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0a40:
    // 0x1b0a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b0a44:
    // 0x1b0a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b0a48:
    // 0x1b0a48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0a4c:
    // 0x1b0a4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b0a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b0a50:
    // 0x1b0a50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b0a50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0a54:
    // 0x1b0a54: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b0a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0a58:
    // 0x1b0a58: 0x3e00008  jr          $ra
label_1b0a5c:
    if (ctx->pc == 0x1B0A5Cu) {
        ctx->pc = 0x1B0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A58u;
        // 0x1b0a5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0A60u;
        goto label_fallthrough_0x1b0a58;
    }
    ctx->pc = 0x1B0A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A58u;
        // 0x1b0a5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b0a58:
    ctx->pc = 0x1B0A60u;
}
