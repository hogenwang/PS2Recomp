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

// Function: sub_00259850
// Address: 0x259850 - 0x2599e0
void sub_00259850_0x259850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259850_0x259850");
#endif

    switch (ctx->pc) {
        case 0x25987cu: goto label_25987c;
        case 0x259898u: goto label_259898;
        default: break;
    }

    ctx->pc = 0x259850u;

    // 0x259850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259854: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x259854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259858: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x259858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25985c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x259860: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x259860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259864: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x259864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x259868: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25986c: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25986Cu;
    {
        const bool branch_taken_0x25986c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x259870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25986Cu;
        // 0x259870: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25986c) {
            ctx->pc = 0x259888u;
            goto label_259888;
        }
    }
    ctx->pc = 0x259874u;
    // 0x259874: 0xc098552  jal         func_261548
    ctx->pc = 0x259874u;
    SET_GPR_U32(ctx, 31, 0x25987Cu);
    ctx->pc = 0x259878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259874u;
    // 0x259878: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x259874u, 0x25987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25987Cu;
label_25987c:
    // 0x25987c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25987cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259880: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259880u;
    {
        const bool branch_taken_0x259880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x259884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259880u;
        // 0x259884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259880) {
            ctx->pc = 0x259890u;
            goto label_259890;
        }
    }
    ctx->pc = 0x259888u;
label_259888:
    // 0x259888: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x259888u;
    {
        const bool branch_taken_0x259888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259888u;
        // 0x25988c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259888) {
            ctx->pc = 0x2599C8u;
            goto label_2599c8;
        }
    }
    ctx->pc = 0x259890u;
label_259890:
    // 0x259890: 0xc048c96  jal         func_123258
    ctx->pc = 0x259890u;
    SET_GPR_U32(ctx, 31, 0x259898u);
    ctx->pc = 0x259894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259890u;
    // 0x259894: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x259890u, 0x259898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259898u;
label_259898:
    // 0x259898: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x259898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x25989c: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x25989cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x2598a0: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2598a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2598a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2598a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2598a8: 0x944312a8  lhu         $v1, 0x12A8($v0)
    ctx->pc = 0x2598a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x2598ac: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x2598acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x2598b0: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x2598b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x2598b4: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x2598b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2598b8: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x2598b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x2598bc: 0xa6000028  sh          $zero, 0x28($s0)
    ctx->pc = 0x2598bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x2598c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2598c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2598c4: 0x8c4412b0  lw          $a0, 0x12B0($v0)
    ctx->pc = 0x2598c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4784)));
    // 0x2598c8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2598C8u;
    {
        const bool branch_taken_0x2598c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2598CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598C8u;
        // 0x2598cc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598c8) {
            ctx->pc = 0x259900u;
            goto label_259900;
        }
    }
    ctx->pc = 0x2598D0u;
    // 0x2598d0: 0x8c4312b8  lw          $v1, 0x12B8($v0)
    ctx->pc = 0x2598d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4792)));
    // 0x2598d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2598D4u;
    {
        const bool branch_taken_0x2598d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2598D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598D4u;
        // 0x2598d8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598d4) {
            ctx->pc = 0x2598E0u;
            goto label_2598e0;
        }
    }
    ctx->pc = 0x2598DCu;
    // 0x2598dc: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x2598dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
label_2598e0:
    // 0x2598e0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2598E0u;
    {
        const bool branch_taken_0x2598e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2598E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598E0u;
        // 0x2598e4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598e0) {
            ctx->pc = 0x259900u;
            goto label_259900;
        }
    }
    ctx->pc = 0x2598E8u;
    // 0x2598e8: 0x8c4312bc  lw          $v1, 0x12BC($v0)
    ctx->pc = 0x2598e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4796)));
    // 0x2598ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2598ECu;
    {
        const bool branch_taken_0x2598ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2598F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2598ECu;
        // 0x2598f0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2598ec) {
            ctx->pc = 0x259904u;
            goto label_259904;
        }
    }
    ctx->pc = 0x2598F4u;
    // 0x2598f4: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x2598f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2598f8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2598f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2598fc: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x2598fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
label_259900:
    // 0x259900: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x259900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_259904:
    // 0x259904: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x259904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259908: 0x8c4412b4  lw          $a0, 0x12B4($v0)
    ctx->pc = 0x259908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4788)));
    // 0x25990c: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25990Cu;
    {
        const bool branch_taken_0x25990c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25990c) {
            ctx->pc = 0x259910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25990Cu;
            // 0x259910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259920u;
            goto label_259920;
        }
    }
    ctx->pc = 0x259914u;
    // 0x259914: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x259914u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x259918: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x259918u;
    {
        const bool branch_taken_0x259918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259918u;
        // 0x25991c: 0x34420800  ori         $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259918) {
            ctx->pc = 0x25992Cu;
            goto label_25992c;
        }
    }
    ctx->pc = 0x259920u;
label_259920:
    // 0x259920: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259920u;
    {
        const bool branch_taken_0x259920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x259924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259920u;
        // 0x259924: 0x96020028  lhu         $v0, 0x28($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259920) {
            ctx->pc = 0x259934u;
            goto label_259934;
        }
    }
    ctx->pc = 0x259928u;
    // 0x259928: 0x34422800  ori         $v0, $v0, 0x2800
    ctx->pc = 0x259928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
label_25992c:
    // 0x25992c: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x25992cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x259930: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x259930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_259934:
    // 0x259934: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x259934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259938: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x259938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x25993c: 0x16250005  bne         $s1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25993Cu;
    {
        const bool branch_taken_0x25993c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x259940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25993Cu;
        // 0x259940: 0xa6020028  sh          $v0, 0x28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25993c) {
            ctx->pc = 0x259954u;
            goto label_259954;
        }
    }
    ctx->pc = 0x259944u;
    // 0x259944: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x259944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x259948: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x259948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x25994c: 0x8c621020  lw          $v0, 0x1020($v1)
    ctx->pc = 0x25994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4128)));
    // 0x259950: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x259950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
label_259954:
    // 0x259954: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x259954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x259958: 0xa60000a0  sh          $zero, 0xA0($s0)
    ctx->pc = 0x259958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x25995c: 0x8c6212ac  lw          $v0, 0x12AC($v1)
    ctx->pc = 0x25995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x259960: 0xa60500a4  sh          $a1, 0xA4($s0)
    ctx->pc = 0x259960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 5));
    // 0x259964: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x259964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x259968: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x259968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25996c: 0x31c83  sra         $v1, $v1, 18
    ctx->pc = 0x25996cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 18));
    // 0x259970: 0xa60200a2  sh          $v0, 0xA2($s0)
    ctx->pc = 0x259970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x259974: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x259974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259978: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x259978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25997c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25997Cu;
    {
        const bool branch_taken_0x25997c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25997Cu;
        // 0x259980: 0xa603001c  sh          $v1, 0x1C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25997c) {
            ctx->pc = 0x25998Cu;
            goto label_25998c;
        }
    }
    ctx->pc = 0x259984u;
    // 0x259984: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x259984u;
    {
        const bool branch_taken_0x259984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259984u;
        // 0x259988: 0xa605001c  sh          $a1, 0x1C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259984) {
            ctx->pc = 0x25999Cu;
            goto label_25999c;
        }
    }
    ctx->pc = 0x25998Cu;
label_25998c:
    // 0x25998c: 0x28820081  slti        $v0, $a0, 0x81
    ctx->pc = 0x25998cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x259990: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x259990u;
    {
        const bool branch_taken_0x259990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259990u;
        // 0x259994: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259990) {
            ctx->pc = 0x25999Cu;
            goto label_25999c;
        }
    }
    ctx->pc = 0x259998u;
    // 0x259998: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x259998u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
label_25999c:
    // 0x25999c: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x25999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x2599a0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2599a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2599a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2599a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2599a8: 0xfe020090  sd          $v0, 0x90($s0)
    ctx->pc = 0x2599a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 2));
    // 0x2599ac: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2599ACu;
    {
        const bool branch_taken_0x2599ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2599B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599ACu;
        // 0x2599b0: 0xfe020088  sd          $v0, 0x88($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2599ac) {
            ctx->pc = 0x2599C4u;
            goto label_2599c4;
        }
    }
    ctx->pc = 0x2599B4u;
    // 0x2599b4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2599b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2599b8: 0x90431010  lbu         $v1, 0x1010($v0)
    ctx->pc = 0x2599b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4112)));
    // 0x2599bc: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x2599bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
    // 0x2599c0: 0xa2430040  sb          $v1, 0x40($s2)
    ctx->pc = 0x2599c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 64), (uint8_t)GPR_U32(ctx, 3));
label_2599c4:
    // 0x2599c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2599c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2599c8:
    // 0x2599c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2599c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2599cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2599ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2599d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2599d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2599d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2599d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2599d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2599D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2599DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2599D8u;
        // 0x2599dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2599D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2599E0u;
}
