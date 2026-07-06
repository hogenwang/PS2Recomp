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

// Function: sub_00350FF0
// Address: 0x350ff0 - 0x351290
void sub_00350FF0_0x350ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350FF0_0x350ff0");
#endif

    switch (ctx->pc) {
        case 0x351000u: goto label_351000;
        case 0x351014u: goto label_351014;
        case 0x351054u: goto label_351054;
        default: break;
    }

    ctx->pc = 0x350ff0u;

    // 0x350ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350ff8: 0xc0d4370  jal         func_350DC0
    ctx->pc = 0x350FF8u;
    SET_GPR_U32(ctx, 31, 0x351000u);
    ctx->pc = 0x350DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350DC0u, 0x350FF8u, 0x351000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351000u;
label_351000:
    // 0x351000: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x351000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x351004: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x351004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x351008: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x351008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x35100c: 0xc0bb4bc  jal         func_2ED2F0
    ctx->pc = 0x35100Cu;
    SET_GPR_U32(ctx, 31, 0x351014u);
    ctx->pc = 0x351010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35100Cu;
    // 0x351010: 0x27a7001f  addiu       $a3, $sp, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED2F0u, 0x35100Cu, 0x351014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351014u;
label_351014:
    // 0x351014: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
    ctx->pc = 0x351014u;
    {
        const bool branch_taken_0x351014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351014) {
            ctx->pc = 0x351018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351014u;
            // 0x351018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351284u;
            goto label_351284;
        }
    }
    ctx->pc = 0x35101Cu;
    // 0x35101c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351020: 0x93a3001f  lbu         $v1, 0x1F($sp)
    ctx->pc = 0x351020u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x351024: 0x90429490  lbu         $v0, -0x6B70($v0)
    ctx->pc = 0x351024u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x351028: 0x10620095  beq         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x351028u;
    {
        const bool branch_taken_0x351028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x351028) {
            ctx->pc = 0x351280u;
            goto label_351280;
        }
    }
    ctx->pc = 0x351030u;
    // 0x351030: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x351030u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351034: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x351034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x351038: 0x93a60011  lbu         $a2, 0x11($sp)
    ctx->pc = 0x351038u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x35103c: 0x93a70012  lbu         $a3, 0x12($sp)
    ctx->pc = 0x35103cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x351040: 0x93a80013  lbu         $t0, 0x13($sp)
    ctx->pc = 0x351040u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x351044: 0x93a90014  lbu         $t1, 0x14($sp)
    ctx->pc = 0x351044u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x351048: 0x93aa0015  lbu         $t2, 0x15($sp)
    ctx->pc = 0x351048u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x35104c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x35104Cu;
    SET_GPR_U32(ctx, 31, 0x351054u);
    ctx->pc = 0x351050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35104Cu;
    // 0x351050: 0x24845430  addiu       $a0, $a0, 0x5430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x35104Cu, 0x351054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351054u;
label_351054:
    // 0x351054: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351058: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x351058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x35105c: 0x90459488  lbu         $a1, -0x6B78($v0)
    ctx->pc = 0x35105cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939784)));
    // 0x351060: 0x2484db51  addiu       $a0, $a0, -0x24AF
    ctx->pc = 0x351060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957905));
    // 0x351064: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x351064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351068: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x351068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x35106c: 0x9043f35a  lbu         $v1, -0xCA6($v0)
    ctx->pc = 0x35106cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x351070: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x351070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x351074: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x351074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x351078: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x351078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35107c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x351080: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x351080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x351084: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x351084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x351088: 0x1466003a  bne         $v1, $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x351088u;
    {
        const bool branch_taken_0x351088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x35108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351088u;
        // 0x35108c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351088) {
            ctx->pc = 0x351174u;
            goto label_351174;
        }
    }
    ctx->pc = 0x351090u;
    // 0x351090: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x351090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x351094: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351098: 0x2484db55  addiu       $a0, $a0, -0x24AB
    ctx->pc = 0x351098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957909));
    // 0x35109c: 0x93a70013  lbu         $a3, 0x13($sp)
    ctx->pc = 0x35109cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x3510a0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x3510a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3510a4: 0x2463dc9c  addiu       $v1, $v1, -0x2364
    ctx->pc = 0x3510a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958236));
    // 0x3510a8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3510a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3510ac: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x3510acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3510b0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3510b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3510b4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3510b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3510b8: 0x2463dcbc  addiu       $v1, $v1, -0x2344
    ctx->pc = 0x3510b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958268));
    // 0x3510bc: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x3510bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3510c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3510c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3510c4: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x3510c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x3510c8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3510c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3510cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3510ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3510d0: 0x3086003f  andi        $a2, $a0, 0x3F
    ctx->pc = 0x3510d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x3510d4: 0x2463dcdc  addiu       $v1, $v1, -0x2324
    ctx->pc = 0x3510d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958300));
    // 0x3510d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3510d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3510dc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3510dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3510e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3510e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3510e4: 0x2463dca0  addiu       $v1, $v1, -0x2360
    ctx->pc = 0x3510e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958240));
    // 0x3510e8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3510e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3510ec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3510ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3510f0: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x3510f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3510f4: 0x2463dcc0  addiu       $v1, $v1, -0x2340
    ctx->pc = 0x3510f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958272));
    // 0x3510f8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3510f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3510fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3510fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351100: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x351100u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x351104: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x351104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x351108: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x351108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x35110c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351110: 0x2484dcc1  addiu       $a0, $a0, -0x233F
    ctx->pc = 0x351110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958273));
    // 0x351114: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x351114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x351118: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x35111c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x35111cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x351120: 0x2463dca1  addiu       $v1, $v1, -0x235F
    ctx->pc = 0x351120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958241));
    // 0x351124: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x351124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351128: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x35112c: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x35112cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x351130: 0x2463dce1  addiu       $v1, $v1, -0x231F
    ctx->pc = 0x351130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958305));
    // 0x351134: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x351134u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x351138: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x351138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35113c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x35113cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351140: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x351140u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x351144: 0x2463dca2  addiu       $v1, $v1, -0x235E
    ctx->pc = 0x351144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958242));
    // 0x351148: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x351148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35114c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x35114cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351150: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x351150u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x351154: 0x2463dcc2  addiu       $v1, $v1, -0x233E
    ctx->pc = 0x351154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958274));
    // 0x351158: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x351158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35115c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x35115cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351160: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x351160u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x351164: 0x2463dce2  addiu       $v1, $v1, -0x231E
    ctx->pc = 0x351164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958306));
    // 0x351168: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x351168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35116c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x35116Cu;
    {
        const bool branch_taken_0x35116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35116Cu;
        // 0x351170: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35116c) {
            ctx->pc = 0x351278u;
            goto label_351278;
        }
    }
    ctx->pc = 0x351174u;
label_351174:
    // 0x351174: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351178: 0x93a80010  lbu         $t0, 0x10($sp)
    ctx->pc = 0x351178u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35117c: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x35117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x351180: 0x93a60011  lbu         $a2, 0x11($sp)
    ctx->pc = 0x351180u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x351184: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x351184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351188: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x351188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35118c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x35118cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351190: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x351190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x351194: 0x2463dc9c  addiu       $v1, $v1, -0x2364
    ctx->pc = 0x351194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958236));
    // 0x351198: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x351198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x35119c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3511a0: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x3511a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x3511a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3511a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3511a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3511a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3511ac: 0x2463dcbc  addiu       $v1, $v1, -0x2344
    ctx->pc = 0x3511acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958268));
    // 0x3511b0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3511b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3511b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3511b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3511b8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3511b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3511bc: 0x2463dcdc  addiu       $v1, $v1, -0x2324
    ctx->pc = 0x3511bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958300));
    // 0x3511c0: 0x93a40012  lbu         $a0, 0x12($sp)
    ctx->pc = 0x3511c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x3511c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3511c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3511c8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3511c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3511cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3511ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3511d0: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x3511d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x3511d4: 0x2463dca0  addiu       $v1, $v1, -0x2360
    ctx->pc = 0x3511d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958240));
    // 0x3511d8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x3511d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3511dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3511dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3511e0: 0xa0e80000  sb          $t0, 0x0($a3)
    ctx->pc = 0x3511e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3511e4: 0x2463dcc0  addiu       $v1, $v1, -0x2340
    ctx->pc = 0x3511e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958272));
    // 0x3511e8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x3511e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3511ec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3511ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3511f0: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x3511f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3511f4: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x3511f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x3511f8: 0x93a60013  lbu         $a2, 0x13($sp)
    ctx->pc = 0x3511f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x3511fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3511fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351200: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x351200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x351204: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351208: 0x93a40014  lbu         $a0, 0x14($sp)
    ctx->pc = 0x351208u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x35120c: 0x2463dca1  addiu       $v1, $v1, -0x235F
    ctx->pc = 0x35120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958241));
    // 0x351210: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x351210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x351214: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x351214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351218: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x35121c: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x35121cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x351220: 0x2463dcc1  addiu       $v1, $v1, -0x233F
    ctx->pc = 0x351220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958273));
    // 0x351224: 0x3085000f  andi        $a1, $a0, 0xF
    ctx->pc = 0x351224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x351228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x351228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35122c: 0x93a40015  lbu         $a0, 0x15($sp)
    ctx->pc = 0x35122cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x351230: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x351230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x351234: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351238: 0x2463dce1  addiu       $v1, $v1, -0x231F
    ctx->pc = 0x351238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958305));
    // 0x35123c: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x35123cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x351240: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x351240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351244: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351248: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x351248u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x35124c: 0x2463dca2  addiu       $v1, $v1, -0x235E
    ctx->pc = 0x35124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958242));
    // 0x351250: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x351250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351254: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x351258: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x351258u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35125c: 0x2463dcc2  addiu       $v1, $v1, -0x233E
    ctx->pc = 0x35125cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958274));
    // 0x351260: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x351260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351264: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x351264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x351268: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x351268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x35126c: 0x2463dce2  addiu       $v1, $v1, -0x231E
    ctx->pc = 0x35126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958306));
    // 0x351270: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x351270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x351274: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x351274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_351278:
    // 0x351278: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x351278u;
    {
        const bool branch_taken_0x351278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351278u;
        // 0x35127c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351278) {
            ctx->pc = 0x351284u;
            goto label_351284;
        }
    }
    ctx->pc = 0x351280u;
label_351280:
    // 0x351280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x351280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351284:
    // 0x351284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351288: 0x3e00008  jr          $ra
    ctx->pc = 0x351288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351288u;
        // 0x35128c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351290u;
}
